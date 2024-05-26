#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of index:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int num;
    cout<<"enter a number:";
    cin>>num;
    int count=0;
    for(int j=0;j<=n;j++){
        if(arr[j]==num) count++ ;
    }
    cout<<"number of occurance:"<<count;
    return 0;

}