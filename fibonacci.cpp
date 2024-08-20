#include <iostream>

using namespace std;


//USING RECURSION-
// n=(n-1)+(n-2)
// 4=(4-1)+(4-2)
//4=(3)+(2)
//4th position=5
int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fib(n - 2) + fib(n - 1);
}
int main()
{

    int a;
    cout << "Enter a number=" << endl;
    cin >> a;
    cout << "The term in fibonacci at position " << a << "is" << fib(a) << endl;
    return 0;
}