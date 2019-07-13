#pragma once
/*
writer:Edgar
Time:2019.4.5 0:10
 */
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <string.h>
#include <cstdlib>
#include"casor.h"
#include "QString"
using namespace std;

void casor::get_en_string(QString encode)
{
    char *ch;
    QByteArray ba=encode.toLatin1();
    ch=ba.data();
    for (int i = 0; i < strlen(ch); i++)
    {
        this->en_code[i] = ch[i];
    }
}
void casor::get_de_string(QString decode)
{
    char *ch;
    QByteArray ba=decode.toLatin1();
    ch=ba.data();
    for (int i = 0; i < strlen(ch); i++)
    {
        this->de_code[i] = ch[i];
    }
}
QString casor::en_cypto(int offset_user)
{
    QString anss;
    for (int i = 0; i < strlen(this->en_code); i++)
    {
        if (this->en_code[i] >= 'a' && this->en_code[i] <= 'z') this->en_code[i] -= 32;
        this->de_code[i] = offset_user + this->en_code[i];
        if (this->en_code[i] > 'Z')
        {
            int num = this->de_code[i] - 'A';
            num %= 26;
            this->de_code[i] = num + 'A';
        }
    }
    anss=QString(QLatin1String(this->de_code));
    return anss;
}
QString casor::de_cypto(int offset_user)
{
    QString anss;
    for (int i = 0; i < strlen(this->de_code); i++)
    {
        this->en_code[i] = this->de_code[i] - offset_user;
        if (this->en_code[i] < 'A')
        {
            this->en_code[i] = 'Z' - ('A' - this->en_code[i]);
        }
    }
    anss=QString(QLatin1String(this->en_code));
    return anss;
}
