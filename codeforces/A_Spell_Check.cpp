#include<bits/stdc++.h>
using namespace std;
void soln(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    // map<char,int>m;
    map<char,int>r;
    // m['T']=1;
    // m['i']=1;
    // m['m']=1;m['u']=1;
    // m['r']=1;
    if(n!=5)
    cout<<"NO"<<endl;
    else{
        for(int i=0;i<n;i++)
        r[s[i]]++;   
         if(r['T']==1 and r['m']==1 and r['u']==1 and r['i']==1 and r['r']==1)
         cout<<"YES"<<endl;
         else
         cout<<"NO"<<endl;}
}
int main(){
    int t;
    cin>>t;
    while(t--)
    soln();
    return 0;
}