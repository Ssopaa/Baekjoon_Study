#include <stdio.h>
#include <string.h>

int main()
{
	int A;
    int res=0;
	scanf("%d", &A);
	char input[A][21];
	char hi[A][21];
	int sum = 0;

	for(int i = 0; i < A; i++) {
		scanf("%s", &input[i]);
	}

	for(int i = 0; i < A; i++){
		if(strcmp(input[i],"ENTER")==0) {
			res = res+sum;
            sum = 0;
			hi[A][0] = '\0';
		}
		else {
			for(int j = 0; j < sum+1; j++) {
				if(j==sum) {
				    sum++;
				    strcpy(hi[j], input[i]);
                    break;
				}
				else if(strcmp(hi[j],input[i])==0) {
                    break;
				}
			}
		}
    }
    res = res+sum;
    printf("%d",res);
    return 0;
}