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
    int x, y, sum;
    for (int k = 0; k < N; k++) {
            for (int i = 0; i < N; i++) {
                for (int j = 0; j < N; j++) {
                    x = mtx[i][k];
                    y = mtx[k][j];
                    //if (x && y != 0) summ <-- x+y else 0 
                    sum = (x && y ) ? x + y : 0;
                    // set shortrst path unless it is diagonal 
                    if(i != j) {
                        mtx[i][j] = getMin(mtx[i][j], sum);
                    }
                }
            }
        }
}

void isPath(char ch,int mtx[N][N]) {
    int i,j;
    scanf("%d %d", &i, &j);
    int shortDist = mtx[i][j];

    if (ch == 'B'){         
        // print True for path else False
        printf(shortDist ? "True\n" : "False\n");
    } if(ch == 'C'){        
        // print the shortrst path else -1
        printf(shortDist ? "%d\n" : "-1\n", shortDist);
    }
}