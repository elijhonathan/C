#include <stdio.h>
#include <stdbool.h> 

int main(void)
{
    bool a,b;
    
    bool resposta;
    
    a = false;
    b = true;
    
    resposta = a ^ b;
    
    if (resposta == true)
    {
        printf("A resposta eh true");
    }
    if (resposta == false)
    {
        printf("A resposta eh false");
    }
    
}
