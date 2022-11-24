#include <stdio.h>
#include "my_mat.h"




int main() {
    
    while (1){
        int N = 10;
        int mtx[N][N];
        int (*a)[N][N] = &mtx;
        char ch;
        scanf("%c", &ch);
        if(ch == 'A'){
            makeMtx(N, a);
            f1(N, a); 
        }
        else if(ch == 'B'){
            int integer1b = 0, integer2b = 0;
            scanf("%d", &integer1b);
            scanf("%d", &integer2b);
            int ansB = f2(integer1b, integer2b, N, a);
            if(ansB > 0){
                printf("True\n");
            } else{
                printf("False\n");
            }
        }
        else if(ch == 'C'){
            int integer1c, integer2c;
            scanf("%d", &integer1c);
            scanf("%d", &integer2c);
            int ansC = f2(integer1c, integer2c, N, a);
            if(ansC == 0){
                printf("-1\n");
            } else {
            printf("%d\n", ansC);
            }
        }
        else if(ch == 'D'){
            break;
        }
    }
    
    return 0;

}