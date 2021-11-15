#include<iostream>
using namespace std;
 
int main(){
    
    int n,d;
    cin>>n>>d;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    
    int mintime=sum+10*(n-1);
    if(mintime>d)
    cout<<-1;
    else{
        cout<< 2*(n-1)+(d-mintime)/5;
    }
    
    
    
    return 0;
}
