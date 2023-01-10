#include<bits/stdc++.h>
using namespace std;
void soln(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        auto it=find(v.begin(),v.end(),num);
        if(it!=v.end()){
            v.erase(it);

        }
        v.push_back(num);
    }
    cout<<v.size()<<endl;
    for(auto i:v)
    cout<<i<<' ';
}
int main(){
    soln();
    return 0;
}