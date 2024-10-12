#include <stdio.h>

void selectionSort(float arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j; 
            }
        }
        if (maxIndex != i) {
            float temp = arr[i];
            arr[i] = arr[maxIndex];
            arr[maxIndex] = temp;
        }
    }
}

int main() {
    int n;

    printf("Digite o número de alunos: ");
    scanf("%d", &n);

    float notas[n];


    printf("Digite as notas dos alunos:\n");
    for (int i = 0; i < n; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    selectionSort(notas, n);

    printf("\nNotas em ordem decrescente:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f\n", notas[i]);
    }

    return 0;
}
