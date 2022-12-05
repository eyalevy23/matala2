#include "my_mat.h"
#include <stdio.h>

int main() {
    int mtx[N][N];
    char ch = ' ';
    while (ch != 'D')
    {   
        scanf("%c", &ch);
        if(ch == 'A'){
            mtxFill(mtx);
            F_W_Algo(mtx);
        }

        if(ch == 'B' || ch == 'C'){
            isPath(ch,mtx);
        }
        
    }
    
}