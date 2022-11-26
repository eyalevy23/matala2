#include "my_mat.h"
#include <stdio.h>

int getMin(int a, int b){
    if(a == 0){
        return b;
    }
    if(b == 0){
        return a;
    }
    if(a<b){
        return a;
    } return b;
}

void mtxFill(int mtx[N][N]){
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            scanf("%d", &mtx[i][j]);
        }
    }
}

void F_W_Algo(int mtx[N][N]){
    mtxFill(mtx);
    int x, y, min, sum;
    for (int k = 0; k < N; k++) {
            for (int i = 0; i < N; i++) {
                for (int j = 0; j < N; j++) {
                    x = mtx[i][k];
                    y = mtx[k][j];
                    sum = x + y;
                    if(x == 0 || y == 0){
                        sum = 0;
                    }
                    min = getMin(mtx[i][j], sum);
                    if(i == j){
                        min = 0;
                    }
                    mtx[i][j] = min;
                }
            }
        }
}

void isPath(char ch,int mtx[N][N]) {
    int i,j;
    scanf("%d %d", &i, &j);
    if (ch == 'B'){
        if(mtx[i][j]){
            printf("True\n");
        }else {
            printf("False\n");
        }
    } else{ //  if(ch == 'C')
        if(mtx[i][j]){
            printf("%d\n", mtx[i][j]);
        }else{
            printf("-1\n");
        }
    }

}