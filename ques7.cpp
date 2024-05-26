#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cout<<"enter first number:";
    cin>>n1;
    cout<<"enter second number:";
    cin>>n2; 
    n3=n1+n2;
     int arr1[n1], arr2[n2], arr3[n3];
     for(int i=0;i<n1;i++){
        cin>>arr1[i];
        arr3[i]=arr1[i];
     }
     int k=n1;
     for(int i=0;i<n2;i++){
        cin>>arr2[i];
        arr3[k]=arr2[i];
        k++;
     }
    int rev[n3];
     for(int i=0;i<n3;i++){
      rev[i]=arr3[n3-i-1];
     }
     for(int i=0;i<n3;i++){
      cout<<rev[i];
     }
    return 0;
}