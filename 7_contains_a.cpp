#include <iostream>
#include <string>
using namespace std;

int main(){
    //declaration
    string input;
    bool containsA;

    cout << "Enter a string: ";
    getline(cin, input);

    //process
    // C++ has no "in" operator (that's Python); find() is the
    // standard way to check whether a character is in a string.
    containsA = (input.find('a') != string::npos);

    //display
    if(containsA)
        cout << "Contains 'a'" << endl;
    else
        cout << "Does not contain 'a'" << endl;

    return 0;
}
