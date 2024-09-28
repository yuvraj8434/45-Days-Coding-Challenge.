#include <iostream>
using namespace std;

int main()
{
    int points;
    cout << "Enter the number of points: ";
    cin >> points;

    if (points >= 12)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}