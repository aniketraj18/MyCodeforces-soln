#include<bits/stdc++.h>
using namespace std;
void soln(){
    int a,b,c;
    cin>>a>>b>>c;
    int diff=abs(a-b);
    int mx=max(a,b);
    int x= max(mx,c);
    if(c>(2*diff)||(c+(2*diff)==a||(c+(2*diff)==b))||2*diff<x)
    cout<<"-1"<<endl;
    else{
        if((c+diff)>2*diff)
       cout<<c-diff<<endl;
        else
        cout<<c+diff<<endl;

    }

}
int main(){
    int t;
    cin>>t;
    while(t--){
        soln();
    }
}
