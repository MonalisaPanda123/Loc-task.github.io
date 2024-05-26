#include<iostream>
using namespace std;
int frequency(int arr[],int n){
   int maxcount=0;
   int n1;
   for(int i=0;i<n;i++){
    int  count=0;
    for(int j=0;j<n;j++){
        if(arr[i]==arr[j]){
            count++;
        }
       if(count>maxcount){
            maxcount=count;
            n1=arr[i];
        }
    }
   }
     return n1;
}
int main(){
    int n;
cout<<"enter a number:";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<frequency(arr,n);
return 0;
   
}