#include<bits/stdc++.h>
using namespace std;
void soln(){
    int a,b;
    cin>>a>>b;
    int p=a;
    while(a>=b){
        p+=a/b;
        a=a/b+a%b;
        
    }
    cout<<p<<endl;
}
int main(){
    soln();
    return 0;
}