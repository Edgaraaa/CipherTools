#include "rail.h"
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <QString>
char map[100][100] = { 0 };
using namespace std;

void rail_fence::get_en_code(QString str)
{
    char *ch;
    QByteArray ba=str.toLatin1();
    ch=ba.data();
    int p = 0;
    for (int i = 0; i < strlen(ch); i++)
        if (ch[i] != ' ')
        {
            this->en_code[p++] = ch[i];
        }
}
void rail_fence::get_de_code(QString str)
{
    char *ch;
    QByteArray ba=str.toLatin1();
    ch=ba.data();
    int p = 0;
    for (int i = 0; i < strlen(ch); i++)
        this->de_code[p++] = ch[i];
}
QString rail_fence::en_cypto(int a)
{
    QString anss;
    int num = strlen(this->en_code) % a;
    int num2 = strlen(this->en_code) / a;
    int p = 0;
    int k = 0;
    if (num != 0) k = 1;
    for (int i = 0; i < num2 + k; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (p == strlen(this->en_code)) break;
            map[i][j] = this->en_code[p];
            p++;
        }
    }
    int kkl = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < num2 + k; j++)
        {
            if (map[j][i] == 0) continue;
            this->de_code[kkl++] = map[j][i];
        }
    }
    anss=QString(QLatin1String(this->de_code));
    return anss;
}
QString rail_fence::de_cypto(int a)
{
    QString anss;
    char map[100][100] = {0};
    int num = strlen(this->de_code) / a;
    int num1 = strlen(this->de_code) % a;
    int p = (num1 != 0) ? 1 : 0;
    num += p;
    int k = 0;
    int flag = 0;
    p = 0;
    if (num1 != 0)
    {
        for (int i = 0; i < num1; i++)
        {
            for (int j = 0; j < num; j++)
            {
                if (p >= strlen(this->de_code)) {
                    flag = 1;
                    break;
                }
                map[j][i] = this->de_code[p];
                p++;
                //cout << map[j][i] << " ";
            }
            //cout << endl;
            if (flag == 1) break;
        }
        for (int i = num1; i < a; i++)
        {
            for (int j = 0; j < num - 1; j++)
            {
                if (p >= strlen(this->de_code)) {
                    flag = 1;
                    break;
                }
                map[j][i] = this->de_code[p];
                p++;
                //cout << map[j][i] << " ";
            }
            //cout << endl;
            if (flag == 1) break;
        }
    }
    else {
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < num; j++)
            {
                if (p >= strlen(this->de_code)) {
                    flag = 1;
                    break;
                }
                map[j][i] = this->de_code[p];
                p++;
                //cout << map[j][i] << " ";
            }
            //cout << endl;
            if (flag == 1) break;
        }
    }
    char str1[1024] = { 0 };
    p = 0;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (map[i][j] == 0)
            {
                continue;
            }
            str1[p++]=map[i][j];
        }
    }
    anss=QString(QLatin1String(str1));
    return anss;
}
