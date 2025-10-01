int ehBissexto(int ano) {
    if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int ano;
    printf("Digite um ano: ");
    scanf("%d", &ano);             // lê o ano do usuário
    int resultado = ehBissexto(ano);
    if (resultado == 1) {
        printf("%d é bissexto.\n", ano);
    } else {
        printf("%d não é bissexto.\n", ano);
    }
    return 0;
}
