#include <stdio.h>
int main()
{
    int pessoasSalarios, numPessoas;
    float maiorSalario, salario, media, filho, mediaSalario, mediaFilhos, porcentagemSalario;
    
    while(1){    
        printf("Informe o seu salario e a quantidade de filhos: ");
        scanf("%g %g", & salario, & filho);
    
        numPessoas++;
    
        if(salario < 0){
            break;
        }
        
        if(maiorSalario < salario){
            maiorSalario = salario;
        }
    
        if(salario <= 100){
            pessoasSalarios++;
        }
        
        mediaSalario += salario;
        mediaFilhos += filho;
    
    }
    printf("A media salarial é de: R$ %g \n", mediaSalario = mediaSalario / numPessoas);
    printf("A media de filhos é de: %g \n", mediaFilhos = mediaFilhos / numPessoas);
    printf("O maior salario é de: R$ %g \n", maiorSalario);
    printf("O percentual é de: %g pessoas", porcentagemSalario = (pessoasSalarios / (float)numPessoas) * 100);   
}