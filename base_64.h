#pragma once
#ifndef BASE_64
#define BASE_64
#include <cstdio>
#include <iostream>
#include <cstring>
void enBase64(char *enString, int stringLength, char *outString, int &outStringLen);
void deBase64(char *inString, int inStringLen, char *outString, int &outStringLen);
#endif // !BASE_64




