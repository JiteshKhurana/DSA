#include <iostream>
using namespace std;

int PowerOf2(int n)
{
    // base Case
    if (n == 0)
        return 1;
        
    //Recursive relation
    return 2 * PowerOf2(n - 1);
}

int main()
{
    int n;
    cin >> n;

    int ans = PowerOf2(n);
    cout << ans << endl;
    return 0;
}