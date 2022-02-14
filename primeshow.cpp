#include<iostream>
using namespace std;

int arr[10000000];

int main (){
    int n;
    arr[0]=1;
    arr[1]=1;
    cin>>n;
    for(int i=2;i*i<n;i++){
        if(arr[i]==0){
            for(int j=2;i*j<n;j++){
                arr[i*j]=1;
            }
        }
    }
    for(int i=2;i<n;i++){
        if(arr[i]==0){
            cout<<i<<"\n";
        }
    }
    return 0;
}
