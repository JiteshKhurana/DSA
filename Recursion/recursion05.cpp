#include<iostream>
using namespace std;

void reachHome(int src,int dest){
    cout<<"source "<<src<<" destination "<<dest<<endl;
    //Base Case
    if(src==dest){
        cout<<"Mein Ghar Phunch Gya"<<endl;
        return;
    }

    //Processing -> Ek Ek step aage badhte jao
    src++;

    //Recursive Call
    reachHome(src,dest);
}

int main(){
    int dest = 10;
    int src = 1;

    reachHome(src,dest);
    cout<<endl;
    return 0;
}