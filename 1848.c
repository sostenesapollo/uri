#include <stdio.h>
#include <stdlib.h>

int main() {
    // - 45    * 42
    char c[10];
    int soma = 0, end = 0, cont = 0;

    for(int i=0; i<1000; i++) {
        
        gets(c);
        
        if(c[0] == 99) {
            cont++;
            end = 1;            
        } else {  
            // cont = 0;

            if(c[0] == 45) c[0] = 0; else c[0] = 1;
            if(c[1] == 45) c[1] = 0; else c[1] = 1;
            if(c[2] == 45) c[2] = 0; else c[2] = 1;           

            soma += (2*2*c[0]) + (2*1*c[1]) + (1*c[2]);
        }

        if(end == 1) {
            printf("%d\n", soma);
            end = 0;            
            soma = 0;            
        }

        if(cont == 3) {
            break;
        }
        
    }


    return 0;
}