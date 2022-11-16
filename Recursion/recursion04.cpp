//Head Recursion
#include <iostream>
using namespace std;

void PrintCounting(int n)
{
    // base Case
    if (n == 0)
        return;

    // Recursive relation
    PrintCounting(n - 1);
    cout << n << " ";
}
>>
int main()
{
    int n;
    cin >> n;

    PrintCounting(n);
    return 0;
}