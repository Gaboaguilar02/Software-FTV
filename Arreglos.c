#include <stdio.h> 

int main() { 
    int A[3][4] = {{1, 2, 3, 6}, {4, 5, 6, 5}, {7, 8, 9, 5}}; 
    int B[4][2] = {{9, 8}, {6, 5}, {3, 2},{2, 3}}; 
    int resultado[4][2]; 
    int i=0, j=0, k=0, L=0; 

    for (i = 0; i < 3; i++) { 
        for (j = 0; j < 2; j++) { 
            int Suma = 0; 
            for (k = 0; k < 4; k++) {    
                for (L = 0; L < 2; L++) {  
                    Suma += A[i][k] * B[L][j]; 
                }
            }

            resultado[i][j] = Suma; 
        } 
    } 

    printf("Resultado:\n"); 
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) { 
            printf("%d ", resultado[i][j]); 
        } 
        printf("\n"); 
    } 

    return 0;
}