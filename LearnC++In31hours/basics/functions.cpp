// #include <iostream>
// using namespace std;
// int addNumbers(int firstNUmber , int secondNumber){
//     int sum = firstNUmber + secondNumber;
//     return sum;
// }
// int main(){
//     int sum = addNumbers(10,20);
//     cout << "Sum is " << sum << endl;
//     return 0;
// }

#include <iostream>
using namespace std;
int multiplyNumbers(int firstNumber, int secondNumber){
    int multiply = firstNumber * secondNumber;
    return multiply;
}
int main() {
    int multiply = multiplyNumbers(10,20);
    cout << "Multiply is " << multiply << endl;
    return 0;

}