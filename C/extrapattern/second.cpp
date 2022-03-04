#include <iostream> 
#include <cstring>	
using namespace std;

int main()
{
    string first;
    string initial, middle;
    string last;
    string space = " ";
    string dot = ".";
    string fullName;
    // Input data for first name, initial, and last name
    cout << "Enter the first name: ";
    cin >> first;
    cout << "Enter the initial: ";
    cin >> middle;
    cout << "Enter the last name: ";
    cin >> last;
    // Formation of full name using concatenation operator
    fullName = first + space + initial + dot + space + last;
    // Outputting full name
    cout << "The full name is: " << fullName; 
    return 0;
}
