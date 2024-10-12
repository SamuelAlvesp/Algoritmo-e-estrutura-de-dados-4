#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int buscaBinaria(int arr[], int n, int valor) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == valor) {
            return mid; 
        }

        if (arr[mid] < valor) {
            left = mid + 1;
        } else {
        
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int n;

    printf("Digite o número de elementos: ");
    scanf("%d", &n);

    int arr[n];
    printf("Digite os números inteiros:\n");
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);

    int valor;
    printf("Digite o valor a ser pesquisado: ");
    scanf("%d", &valor);

    int resultado = buscaBinaria(arr, n, valor);

    if (resultado != -1) {
        printf("Valor %d encontrado na posição: %d\n", valor, resultado);
    } else {
        printf("Valor %d não encontrado na lista.\n", valor);
    }

    return 0;
}
