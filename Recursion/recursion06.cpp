//Fibonacci Series
#include <iostream>
using namespace std;

int FibonacciSeries(int n)
{
    // base Case
    if(n==1)
        return 0;
    if(n==2){
        return 1; 
    }
    // Recursive relation
    return FibonacciSeries(n-1)+FibonacciSeries(n-2);
}

int main()
{
    int n;
    cin >> n;

    int ans = FibonacciSeries(n);
    cout<<ans<<endl;
    return 0;
}