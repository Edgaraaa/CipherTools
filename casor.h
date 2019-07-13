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
#include <QString>
using namespace std;
class casor
{
private:
    char en_code[1024] = { 0 };
    char de_code[1024] = { 0 };
public:
    void get_en_string(QString encode);
    void get_de_string(QString decode);
    QString en_cypto(int offset_user);
    QString de_cypto(int offset_user);
};
