#include<bits/stdc++.h>
using namespace std;
#define l long long
void soln(){
    l n;
    cin>>n;
    vector<l>v(n);
    for(l i=0;i<n;i++){
        cin>>v[i];

    }l c=0;
    for(l i=0;i<n;i++){
        if(v[i]%2==0)
        c++;
       
        

    }
    cout<<min(c,n-c)<<endl;
    

}
int main(){
    int t;
    cin>>t;
    while(t--)
    soln();
    return 0;


}