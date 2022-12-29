#include<bits/stdc++.h>
using namespace std;
#define l long long
void soln(){
    l n;
    cin>>n;
    if ((n & (n - 1)) == 0) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
    }}
int main(){
    int t;
    cin>>t;
    while(t--){
    soln();}
    return 0;
}