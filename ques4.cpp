#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x;
    cin>>y;
 char ch;
 cin>>ch;
 switch(ch){
    case '+' :
    cout<<x+y;
    break;
    case '-':
    cout<<x-y;
    break;
    case '*' :
    cout<<x*y;
    break;
    case '/' :
    cout<<(float)x/y;
    break;
 }
}