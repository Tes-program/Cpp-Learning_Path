#include <iostream>
using namespace std;
int addNumber(int number1, int number2){
    return number1 + number2;
}
int main(){
    int number1, number2;
    cout << "Enter two numbers: ";
    cin >> number1 >> number2;
    cout << "The sum of " << number1 << " and " << number2 << " is " << addNumber(number1, number2) << endl;
    return 0;
}