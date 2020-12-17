#include <stdio.h>

int main() {

    int n,c, c2=1, m=0;  

    while(scanf("%d", &n) != EOF) {        
        
        int c = 0;

        for(int i = -1; i<= n; i++) {            
            for(int j = 0; j< i; j++){ 
                c++;
            }
        }
        printf("Caso %d: %d numero\n0 ",c2, c);
        
        for(int i = -1; i<= n; i++) {            
            for(int j = 0; j< i; j++) {
                
                
                if(m < n)
                    printf("%d ", i);
                m++;
            }
        }
        m=0;
        c2++;
    }

    return 0;
}