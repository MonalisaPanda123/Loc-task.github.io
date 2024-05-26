#include<iostream>
using namespace std;
int main(){
    int acount=0,dcount=0,scount=0;
    string str;
     cout<<"enter a string:";
     cin>>str;
     for(int i=0;i<str.size();i++){
        if(str[i]>='a' && str[i]<='z'){
            acount++;
        }
        else if(str[i]>='0' && str[i]<='9'){
            dcount++;
        }
        else{
            scount++;
        }
             }
             cout<<"total no of alphabets:"<<acount<<"\n";
        cout<<"total no of digits:"<<dcount<<"\n";
        cout<<"total no of special character:"<<scount;
    return 0;
}