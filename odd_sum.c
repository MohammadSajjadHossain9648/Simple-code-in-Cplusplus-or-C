#include<stdio.h>
int main(){
    int x[1000],i,sum=0;
    printf("show total of all odd number under 1000\n");
    for(i=1;i<1000;i++){
        if(i%2!=0){
            sum=sum+i;
        }
    }
    printf("the total number is %d",sum);
    return 0;
}



