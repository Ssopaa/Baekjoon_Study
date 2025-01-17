#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d",&a);
    int A[a];
    for(int i=0; i<a; i++){
        scanf("%d",&A[i]);
    }
    scanf("%d",&b);
    int B[b], C[b];
    for(int i=0; i<b; i++){
        scanf("%d",&B[i]);
        for(int j=0; j<a; j++){
            if(B[i]==A[j]){
                C[i]=1;
                break;
            }
            else{
                C[i]=0;
            }
        }
        printf("%d ",C[i]);
    }

    return 0;
}