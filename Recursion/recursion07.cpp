#include<iostream>
using namespace std;

int countDistinctWays(int nStairs) {
    if(nStairs<0)
       return 0;
    if(nStairs==0)
       return 1;
    return countDistinctWays(nStairs-1)+countDistinctWays(nStairs-2);
}

int main(){
    int ans = countDistinctWays(5);
    cout<<ans<<endl;
}