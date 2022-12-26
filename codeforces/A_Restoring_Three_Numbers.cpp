#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll x1,x2,x3,x4;
    cin>>x1>>x2>>x3>>x4;
    vector<int>v;
    v.push_back(x1);
    v.push_back(x2);
    v.push_back(x3);
    v.push_back(x4);
    sort(v.begin(),v.end());
    cout<<v[3]-v[2]<<" "<<v[3]-v[1]<<" "<<v[3]-v[0]<<endl;
    }
    int main(){
        soln();
        return 0;
    }