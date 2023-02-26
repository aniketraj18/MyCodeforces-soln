#include<bits/stdc++.h>
using namespace std;
bool isComposite(int n){
    for(int i=2;i<=n/2;i++){
        if(n%i==0)
        return 1;}
        return 0;
    
}
void soln(){
    int n;
    cin>>n;
    if(n%2==0)
    cout<<6<<" "<<n-6<<endl;
    else
    {
        int c=(n/2)+1;
        while((isComposite(c)!=1) || (isComposite(n-c)!=1))
        {
            c--;
        }
        cout<<c<<" "<<n-c<<endl;
        
    }
}
int main(){
    soln();
    return 0;
}