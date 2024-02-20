int main(int argc, char const *argv[])
{
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if(numero > 30)
    {
        printf("Seu numero %d e maior que 30", numero);
    }
    else
    {
        printf("Seu numero %d nao e maior que 30", numero);
    }


    return 0;
}
