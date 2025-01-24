#include <stdio.h>

int printarray(int m, int * A){
    for(int i = 0; i < m; i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

int backtracking2(int n, int m, int index, int stp, int * A){
    if(index == m-1){ //last
        for(int i = stp; i < n+1; i++){
            A[index] = i;
            printarray(m,A);
        }
    }
    else{
        for(int i = stp; i < n+1; i++){
            A[index] = i;
            backtracking2(n,m,index+1,i+1,A);
        }
    }
}


int main(){
    int n, m;
    scanf("%d %d",&n,&m);
    int A[m];
    backtracking2(n,m,0,1,A);
    return 0;
}