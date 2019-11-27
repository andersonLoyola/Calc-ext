#include "general_controller.h"
#include "decimal.h"
#include "binary.h"
#include "hexadecimal.h"
#include "signed_one.h"
int main(void){
    int opt = 1;
    while(opt){
        show_menu();
        scanf("%d", &opt);
        printf("\n");
        switch (opt){
            case 0:
                printf("sdds do que a gente ainda não viveu ainda\n");
                break;
            case 1:
                decimalInterface();
                break;
            case 2:
                binaryInterface();
                break;
            case 3:
                hexInterface();
                break;
            case 4:
                signedOneInterface();
                break;
            case 5:
                printf("Em implementação 2\n");
                break;
            default:
                printf("Digite uma opção válida");
                break;
        }
    }
    // decimalInterface();
    // binaryInterface();
    // hexInterface();
}