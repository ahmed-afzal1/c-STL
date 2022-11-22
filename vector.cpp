#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout<< v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    vector <int> v;
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    printVector(v);

    return 0;
}