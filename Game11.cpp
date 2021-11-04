#include <iostream>
#include <unordered_set>
using namespace std;
 
int main(){
    
    int n;
    cin>>n;
    unordered_set<int>st;
    int k;
    cin>>k;
    int x[k];
    for(int i=0;i<k;i++){
        cin>>x[i];
        st.insert(x[i]);
    }
    int l;
    cin>>l;
    int y[l];
    for(int i=0;i<l;i++){
        cin>>y[i];
        st.insert(y[i]);
    }
    bool flag=true;
    for(int i=1;i<=n;i++){
        if(st.find(i)==st.end()){
            flag=false;
        }
    }
    if(flag) cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";
    return 0;
}
    
    
    