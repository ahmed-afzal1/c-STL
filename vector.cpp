#include<bits/stdc++.h>
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

    //vector declaration
    vector<int> newvector;

    //push_back
    newvector.push_back(5);
    newvector.push_back(50);
    newvector.push_back(40);
    newvector.push_back(10);

    //print vector value
    for(int i=0; i<newvector.size(); i++){
        cout<<newvector[i]<<" ";
    }
    cout<<endl;

    //vector size
    cout<<newvector.size();

    //print vector first value
    cout<<newvector.front();

    //print vector last value
    cout<<newvector.back();

    //clear the vector
    newvector.clear();

    //check vector is empty or not
    if(newvector.empty()){
        cout<<"empty";
    }else{
        cout<<"not empty";
    }

    //remove the vector last value
    newvector.pop_back();

    //erase specific value of vector
    newvector.erase(newvector.begin()+1,newvector.end());

    //insert specific value in vector
    newvector.insert(newvector.begin(),3,1);

    //sort value in assending order
    sort(newvector.begin(),newvector.end());

    //reverse the vector
    reverse(newvector.begin(),newvector.end());

    //Iterator
    vector<int>::iterator it;
    for(it=newvector.begin(); it!=newvector.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;


    return 0;
}