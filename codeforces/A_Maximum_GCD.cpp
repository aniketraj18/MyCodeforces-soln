#include<bits/stdc++.h>
using namespace std;
// int gcd(int a, int b){
//     if(a==b)
//     return a;
//     else if(a>b)
//     return gcd(a-b,b);
//     else
//     return gcd(a,b-a);
// }
void soln(){
    int n;cin>>n;
    int max=n;
    // for(int i=1;i<=n;i++){
    //     int j=1;
    //     while(j<=n&&i!=j){
    //         if(max<=gcd(i,j))
    //         max=gcd(i,j);
    //         j++;
    //     }
    // }
    cout<<max/2<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    soln();
    return 0;
}