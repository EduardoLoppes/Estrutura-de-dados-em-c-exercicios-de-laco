#include <stdio.h>
int main()
{
    int num, n1;
    
    for(n1 = 100; n1 < 201; n++){
        if(n1 % 2 != 0){
            printf("%d \n", n1);
        }
    }
}