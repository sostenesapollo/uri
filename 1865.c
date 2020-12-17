#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int c, f, n; 
    char nome[10];

    scanf("%d", &n);
    

    for(int i=0; i<n; i++) {
        scanf("%s %d", nome, &f);
        // printf("%d %d %d %d %d", nome[0], nome[1], nome[2], nome[3], nome[0] + nome[1] + nome[2] + nome[3]);
        if(nome[0] + nome[1] + nome[2] + nome[3] == 413) 
            printf("Y\n");
        else 
            printf("N\n");
    }

    return 0;
}