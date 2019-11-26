#include "general_controller.h"
#include "decimal.h"
#include "hexadecimal.h"

int hexToDecimal(char *hexadecimal){
    int decimal = 0;
    for(int i = MAX_LENGTH-1; i>=0; i--){
        int aux = decodeHex(hexadecimal[i]);
        decimal+= (aux)*(powerExt(16, MAX_LENGTH-i-1));
    }
    return decimal;
}

int *hexToBinary(char *hexadecimal){
    return decimalToBinary(hexToDecimal(hexadecimal));
}

int *hexToSignedOne(char *hexadecimal){
    return decimalToSignedOne(hexToDecimal(hexadecimal));
}

int *hexToSignedTwo(char *hexadecimal){
    return decimalToSignedTwo((hexToDecimal(hexadecimal)*-1));
}



void hexInterface(){
    char *number = (char*) malloc(sizeof(char)*MAX_LENGTH);
    printf("Digite o número: ");
    scanf("%s", number);
    giveZeroes(&number, strlen(number));
    printf("Número em decimal:\n%d\n", hexToDecimal(number));
    showNumbers("binário", hexToBinary(number));
    showNumbers("complemento de 1", hexToSignedOne(number));
    showNumbers("complemento de 2", hexToSignedTwo(number));
    free(number);
}