#include<iostream>
using namespace std;
int main(){
    int vcount=0,ccount=0;
    string str;
    cout<<"enter a string:";
    cin>>str;
    for(int i=0;i<str.size();i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            vcount++;
        }
        else if(str[i]>'a'&& str[i]<'z'){
            ccount++;
        }
    }
    cout <<"total number of consonant:"<<ccount<<"\n";
    cout<<"total number of vowels:"<<vcount;

    }


