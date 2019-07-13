#pragma once
#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <assert.h>
#include <QString>
using namespace std;
class affine
{
public:
    char *en_code;
    char *de_code;
    void get_en_code(QString str);
    void get_de_code(QString str);
    int gcd(int a, int b);
    void set_coprime(int coprime[], int n);
    int get_a(int coprime[], int a, int n);
    QString en_cypto(int a, int b);
    QString de_cypto(int a, int b, int n);
};
