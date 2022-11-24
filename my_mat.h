#ifndef MY_MAT_H
#define MY_MAT_H

void f1(int N, int (*mtx)[N][N]);
int f2(int i, int j,int N, int (*mtx)[N][N]);
void makeMtx(int N,int (*mtx)[N][N]);
int getMin(int a, int b);

#endif