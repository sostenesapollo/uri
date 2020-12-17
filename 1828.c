#include <stdio.h>
#include <string.h>
// Pedra 213   Papel 209  tesoura 217  lagarto 205   Spock 195

// a tesoura corta o papel;            11
// o papel embrulha a pedra;           8
// a pedra esmaga o lagarto;           5              
// o lagarto envenena Spock;           2   
// Spock destrói a tesoura;            -26      
// a tesoura decapita o lagarto;       24     
// o lagarto come o papel;             -13
// o papel contesta Spock;             15    
// Spock vaporiza a pedra;             -7
// a pedra quebra a tesoura.           -19 

int main() {
    
    int t, s;
    char e1[8], e2[8];

    scanf("%d", &t);

    for(int i=1; i<=t; i++) {
        scanf("%s %s", e1, e2);
        s = (e1[0]+e1[1]+e1[2]) - (e2[0]+e2[1]+e2[2]);
        // printf("%d\n", s);
        if(s == 11 || s == 8 || s==5 || s == 2 || s==-26 || s==24 || s==-13 || s==15 || s==-7 || s==-19)
            printf("Caso #%d: Bazinga!\n", i);
        else if(s == 0)
            printf("Caso #%d: De novo!\n", i);
        else
            printf("Caso #%d: Raj trapaceou!\n", i);
       
    }

    return 0;
}