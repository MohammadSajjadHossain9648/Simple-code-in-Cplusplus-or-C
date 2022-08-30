#include<stdio.h>
int main(){
    int x[100],i,sum=0;
    printf("enter 9 integer numbers\n");
    for(i=0;i<9;i++){
        scanf("%d",&x[i]);
        sum=sum+x[i];
        }
    printf("the total number is %d",sum);
    return 0;
}

