int main (void)
{
    int sharp;

    do
    {
        printf("Digite o tamanho da escada de 1 a 8: ");
        scanf("%i", &sharp);
    }
    while(sharp < 1 || sharp > 8);

    for(int linha = 0; linha < sharp; linha++)
    {
        for(int coluna = 0; coluna < sharp; coluna++)
        {
            if (sharp - linha - 2 < coluna)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }



}
