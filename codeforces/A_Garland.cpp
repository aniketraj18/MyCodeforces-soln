#include<bits/stdc++.h>
using namespace std;
void soln(){
string s;
cin>>s;
map<char,int>m;
vector<int>v;
for(int i=0;i<4;i++)
m[s[i]]++;
for(auto e:m)
v.push_back(e.second);
sort(v.begin(),v.end());
int n=v.size();
if(n==1)
cout<<-1<<endl;
else if(n==2)
cout<<2*v[1]<<endl;
else
cout<<4<<endl;}
int main(){
    int t;
    cin>>t;
    while(t--)
    soln();
    return 0;
}