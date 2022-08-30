#include<stdio.h>
int main(){
    int x[100],i,l=0,s=100000000000;
    printf("enter 4 integer numbers\n");
    for(i=0;i<4;i++){
        scanf("%d",&x[i]);
        if(x[i]>l){
            l=x[i];
        }
    }
    for(i=0;i<4;i++){
        if(x[i]<s){
            s=x[i];
        }
    }
    printf("largest number is %d and smallest number is %d",l,s);
    return 0;
}
