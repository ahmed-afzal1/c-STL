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

    map<int, string> m;
    m[1] = "abc";
    m[5] = "acd";
    m[3] = "acd";
    m.insert({4,"weq"});

    /*
    map<int, string> :: iterator it;
    for(it=m.begin(); it!=m.end(); it++){
        cout<<(*it).first<<" "<<(*it).second;
        cout<<endl;
    }
    */
    // auto it = m.find(3);
    // if(it == m.end()){
    //     cout<<"No value";
    // }else{
    //     cout<<(*it).first<<" "<<(*it).second;
    // }
    // m.erase(3);
    print(m);

    return 0;
}