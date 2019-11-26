#include "general_controller.h"
#include "decimal.h"
#include "binary.h"

int binaryToDecimal(char *bin){
    int decimal = 0;
    for(int i = MAX_LENGTH -1; i>=0; i--){
        decimal+= ((bin[i]-'0')*(powerExt(2, MAX_LENGTH-i-1)));
    }
    return decimal;
}

int *binaryToSignedTwo(char *bin){
    return (decimalToSignedTwo((binaryToDecimal(bin)*-1)));
}

int *binaryToSignedOne(char *bin){
    return (decimalToSignedOne(binaryToDecimal(bin)));
}

char *binaryToHex(char *bin){
    return (decimalToHex(binaryToDecimal(bin)));
}

void binaryInterface(){
    char *number = (char*) malloc(sizeof(char)*MAX_LENGTH);
    printf("Digite o número: ");
    scanf("%s", number);
    giveZeroes(&number, strlen(number));
    printf("Número em decimal: %d\n", binaryToDecimal(number));
    showNumbers("complemento de 1", binaryToSignedOne(number));
    showNumbers("Complemento de 2", binaryToSignedTwo(number));
    showAlpha("hexadecimal", binaryToHex(number));
    free(number);

}