#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t; // Read the number of test cases

    while (t--) // Loop through each test case
    {
        int n;
        cin >> n; // Read the input number

        int x = n;
        int k = n;
        int remainder = 0, reversed_number = 0;

        while (k != 0) // Reverse the number
        {
            remainder = k % 10;
            reversed_number = reversed_number * 10 + remainder;
            k /= 10;
        }
        cout << reversed_number << endl;

        int count = 0;

        if (reversed_number < n)
        {
            while (x != reversed_number)
            {
                x -= 9;
                count++;
            }
        }
        else
        {
            while (x != reversed_number)
            {
                x += 9;
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}
