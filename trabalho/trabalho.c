#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "");
    
    char nome[50];
    int idade, cpf[11];
    int soma, resto, digito1, validade;
    int digito2 = 0;
    int chave;
    
    // leitura do nome
    printf("Digite seu nome: ");
    scanf("%[^\n]", nome); 
 
    //leitura da idade
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    //verificacao de maioridade
    if(idade < 18){
        printf("Voce e menor de idade.\n");
        goto fim;
    } else if(idade > 60){
        printf("Voce e um anciao.\n");
    } 

    printf("Digite sua chave Bitcoin: (Ela vai estar segura, confia): ");
    scanf("%d", &chave);

    //leitura do CPF
    printf("Digite seu CPF (somente números): ");
    for (int i = 0; i < 11; i++) {
        scanf("%1d", &cpf[i]); 
    }

    // Validação do primeiro digito
    soma = 0;
    for (int i = 0; i < 9; i++) {
        soma += cpf[i] * (10 - i);
    }
    resto = soma % 11;
    digito1 = (resto < 2) ? 0 : 11 - resto;

    // Cálculo do segundo dígito verificador
    soma = 0;
    for (int i = 0; i < 9; i++) {
        soma += cpf[i] * (11 - i);
    }
    soma += digito1 * 2;
    resto = soma % 11;
    digito2 = (resto < 2) ? 0 : 11 - resto;
    
    //validacao do cpf em si 
    if (digito1 == cpf[9] && digito2 == cpf[10]) {
        printf("CPF válido.\n");
        validade = 1;
    } else {
        printf("CPF inválido.\n");
        validade = 0;
    }

    switch(validade){
    // Se o CPF for válido, armazenar os dados (por exemplo, imprimir na tela)
        case 1: 
            printf("\nDados cadastrados:\n");
            printf("Nome: %s\n", nome);
            printf("Idade: %d\n", idade);
            printf("CPF: ");
            for (int i = 0; i < 11; i++) {
            printf("%d", cpf[i]);}
            printf("\n");
            printf("Chave BTC: *** segredo 🤫\n");
            break;
        case 0: 
            printf("Voce nao pode cadastrar nenhum dado porque seu CPF e invalido.\n");
            break;
        default:
            printf("Voce fez alguma coisa inesperada.\n");         
    
    }
    fim:
    return 0;
}