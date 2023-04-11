#include <stdio.h>
int main()
{
    int n1; 
    
    for(n1 = 1000; n1 < 2000; n++){
        printf("%d \n", n1);
    }
    
    for(n1 = 1000; n < 2000; n++){
        if(n % 11 == 5){
            printf("%d \n", n1);
        }
    }
}