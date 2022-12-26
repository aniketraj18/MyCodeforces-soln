#include<bits/stdc++.h>
using namespace std;
void soln(){
    int a,b,c;
    cin>>a>>b>>c;
    vector<int>m;
     m.push_back((a+b)*c);
     m.push_back(a*(b+c));
     m.push_back(a*b*c);
     m.push_back(a+(b+c));
     m.push_back((a*b)+c);
     cout<<*max_element (m.begin(), m.end());
}
int main(){
    soln();
    return 0;
}