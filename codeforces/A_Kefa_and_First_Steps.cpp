#include<bits/stdc++.h>
using namespace std;
void soln(){
    int n;
    cin>>n;
    vector<long long int>v(n);int c=1;int max=INT_MIN;
    if(n==1){
        cout<<'1'<<endl;
    }
    else{
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n-1;i++){
        if(v[i+1]>=v[i])
        c++;
        else
        c=1;
        if(c>max)
        max=c;

    }
    cout<<max<<endl;}
}
int main(){
    soln();
    return 0;
}//Aniket codes ...