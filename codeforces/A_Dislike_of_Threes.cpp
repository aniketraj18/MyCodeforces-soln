#include<bits/stdc++.h>
using namespace std;
void soln(){
    int k;
    cin>>k;int digit=0;int c=0;
    vector<int>v;
    for(int i=1;i<=2000;i++){
        digit=i%10;
        if(i%3!=0&&digit!=3)
        v.push_back(i);
    }
    cout<<v[k-1]<<endl;
    // for(int i=1;i<=k;i++){
    //     c++;
    //     digit=i%10;
    //     if(i%3!=0&&digit!=3&&c==k)
    //     cout<<i<<endl;}

            
       
        
}
int main(){
    int n;
    cin>>n;
    while(n--){
    soln();}
    return 0;
}