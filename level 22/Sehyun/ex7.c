#include <stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    int A[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&A[i]);
    }

    int B[4] = {0,0,0,0};
    for (int i = 0; i < 4; i++)
    {
        scanf("%d",&B[i]);
    }


    long long max = A[0], min = A[0];
    for (int i = 1; i < n; i++)
    {
        if (i<=B[0])
        {
            max = max + A[i];
        }
        else if (i<=B[3]+B[0])
        {
            max = max / A[i];
        }
        else if (i<=B[1]+B[3]+B[0])
        {
            max = max - A[i];
        }
        else
        {
            max = max * A[i];
        }
        

        if (i<=B[1])
        {
            min = min - A[i];
        }
        else if (i<=B[3]+B[1])
        {
            min = min / A[i];
        }
        else if (i<=B[0]+B[3]+B[1])
        {
            min = min + A[i];
        }
        else
        {
            min = min * A[i];
        }
    }

    printf("%lld\n%lld",min, max);
    

    //backtracking3(n,m,0,A);
    return 0;
}