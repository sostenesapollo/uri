    #include <stdio.h>

    int fib(int n) {
        
        int f[47] = {0,1,1};

        for(int i = 0 ; i <= 46 ; i ++) {
            if(i > 1) {
                f[i] = f[i-1] + f[i-2];
            }
        }
        
        for(int i = 0 ; i < n; i ++) {
            printf("%d", f[i]);
            if(i < n-1) {
                printf(" ");
            }
        }

        return n;
    }

    int main() {

        int n;

        scanf("%d", &n);

        fib(n);
        printf("\n");

        return 0;
    }