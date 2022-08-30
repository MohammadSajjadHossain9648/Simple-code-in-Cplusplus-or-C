#include<iostream>
using namespace std;

class shape{
public:
    int i,j,k,r;
    void sent(int r){

    for(i=0;i<=r;i++){
        for(j=1;j<=r-i;j++){
               cout<<" ";
            }
        for(k=1;k<=2*i-1;k++){
              cout<<"*"<<"\n";
            }
      }

    for(i=r-1;i>=1;i--){
        for(j=1;j<=r-i;j++){
            cout<<" ";
        }
        for(k=1;k<=2*i-1;k++){
          cout<<"*"<<"\n";
        }
      }
   }


};
int main (){
    shape show;
    int x;
    cout<<"how many rows u want to input for a diamond shape";
    cin>>x;
    show.sent(x);
    return 0;

}

