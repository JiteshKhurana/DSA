//Tail Recursion
#include <iostream>
using namespace std;

void PrintCounting(int n)
{
    // base Case
    if (n == 0)
        return;

    cout << n << " ";
    // Recursive relation
    PrintCounting(n - 1);
}

int main()
{
    int n;
    cin >> n;

    PrintCounting(n);
    return 0;
}