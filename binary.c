#include "general_controller.h"
#include "binary.h"

int binaryToDecimal(int *bin){
    int decimal = 0;
    for(int i = MAX_LENGTH -1; i>=0; i--){
        decimal+= bin[i]*(powerExt(2, MAX_LENGTH-i+1));
    }
    return decimal;
}

int *binaryToSignedTwo(){

}

int *binaryToSignedOne(){

}

int *binaryToHex(){

}