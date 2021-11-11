#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int s,n;
    cin>>s>>n;
    bool flag=true;
vector<pair<int,int>>vec;    
    while(n--){
        int x,y;
        cin>>x>>y;
    mpp[x]=y;
     
     
         }
        
          for(auto it:mpp){
            if(it.first>s){
              cout<<"NO";
              return 0;
            }
            s+=it.second;
            }
          
           
        cout<<"YES";
        return 0;
  
}