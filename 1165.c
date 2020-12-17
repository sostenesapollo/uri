#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, p, s=0;

    scanf("%d", &n);

    for(int i =0; i<n; i ++) {
        scanf("%d", &p);

        for(int j =1; j <= p; j++) {
            if(p % j == 0) s++;
        }

        if(s == 2)
            printf("%d eh primo\n", p);
        else
            printf("%d nao eh primo\n", p);
        s = 0;
    }

    return 0;
}