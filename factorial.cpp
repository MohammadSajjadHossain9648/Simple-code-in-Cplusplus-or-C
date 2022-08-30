#include<iostream>
using namespace std;

class fectorial{
public:
    int i,j,f,E=0;
    void sent(int a){
        if(a==0){
            cout<<"E=1";
        }
        for(i=1;i>=a;i++){
            for(j=1;j<=a;j++){
                f=f*j;
            }
            E=E+(1/f);
            cout<<"E="<<E;
        }
    }

};

int main (){
    fectorial show;
    int x;
    cin>>x;
    show.sent(x);

    return 0;

}
