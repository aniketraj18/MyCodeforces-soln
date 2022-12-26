#include<bits/stdc++.h>
using namespace std;
void soln(){int c=0;
    int n;
    cin>>n;int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i%2!=a[i]%2)
        c++;
    }
    if(c==0)
    cout<<"0"<<endl;
    if(c>1&c!=n)
    cout<<c/2<<endl;
    if(c==n)
    cout<<"-1"<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        soln();
        
    }
    return 0;
}