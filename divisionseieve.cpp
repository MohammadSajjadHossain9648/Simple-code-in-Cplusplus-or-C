#include<iostream>
using namespace std;

int arr[100000];

int main(){
    int n;

    cin>>n;
    for(int i=1;i<n;i++){
        for(int j=1;i*j<n;j++){
                arr[i*j]++;
        }
    }
    for(int i=1;i<n;i++){
            cout<<arr[i]<<"\n";
    }
    return 0;
}
