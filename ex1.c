#include <stdio.h>
#include <math.h>

int main(){ 
    /*
    Estrutura switch case */
int opcao;

printf("digite a DDD:");
scanf("%d", &opcao);

switch(opcao){
    case 61:
    printf("Brasília");
    break;
    
    case 71:
    printf("Salvador");
    break;
    
    case 11:
    printf("São Paulo");
    break;
    
    case 21:
    printf("Rio de Janeiro");
    break;
    
    case 32:
    printf("Juiz de Fora");
    break;
    
    case 19:
    printf("Campinas");
    break;
    
    case 27:
    printf("Vitória");
    break;
    
    case 31:
    printf("Belo Horizonte");
    break;
    
    default:
    printf("Qualquer outro - uma cidade no Brasil sem identificação");
}

    
return 0 ;
}
