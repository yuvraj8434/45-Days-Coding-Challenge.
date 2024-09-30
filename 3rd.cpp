#include <iostream>
using namespace std;

int main() {
    int X, Y;
    
    // Input the working hours per day from Monday to Thursday and for Friday
    cout << "Enter the number of hours worked per day from Monday to Thursday: ";
    cin >> X;
    
    cout << "Enter the number of hours worked on Friday: ";
    cin >> Y;
    
    // Calculate the total working hours
    int totalHours = (4 * X) + Y;
    
    // Output the total number of working hours in a week
    cout << "Total working hours in a week: " << totalHours << endl;
    
    return 0;
}