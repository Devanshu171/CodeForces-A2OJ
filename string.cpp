#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
bool flag=1;
int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
        i+=2;
        if(!flag)
            cout<<" ";
            continue;
        }
        else{
            flag=0;
            cout<<s[i];
        }
    }
}