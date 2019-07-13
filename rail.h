#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <QString>
using namespace std;
class rail_fence
{
private:
    char en_code[1024] = { 0 };
    char de_code[1024] = { 0 };
public:
    void get_en_code(QString str);
    void get_de_code(QString str);
    QString en_cypto(int a);
    QString de_cypto(int a);
};
