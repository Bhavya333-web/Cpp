#include <iostream>
#include <string>  
#include <algorithm>  
using namespace std;

void printGreeting(const string& name) {

    // Convert the greeting to uppercase
    string upperGreeting = "Hello, " + name + "!";

    // converts the string to uppercase
    transform(upperGreeting.begin(), upperGreeting.end(), upperGreeting.begin(), ::toupper);

      cout << "Final Result: " << upperGreeting<<endl;// Print the final result

}

int main() {
    // The name to be used in the greeting
    string name = "Alice";
    printGreeting(name);


    
}