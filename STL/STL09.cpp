//Map
#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<int,string> m;
    m[1] = "Jitesh";
    m[13] = "Khurana";
    m[2] = "Kumar";

    m.insert({5,"bheem"});

    cout<<"Before Erase"<<endl;
    for(auto i :m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Finding -13 -> "<<m.count(-13)<<endl;

    // m.erase(13);
    cout<<"After Erase"<<endl;
    for(auto i :m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<endl;

    auto it = m.find(5);
    for (auto i = it; i != m.end(); i++)
    {
        cout<<(*i).first<<endl;
    }

    cout<<endl;
    return 0;
}