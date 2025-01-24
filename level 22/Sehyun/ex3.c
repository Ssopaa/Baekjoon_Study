#include <stdio.h>

int printarray(int m, int * A){
    for(int i = 0; i < m; i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

int backtracking3(int n, int m, int index, int * A){
    if(index == m-1){ //last
        for(int i = 1; i < n+1; i++){
            A[index] = i;
            printarray(m,A);
        }
    }
    else{
        for(int i = 1; i < n+1; i++){
            A[index] = i;
            backtracking3(n,m,index+1,A);
        }
    }
}


int main(){
    int n, m;
    scanf("%d %d",&n,&m);
    int A[m];
    backtracking3(n,m,0,A);
    return 0;
}