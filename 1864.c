#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int n;
    char frase[34] = "LIFE IS NOT A PROBLEM TO BE SOLVED 1";
    
    scanf("%d", &n);

    for(int i=0; i<n; i++) {
        printf("%c", frase[i]);
    }
    printf("\n");

    return 0;
}