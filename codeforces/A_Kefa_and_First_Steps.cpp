#include<bits/stdc++.h>
using namespace std;
void soln(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }int c=1;
     for(int i=0;i<n;i++){
        if(v[i]<=v[i+1]&i+1!=n-1)
        c++;
        else
        c=1;
        

     }
     cout<<c<<endl;
}
int main(){
    soln();
    return 0;
}