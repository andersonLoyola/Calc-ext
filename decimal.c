#include "general_controller.h"


int *decimalToBinary(int decimal){
    int param = abs(decimal);
    int *binary = (int*) malloc(sizeof(int)*MAX_LENGTH);
    for(int i = MAX_LENGTH-1; i>=0; param/=2,i--){
        binary[i] = param%2;
    }
    return binary;
}

int *decimalToSignedOne(int decimal){
    int *signed_one = decimalToBinary(decimal);
    for(int i = 0; i<MAX_LENGTH; i++){
        if(signed_one[i] == 0)
            signed_one[i] = 1;
        else
            signed_one[i] = 0;
        
    }
    return signed_one;
}

int *decimalToSignedTwo(int decimal){
    if(decimal>=0)
        return decimalToBinary(decimal);
    else
    {
        int *signed_two = decimalToSignedOne(decimal);
        signed_two[MAX_LENGTH-1] +=1;
        normalize_signed(&signed_two);
        return signed_two;
    }
}

char *decimalToHex(int decimal){
    int param = abs(decimal);
    char *hexadecimal = (char*) malloc(sizeof(char)*MAX_LENGTH);
    for(int i  = MAX_LENGTH-1; i>=0; param/=16,i--){
        hexadecimal[i] = encodeHex(param%16);
    }
    return hexadecimal;
}



void  decimalInterface(){
    int number;
    printf("Digite o número: ");
    scanf("%d", &number);
    showNumbers("binario", decimalToBinary(number));
    showNumbers("complemento de 1", decimalToSignedOne(number));
    showNumbers("complemento de 2", decimalToSignedTwo(number));
    showAlpha("Hexadecimal", decimalToHex(number));
}