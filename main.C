
#include <stdio.h>

// Exibe o menu de operacoes da calculadora
void mostrarMenu() {
    printf("\n============================\n");
    printf("      CALCULADORA EM C      \n");
    printf("============================\n");
    printf("1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("0 - Sair\n");
    printf("============================\n");
    printf("Escolha uma opcao: ");
}

int main() {
    int opcao;
    double num1, num2, resultado;

    do {
        mostrarMenu();

        // Verifica se a opcao digitada e valida
        if (scanf("%d", &opcao) != 1) {
            printf("\nEntrada invalida! Digite um numero.\n");

            // Limpa a entrada incorreta
            int caractere;
            while ((caractere = getchar()) != '\n' &&
                   caractere != EOF) {
            }

            opcao = -1;
            continue;
        }

        // Encerra o programa quando a opcao for zero
        if (opcao == 0) {
            printf("\nCalculadora encerrada. Ate mais!\n");
            break;
        }

        // Confere se a opcao pertence ao menu
        if (opcao < 1 || opcao > 4) {
            printf("\nOpcao invalida! Tente novamente.\n");
            continue;
        }

        // Recebe os dois numeros do usuario
        printf("Digite o primeiro numero: ");
        if (scanf("%lf", &num1) != 1) {
            printf("Numero invalido!\n");

            int caractere;
            while ((caractere = getchar()) != '\n' &&
                   caractere != EOF) {
            }

            continue;
        }

        printf("Digite o segundo numero: ");
        if (scanf("%lf", &num2) != 1) {
            printf("Numero invalido!\n");

            int caractere;
            while ((caractere = getchar()) != '\n' &&
                   caractere != EOF) {
            }

            continue;
        }

        // Executa a operacao selecionada
        switch (opcao) {
            case 1:
                resultado = num1 + num2;
                printf("\nResultado: %.2lf\n", resultado);
                break;

            case 2:
                resultado = num1 - num2;
                printf("\nResultado: %.2lf\n", resultado);
                break;

            case 3:
                resultado = num1 * num2;
                printf("\nResultado: %.2lf\n", resultado);
                break;

            case 4:
                if (num2 == 0) {
                    printf("\nErro: divisao por zero!\n");
                } else {
                    resultado = num1 / num2;
                    printf("\nResultado: %.2lf\n", resultado);
                }
                break;
        }

    } while (1);

    return 0;
}
