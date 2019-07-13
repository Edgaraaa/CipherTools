#include "affine.h"
#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <assert.h>
#include <QString>

QString stren;
QString strde;
void affine::get_en_code(QString str)
{
    QByteArray ba = str.toLatin1();
    this->en_code=ba.data();
}
void affine::get_de_code(QString str)
{
    QByteArray ba=str.toLatin1();
    this->de_code=ba.data();
}
int affine::gcd(int a, int b)
{
    return (b == 0) ? a : gcd(b,a%b);
}
void affine::set_coprime(int coprime[], int n)
{
    int i = 1;

    for (; i < n; i++)
    {
        if (this->gcd(n, i) == 1)
            *(coprime++) = i;
    }
}
int affine::get_a(int coprime[], int a, int n)
{
    int i = 0;

    for (; coprime[i] != 0; i++)
    {
        if ((a*coprime[i]) % n == 1)
            return coprime[i];
    }
    return 0;
}
QString affine::en_cypto(int a, int b)
{
    for (int i = 0; i < strlen(this->en_code); i++)
    {
        if (this->en_code[i] >= 'A'&&this->en_code[i] <= 'Z')
        {
            this->de_code[i] = ((this->en_code[i] - 'A')*a + b) % 26 + 'A';
        }
        else if (this->en_code[i] >= 'a'&&this->en_code[i] <= 'z')
        {
            this->de_code[i] = ((this->en_code[i] - 'a')*a + b) % 26 + 'a';
        }else this->de_code[i] = ' ';
    }
    stren=QString(QLatin1String(this->de_code));
    return stren;
}
QString affine::de_cypto(int a, int b, int n)
{
    char *p_str = this->de_code;
    int coprime[32] = { 0 };
    int _a = 0;
    int i = 0;

    assert(this->de_code);

    for (; i < 32; i++)
    {
        coprime[i] = 0;
    }
    this->set_coprime(coprime, n);
    _a = this->get_a(coprime, a, n);
    for (int i = 0; i < strlen(this->de_code); i++)
    {
        if (this->de_code[i] >= 'A'&&this->de_code[i] <= 'Z')
        {
            this->de_code[i] -= 'A';
            this->de_code[i] = (_a*(this->de_code[i] - b + n)) % n;
            this->de_code[i] += 'A';
        }
        else if (this->en_code[i] >= 'a'&&this->en_code[i] <= 'z')
        {
            this->de_code[i] -= 'a';
            this->de_code[i] = (_a*(this->de_code[i] - b + n)) % n;
            this->de_code[i] += 'a';
        }
        else this->de_code[i] = ' ';
    }

    strde=QString(QLatin1String(p_str));
    return strde;
}
