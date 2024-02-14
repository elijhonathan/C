int main(int argc, char const *argv[])
{
    float horasTrabalhadas, valorHoraAula, descontos, salarioBruto, salarioLiquido;

    valorHoraAula = 50;

    printf("Digite quantas horas foram trabalhadas no mes: ");
    scanf("%f", &horasTrabalhadas);

    salarioBruto = horasTrabalhadas * valorHoraAula;

    descontos = 20.0 / 100.0;

    salarioLiquido = salarioBruto - (salarioBruto * descontos);

    printf("O seu salario bruto e %f\n", salarioBruto);
    printf("O seu salario liquido e %f", salarioLiquido);

    return 0;
}
