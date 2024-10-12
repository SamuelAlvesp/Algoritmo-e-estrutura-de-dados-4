#include <stdio.h>

int main()
{ 
   int num;
   
   printf ("Digite um numero inteiro positivo:");
   scanf ("%d", &num); 
   printf("Números pares entre 1 e %d:\n", num);

    for (int i = 2; i <= num; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}