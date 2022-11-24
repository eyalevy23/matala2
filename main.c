#include <stdio.h>
#include "my_mat.h"


void makeMtx(int N,int (*mtx)[N][N]) {
    int input;
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            scanf("%d", &input);
            (*mtx)[i][j] = input;
        }
    } 
}

int integerInput() {
    int input;
    scanf("%d", &input);
    return input;
}

int main() {
    int a,b;
    int N = 10;
    int mtx[N][N];
    int (*mtxPointer)[N][N] = &mtx;
    char ch;
    while (1){
        scanf("%c", &ch);

        if(ch == 'A'){
            makeMtx(N, mtxPointer);
            f1(N, mtxPointer); 
        }
        else if(ch == 'B'){
            a = integerInput();
            b = integerInput();
            int isPath = f2(a, b, N, mtxPointer);
            if(isPath > 0){
                printf("True\n");
            } else{
                printf("False\n");
            }
        }
        else if(ch == 'C'){
            a = integerInput();
            b = integerInput();
            int shortDist = f2(a, b, N, mtxPointer);
            if(shortDist == 0){
                printf("-1\n");
            } else {
            printf("%d\n", shortDist);
            }
        }
        else if(ch == 'D'){
            break;
        }
    }
    
    return 0;

}