#include <stdio.h>

int main() 
    {
        int n, i, numero, contador = 0;
    
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &n);
    
        int arreglo[n];

        printf("Ingrese los elementos del arreglo:\n");
        for (i = 0; i < n; i++) 
            {
                scanf("%d", &arreglo[i]);
            }
    
        printf("Ingrese el número a buscar: ");
        scanf("%d", &numero);
    
        for (i = 0; i < n; i++) 
            {
                if (arreglo[i] = numero) 
                    {
                        contador = contador + 1;
                    }
            }
    
        printf("El número %d aparece %d veces en el arreglo.\n", numero, contador);
    
        return 0;
    }
