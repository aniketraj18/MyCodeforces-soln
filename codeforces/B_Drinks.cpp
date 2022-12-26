#include<bits/stdc++.h>
using namespace std;
void soln(){
    int n;
    cin>>n;float x;
    float c=0;
   for(int i=1;i<=n;i++){
    cin>>x;
    c+=x;
   }
   double ans=c/n;
   cout<<fixed<<setprecision(12)<<ans<<endl;
}
int main(){
    soln();
    return 0;
}