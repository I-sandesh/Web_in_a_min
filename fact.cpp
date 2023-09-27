#include <iostream>
using namespace std;

// A function to return the factorial of n
int factorial(int n)
{
    if (n == 0 || n == 1) // Base case
    {
        return 1;
    }
    else // Recursive case
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int num;
    cout << "Enter a positive integer: ";
    cin >> num; // Input a number from the user
    cout << "The factorial of " << num << " is " << factorial(num) << endl; // Output the result
    return 0;
}
