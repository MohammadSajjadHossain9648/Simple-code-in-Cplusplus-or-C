#include<stdio.h>
int main(){
    char x[1000],a,i;
    printf("enter a word\n");
    gets(x);
    a=strlen(x);
    for(i=a;i<0;i--){
      printf("the reverse word is %c",x);
    }
    return 0;
}


