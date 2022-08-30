#include<iostream>
using namespace std;

class gcd{
public:
    int i,r=1;
    void sent(int a,int b){
        if(a>b){
            for(i=1;i<=b;i++){
                if(a%i==0&&b%i==0){
                   r=r*i;
                }
            }
            cout<<"GCD is "<<r;
        }
        else{
            for(i=1;i<=a;i++){
                if(a%i==0&&b&i==0){
                   r=r*i;
                }
            }
            cout<<"GCD is "<<r;

        }
    }

};

int main (){
    gcd show;
    int x,y;
    cin>>x>>y;
    show.sent(x,y);

    return 0;

}
