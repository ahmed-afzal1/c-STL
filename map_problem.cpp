/*
Given N strings, print unique string in 
lexiographical order with their 
frequesncy
N <= 10^5
|s| <= 100;
*/

#include<bits/stdc++.h>
using namespace std;

void print(map<int, string> &m){
    cout<<m.size()<<endl;

    for(auto &pr : m){
        cout<<pr.first<<" "<<pr.second;
        cout<<endl;
    }
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    map<string, int> m;
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        m[s] = m[s] + 1;
    }

    for(auto pr: m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }


    return 0;
}