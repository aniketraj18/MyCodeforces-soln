#include<bits/stdc++.h>
using namespace std;
void soln(){
    int n;
    cin>>n;
   vector<string>s(n);
   int c=0;
   for(int i=0;i<n;i++){
    cin>>s[i];
    if(s[i]=="Tetrahedron")
    c+=4;
    else if(s[i]=="Dodecahedron")
    c+=12;
    else if(s[i]=="Cube")
    c+=6;
    else if(s[i]=="Icosahedron")
    c+=20;
    else if(s[i]=="Octahedron")
    c+=8;}
    cout<<c<<endl;
   
}
int main(){
    soln();
    return 0;
}