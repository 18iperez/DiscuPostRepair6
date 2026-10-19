#include <iostream>
using namespace std;

//Yellow was not defined in the enum Color, so it will cause a compilation error.
enum Color { Red, Green, Blue, Yellow };

int main() {

    Color favoriteColor = Yellow;   
    cout << "Your favorite color number is: " << favoriteColor << endl;  
  
    // used only a single equal sign, which is an assignment operator, instead of a double equal sign, which is a comparison operator.
    if (favoriteColor == Green)     
        cout << "You chose green!" << endl;

    return 0;
}
