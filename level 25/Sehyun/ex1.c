#include <stdio.h>

int main()
{
    int k,t;
    scanf("%d %d",&k,&t);
    int A[k];
    for(int i =0; i<k; i++){
        scanf("%d",&A[i]);
    }
    
    int res = 0;
    for(int i = k-1; i>-1; i--){
        res += t/A[i];
        t = t%A[i];
    }
    printf("%d",res);
    
    return 0;
}