#include <stdio.h>
#include <string.h>

int recursion(const char *s, int l, int r, int * recc){
    (* recc) ++ ;
    int rett;
    if(l >= r) {
        //printf("1 %d\n",*recc);
        rett = *recc;
        *recc = 0;
        return rett;}
    else if(s[l] != s[r]) {
        //printf("0 %d\n",*recc);
        rett = *recc;
        *recc = 0;
        return -1*rett;
        }
    else return recursion(s, l+1, r-1, recc);
}

int isPalindrome(const char *s, int * re){
    return recursion(s, 0, strlen(s)-1, re);
}

int main(){
    int t;
    int recall = 0;
    char word[1000];
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        scanf("%s",word);
        int res = isPalindrome(word,&recall);
        if (res > 0)
        {
            printf("1 %d\n",res);
        }
        else{
            printf("0 %d\n",-1*res);
        }
    }
}