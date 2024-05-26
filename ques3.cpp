#include<iostream>
using namespace std;
int main(){
    int n,r;
    cin>>n;
    int sum=0;
    do{
    r=n%10;
    sum=sum+r;
    n=n/10;
    }while(n!=0);
    cout<<sum;   
    return 0;
}