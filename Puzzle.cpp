#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[m] ;
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    
    sort(a,a+m);
    int ans=100000;
    
    int i=0,j=i+n-1;
    
    while(j<m){
        int diff=a[j]-a[i];
        
        ans=min(diff,ans);
        i++;
        j=i+n-1;
    }
    
    cout<<ans;
}