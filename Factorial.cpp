#include <iostream>

using namespace std;

int main(){
    int number;
    int factorial;

    cout << "Please type out a positive number" << endl;
    cin >> number;

    for(int i = number - 1; i > 0; i--){
        factorial = factorial * i;
    }
   
    cout << "Your number factorial is: " << factorial;

    return 0;
}