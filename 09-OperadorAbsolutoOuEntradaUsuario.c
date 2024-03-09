#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    char r1, r2;
    
    bool a,b,resposta;
    
    printf("Digite o primeiro parametro v para true ou f para false: ");
    scanf(" %c", &r1);
    
    printf("Digite o segundo parametro v para true ou f para false: ");
    scanf(" %c", &r2);
    
    if(r1 == 'v' || r1 == 'V')
    {
       a = true;
    }
    if(r1 == 'f' || r1 == 'F')
    {
       a = false;
    }
    
    if(r2 == 'v' || r2 == 'V')
    {
       b = true;
    }
    if(r2 == 'f' || r2 == 'F')
    {
       b = false;
    }
    
    
    resposta = a ^ b;
    
    if(resposta == true)
    {
        printf("A resposta eh true");
    }
    if(resposta == false)
    {
        printf("A resposta eh false");
    }

}
