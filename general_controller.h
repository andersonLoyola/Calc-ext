#ifndef __GENERAL_CONTROLLER__
#define __GENERAL_CONTROLLER__
#include<stdio.h>
#include<stdlib.h>
#define MAX_LENGTH 16
void showNumbers(char type[], int *number);
void normalize_signed(int **bin);
int decodeHex(char alpha_hex);
char encodeHex(int number_hex);
void showAlpha(char str[], char *alpha);
int powerExt(int param, int exp);
#endif