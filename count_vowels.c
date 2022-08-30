#include<stdio.h>
int main(){
    char x[1000],c=0,i,a;
    printf("enter a word\n");
    gets(x);
    a=strlen(x);
    for(i=0;i<a;i++){
      if(x[i]=='A'||x[i]=='E'||x[i]=='I'||x[i]=='O'||x[i]=='U'||x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u'){
        c++;
      }
    }
     printf("%d",c);
    return 0;
}



