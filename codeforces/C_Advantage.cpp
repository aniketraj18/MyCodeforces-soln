#include<bits/stdc++.h>
using namespace std;
void soln(){
    int n;
    cin>>n;
       vector<int>v(n);
     priority_queue<int>p;

//     #include<bits/stdc++.h>
// using namespace std;
// void soln(){
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     int maxm=v[0],sec=v[0];
//     for(int i=0;i<n;i++){
//         if(v[i]>=maxm){
//         sec=maxm;
//         maxm=v[i];
//         }
//         else if(sec<v[i])
//         sec=v[i];
//     }
//     for(int i=0;i<n;i++){
//         if(v[i]!=maxm)
//         cout<<v[i]-maxm<<" ";
//         else
//         cout<<v[i]-sec<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--)
//     soln();
//     return 0;
// }
    for(int i=0;i<n;i++){
        cin>>v[i];
        p.push(v[i]);
    }
    // int maxm=v[0],sec=v[0];
    // for(int i=0;i<n;i++){
    //     if(v[i]>=maxm){
    //     sec=maxm;
    //     maxm=v[i];
    //     }
    //     else if(sec<v[i])
    //     sec=v[i];
    // }
    // for(int i=0;i<n;i++){
    //     if(v[i]!=maxm)
    //     cout<<v[i]-maxm<<" ";
    //     else
    //     cout<<v[i]-sec<<" ";
    // }
    // cout<<endl;
    for(int i=0;i<n;i++){
        if(v[i]==p.top()){
            int x=p.top();
        p.pop();
        cout<<v[i]-p.top()<<" ";
        p.push(x);}
        else if(v[i]!=p.top())
        cout<<v[i]-p.top()<<" ";
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    soln();
    return 0;
}