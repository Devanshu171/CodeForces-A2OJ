#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
 
int main(){
    int s,n;
    cin>>s>>n;
    bool flag=true;
    map<int,int>mpp;
    
    while(n--){
        int x,y;
        cin>>x>>y;
    mpp[x]=y;
     
     
         }
        
          for(auto it:mpp){
            if(it.first<s)
            s+=it.second;
            else{
              flag=false;
            break;
            }
          }
           
       
     if(flag) cout<<"YES";
        else cout<<"NO";
    return 0;
}