#include<bits/stdc++.h>
using namespace std;
void soln(){
    int n;
    cin>>n;
    int e;
    cin>>e;
    int tot=0;
    int index=-1;
    vector<int>dur(n);
    for(int i=0;i<n;i++){
        cin>>dur[i];

    }int ans=-1;
    for(int i=0;i<n;++i){
        int ent;
        cin>>ent;
        if(tot+dur[i]<=e){
            if(ans<ent){
                ans=ent;
                index=i+1;
            }

        }tot++;

    }
    cout<<index<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    soln();
    return 0;
}