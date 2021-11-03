#include<iostream>
#include<unordered_set>
using namespace std;
 
int main(){
    string s;
    getline(cin,s);
    
    int count=0;
    unordered_set<int>st;
    for(int i=1;i<s.size()-1;i++){
        if(s[i]!=' '&& s[i]!=','){
            if(st.find(s[i])==st.end()){
                count++;
                st.insert(s[i]);
            }
        }
    }
    cout<<count;
    return 0;
}