#include <stdio.h>
int main()
{
    int n1, cont1, cont2, num;
    
    for(n1 = 1; n1 < 11; n++){
        
        printf("Informe 10 valores: ");
        scanf("%d", & num);
        
        if(num > 9 && num < 21){
            cont1++;
        }
        else{
            cont2++;
        }
    }
    printf("Dentro do intervalo %d \n Fora do intervalo %d", cont1, cont2);
}