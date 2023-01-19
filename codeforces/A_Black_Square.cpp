#include<bits/stdc++.h>
using namespace std;
void soln(){
    map<int,int>m;
    string s;
    vector<int>v(4);
    for(int i=0;i<4;i++){
        cin>>v[i];
    }
    cin>>s;
    int res=0;
    for(int i=0;i<s.length();i++){
        int num=s[i]-48;
        if(num==1){
            res+=v[0];

        }
        else if(num==2)
        res+=v[1];
        else if(num==3)
        res+=v[2];
        else
        res+=v[3];

    }
    cout<<res<<endl;
 }
int main(){
    soln();
    return 0;
}