#include <iostream>
using namespace std;

// This is a C++ program that prompts the user to enter their name and confirms if the entered name is correct.

#include <iostream>
using namespace std;

int main() {
    string name; // Variable to store the user's name
    
    cout << "PLEASE PROVIDE YOUR NAME: "; // Prompting the user to enter their name
    cin >> name; // Reading the user's input and storing it in the 'name' variable
    
    cout << "YOUR NAME IS " << name << " IS THIS CORRECT ?" << endl; // Displaying the entered name and asking for confirmation
    
    bool flag = true; // Flag variable to indicate if the name is correct
    
    cout << "Thanks for your input, your name is " << name; // Displaying a thank you message with the entered name
    
    return 0; // Exiting the program
}
