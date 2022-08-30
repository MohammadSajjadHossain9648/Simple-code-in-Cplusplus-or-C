#include<stdio.h>
int main(){
    char x[1000];
    int y[1000],a,i,k,c=0,l;
    printf("enter a word or number\n");
    gets(x);
    a=strlen(x);
    k=a/2;
    for(i=0;i<k;i++){
      if(x[i]!=x[a]){
        printf("the word is not palindrome");
        break;
      }
      a--;
    }
    printf("the word is palindrome");
   for(i=0;i<10;i++){
      scanf("%d",&y[i]);
      c++;
   }
   l=c/2;
    for(i=0;i<l;i++){
      if(y[i]!=y[c]){
        printf("the number is not palindrome");
        break;
      }
      c--;
    }
     printf("the number is palindrome");
    return 0;
}



