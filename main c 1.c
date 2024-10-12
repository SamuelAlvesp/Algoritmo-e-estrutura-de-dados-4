#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

     switch (idade) {
        case 0 ... 17: 
            printf("Menor de idade\n");
            break;
        case 18 ... 65: 
            printf("Maior de idade\n");
            break;
        case 66 ... 100: 
            printf("Idoso\n");
            break;
    }

    return 0;
}
