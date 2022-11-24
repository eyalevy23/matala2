#include "my_mat.h"
#include <stdio.h>

void f1(int N, int (*mtx)[N][N]){
    for (int k = 0; k < N; k++) {
            // Pick all vertices as source one by one
            for (int i = 0; i < N; i++) {
                // Pick all vertices as destination for the
                // above picked source
                for (int j = 0; j < N; j++) {
                    // If vertex k is on the shortest path from
                    // i to j, then update the value of
                    // dist[i][j]
                    if ((*mtx)[i][k] + (*mtx)[k][j] < (*mtx)[i][j])
                        (*mtx)[i][j] = (*mtx)[i][k] + (*mtx)[k][j];
                }
            }
        }
}

int f2(int i, int j,int N, int (*mtx)[N][N]) {
    return (*mtx)[i][j];
}

void makeMtx(int N,int (*mtx)[N][N]) {
    int input;
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            scanf("%d", &input);
            (*mtx)[i][j] = input;
        }
} 

  

}