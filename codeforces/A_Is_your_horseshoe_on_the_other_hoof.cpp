#include<bits/stdc++.h>
using namespace std;
void soln(){
    int s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    set<int>s;
    s.insert(s1);
    s.insert(s2);
    s.insert(s3);
    s.insert(s4);
    int n=s.size();
    if(n==4)
    cout<<"0"<<endl;
    else if(n==3)
    cout<<4-3<<endl;
    else if(n==2)
    cout<<4-2<<endl;
    else
    cout<<4-1<<endl;
}
int main(){
    soln();
    return 0;
}