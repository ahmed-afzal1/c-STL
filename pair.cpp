#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    pair <int,string> p;
    // p = make_pair(2,"abc");
    p = {2,"abc"};

    pair <int,string> p1 = p;

    // cout<<p1.first<<" "<<p1.second;

    pair <int,int> p_array[3];
    p_array[0] = {1,2};
    p_array[1] = {2,3};
    p_array[2] = {3,4};

    swap(p_array[0],p_array[2]);

    for(int m=0; m<3; m++){
        cout<<p_array[m].first<<" "<<p_array[m].second;
        cout<<endl;
    }
    return 0;
}