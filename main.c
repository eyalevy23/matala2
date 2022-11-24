#include <stdio.h>
#include "my_mat.h"
#include <stdlib.h>

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

char charInput() {
    char ch;
    scanf("%c", &ch);
    return ch;
}

int main() {
    int a,b;
    int N = 10;
    int mtx[N][N];
    char ch = charInput();
    while (ch != 'D'){
        if(ch == 'A'){
            makeMtx(N, &mtx);
            f1(N, &mtx);
        }

        else if(ch == 'B'){
            a = integerInput();
            b = integerInput();
            int isPath = f2(a, b, N, &mtx);
            if(isPath > 0){
                printf("True\n");
            } else{
                printf("False\n");
            }
        }

        else if(ch == 'C'){
            a = integerInput();
            b = integerInput();
            int shortDist = f2(a, b, N, &mtx);
            if(shortDist == 0){
                printf("-1\n");
            } else {
            printf("%d\n", shortDist);
            }
        }
        ch = charInput();
    } 
    return 0;
}