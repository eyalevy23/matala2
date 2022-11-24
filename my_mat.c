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

void f1(int N, int (*mtx)[N][N]){
    int x, y, sum, min;
    for (int k = 0; k <= N; k++) {
            // Pick all vertices as source one by one
            for (int i = 0; i < N; i++) {
                // Pick all vertices as destination for the
                // above picked source
                for (int j = 0; j < N; j++) {
                    // If vertex k is on the shortest path from
                    // i to j, then update the value of
                    // dist[i][j]
                    x = (*mtx)[i][k];
                    y = (*mtx)[k][j];
                    sum = x + y;
                    if(x == 0 || y == 0) sum = 0;
                    min = getMin((*mtx)[i][j], sum);
                    if(i == j) min = 0;
                    (*mtx)[i][j] = min;
                }
            }
        }
}

int f2(int i, int j,int N, int (*mtx)[N][N]) {
    return (*mtx)[i][j];
}

