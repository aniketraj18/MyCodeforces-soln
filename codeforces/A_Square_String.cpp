#include<bits/stdc++.h>
using namespace std;
void soln()
{
    string n;
    cin>>n;
    bool flag=1;
    int l=n.length();
    if(l%2!=0)
    cout<<"NO"<<endl;
    else{
        int s=0,e=l/2;;
        while(s<=e&&e<l){
            if(n[s]!=n[e]){
                flag=0;
                break;
                
            }
            s++;
            e++;
        }
        if(flag)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--)
    soln();
    return 0;}