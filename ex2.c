#include <stdio.h>
#include <math.h>

int main(){ 
    /*
    Estrutura switch case */
int codigo,quantidade;
double total;

printf("digite o codigo:");
scanf("%d", &codigo);

printf("digite a quantidade:");
scanf("%d", &quantidade);

switch(codigo){
    case 100:
    total= 10.10 * quantidade;
    printf("O valor do lanche é :%.2lf",total);
    break;
    
    case 101:
    total= 8.30 * quantidade;
    printf("O valor do lanche é :%.2lf",total);
    break;

    case 102:
    total= 8.50 * quantidade;
    printf("O valor do lanche é :%.2lf",total);
    break;
    
    case 103:
    total= 12.50 * quantidade;
    printf("O valor do lanche é :%.2lf",total);
    break;

    case 104:
    total= 13.25 * quantidade;
    printf("O valor do lanche é :%.2lf",total);
    break;
    
    default:
    printf("ERROR");
}

    
return 0 ;
}




