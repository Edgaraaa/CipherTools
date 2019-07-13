#pragma once
/*A / a	aaaaa	H / h	aabbb	O / o	abbba	V / v	babab
B / b	aaaab	I / i	abaaa	P / p	abbbb	W / w	babba
C / c	aaaba	J / j	abaab	Q / q	baaaa	X / x	babbb
D / d	aaabb	K / k	ababa	R / r	baaab	Y / y	bbaaa
E / e	aabaa	L / l	ababb	S / s	baaba	Z / z	bbaab
F / f	aabab	M / m	abbaa	T / t	baabb
G / g	aabba	N / n	abbab	U / u	babaa*/

#include <iostream>
#include <cstring>
#include <cstdio>
#include <string>
#include <vector>
#include <QString>
using namespace std;

class bacon {
private:
    string en_code="";
    string de_code="";
public:
    void get_encode(QString str);
    void get_vector();
    QString en_cypto();
    QString de_cypto();
};
