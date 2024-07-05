#include<iostream>
using namespace std;

void print(int arr[],int n ){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    
    int n;
    cout<<"enter the length of the array"<<endl;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];

    }
    print(arr,n);

}