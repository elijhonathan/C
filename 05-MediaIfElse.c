int main(int argc, char const *argv[])
{
    float nota1, nota2, media;
    

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if(media >= 7.0)
    {
        printf("Voce passou!");
    }
     else if(media < 7.0 && media >= 5.0)
    {
        printf("Voce foi para a recuperacao!");
    }
     else if(media < 5)
     {
        printf("Voce esta reprovado!");
     }
    else
    {
        printf("Voce digitou algo errado, tente novamente!");
    } 

    return 0;
}
