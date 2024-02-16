int main(int argc, char const *argv[])
{
    char  nome[100], endereco[100];
    int idade;


    printf("Digite o seu nome: ");
    scanf("%s", nome);

    printf("Digite o seu endereco: ");
    scanf("%s", endereco);

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Bem vindo %s ,", nome);
    printf("sua idade e %d ", idade);
    printf("e voce mora %s", endereco);
    

    return 0;
}
