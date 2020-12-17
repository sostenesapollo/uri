#include <stdio.h>
 
int main() {
 
    int size;

    while(scanf("%d",&size)!=EOF)
    {         

        int m[size][size];

        for(int i = 0; i < size; i++) {

            for(int j = 0; j < size; j++) 
            {

                m[i][j] = 0;
                
                if(i == j)
                    m[i][j] = 2;

                if(i+j == size-1)
                m[i][j] = 3;
                
                if(i >= size/3 && j >= size/3 && i < size-(size/3) && j < size-(size/3))
                    m[i][j] = 1;

                if(i == ((size+1)/2) && j == ((size+1)/2))
                    m[i-1][j-1] = 4;

            }

        }


        for(int i = 0; i < size; i++) {
            for(int j = 0; j < size; j++) {
                printf("%d", m[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
 
    return 0;
}