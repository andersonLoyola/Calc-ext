#include "general_controller.h"
#include "binary.h"
int bx = 1;
int *signedOneToBinary(char *signed_one){
    int *binary = (int*) malloc(sizeof(int)*MAX_LENGTH);
    for(int i = 0; i < MAX_LENGTH; i++){
        if(signed_one[i] == '0')
            binary[i] = 1;
        else if(signed_one[i] == '1')
            binary[i] = 0;
    }
    return binary;
}

int signedOneToDecimal(char *signed_one){
    int decimal = 0;
    return bx*binaryToDecimal(signed_one);
}



void signedOneInterface(){
    char *signed_one = (char*) malloc(sizeof(char)*MAX_LENGTH);
    printf("Digite o número: ");
    scanf("%s", signed_one);
    if(signed_one[0] == '1'){
        bx = -1;
        signed_one[0] = '0';
    }
    giveZeroes(&signed_one, strlen(signed_one));
    printf("Número em decimal:");
    printf("\n%d\n", signedOneToDecimal(signed_one));
    showNumbers("binário", signedOneToBinary(signed_one));
    free(signed_one);
}