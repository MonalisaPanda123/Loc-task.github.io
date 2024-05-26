#include<iostream>
using namespace std;
void sorting(int n,int arr[]){
  int temp;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
         temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;   
        }
        
    }      
  }
  for(int i=0;i<n;i++){
    cout<<arr[i];
  }

}
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sorting(n,arr);
  
    return 0;
}