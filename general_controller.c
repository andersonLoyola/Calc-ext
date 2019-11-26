#include "general_controller.h"

void showNumbers(char type[], int *number){
    printf("Número em %s: \n", type);
    for(int i = 0; i<MAX_LENGTH; i++){
        printf("%d", number[i]);
    }
    free(number);
    printf("\n");
}

void normalize_signed(int **bin){
    for(int i = MAX_LENGTH-1; i>=0; i--){
        if((*bin)[i] >= 2){
            (*bin)[i]-=2;
            if(i-1>=0)
                (*bin)[i-1]+=1;
        }
    }
}

int decodeHex(char alpha_hex){
    switch (alpha_hex){
        case 'A':
            return 10;
            break;
        case 'B':
            return 11;
            break;
        case 'C':
            return 12;
            break;
        case 'D':
            return 13;
            break;
        case 'E':
            return 14;
            break;
        case 'F':
            return 15;
            break;
        default:
            return alpha_hex - '0';
            break;
    }
}

char encodeHex(int number_hex){
    switch(number_hex){
        case 10:
            return 'A';
            break;
        case 11:
            return 'B';
            break;
        case 12:
            return 'C';
            break;
        case 13:
            return 'D';
            break;
        case 14:
            return 'E';
            break;
        case 15:
            return 'F';
            break;
        default:
            return number_hex+'0';
            break;

    }
}
void showAlpha(char str[], char *alpha){
    printf("Número em %s:\n", str);
    for(int i = 0; i<MAX_LENGTH; i++){
        printf("%c", alpha[i]);
    }
    printf("\n");
    free(alpha);
}

int powerExt(int param, int exp){
    int aux = 1;
    for(int i = 0; i<exp;i++){
        aux*=param;
    }
    return aux;
}

void giveZeroes(char **str_reference, int length){
    char *aux = (*str_reference);
    for(int i = MAX_LENGTH-length, j = 0; i<MAX_LENGTH; i++, j++){
        (*str_reference)[i] = aux[j];
    }
    for(int i = 0; i<MAX_LENGTH-length; i++){
            (*str_reference)[i] = '0';
    }
}

void giveZeroesInteger(int **arr_reference, int length){
    int *aux = (*arr_reference);
    for(int i = MAX_LENGTH - length, j=0; i< MAX_LENGTH; i++, j++){
        (*arr_reference)[i] = aux[j];
    }
    for(int i = 0; i<MAX_LENGTH; i++){
        (*arr_reference)[i] = 0;
    }
}

void show_menu(){
    printf("0 - sair\n");
    printf("1 - Decimal\n");
    printf("2 - Binária\n");
    printf("3 - Hexadecimal\n");
    printf("4 - complemento de 1\n");
    printf("5 - complemento de 2\n");
    printf("Digite a opção de base desejada: ");
}