#include <iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

//x=1,y=2,z=3
int x[5000];   
int y[5000];   
int z[5000];   
    // int a[n];
    int sx=0,sy=0,sz=0;
for(int i=0;i<n;i++){
          int v;
          cin>>v;
        if(v==1)
        x[sx++]=i+1;
        else if(v==2)
        y[sy++]=i+1;
        else
        z[sz++]=i+1;
}
    
    int team=min(min(sx,sy),sz);
cout<<team;
    while(team--){
      cout<<endl;
      cout<<x[--sx]<<" ";
      cout<<y[--sy]<<" ";
      cout<<z[--sz]<<" ";
    }
    
    return 0;
    
    
    
    
}