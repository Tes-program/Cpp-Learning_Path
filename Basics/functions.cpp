// #include <iostream>
// using namespace std;
// int addNumber(int number1, int number2){
//     return number1 + number2;
// }
// int main(){
//     int number1, number2;
//     cout << "Enter two numbers: ";
//     cin >> number1 >> number2;
//     cout << "The sum of " << number1 << " and " << number2 << " is " << addNumber(number1, number2) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int gradeCalc(int grade1, int grade2, int grade3, int grade4, int grade5){
//     int total = grade1 + grade2 + grade3 + grade4 + grade5;
//     return total / 5;
// }
// int main() {
//     int grade1 , grade2 , grade3 , grade4 , grade5;
//     cout << "Enter your grades here: ";
//     cin >> grade1 >> grade2 >> grade3 >> grade4 >> grade5;
//     cout << "Your GPA is" << "  " << gradeCalc(grade1, grade2, grade3, grade4, grade5) << endl;
//     return 0;
// }

// // Write a program that performs division on two numbers.
// #include <iostream>
// using namespace std;
// int division(int number1, int number2){
//     return number1 / number2;
// }
// int main(){
//     int number1, number2;
//     cout << "Enter two numbers: ";
//     cin >> number1 >> number2;
// }

// // Write a recursive function that find the n integer of the Fibonnaci sequence.
// #include <iostream>
// using namespace std;
// int fibonacci(int n){
//     if (n == 0){
//         return 0;
//     }
//     else if (n == 1){
//         return 1;
//             }
//     else{
//         return fibonacci(n - 1) + fibonacci(n - 2);
//     }
// }

// // Write a recursive function that finds the n integers from 1-20 of the fibonnaci sequence.
// #include <iostream>
// using namespace std;
// int fibonacci(int n){
//     for (int i = 0; i < 20; i++){
//         cout << fibonacci(i) << endl;
//     }
//         if (n == 0){
//             return 0;
//         }
//         else if (n == 1){
//             return 1;
//         }
//         else{
//             return fibonacci(n - 1) + fibonacci(n - 2);
//         }
    
// }

// Make a calculator that can collect two numbers mulitply, divide , add, and subtract.
#include <iostream>
using namespace std;
int main(){
    int number1, number2;
    char operator1;
    cout << "Enter two numbers: ";
    cin >> number1 >> number2;
    cout << "Enter an operator: ";
    cin >> operator1;
    if (operator1 == '+'){
        cout << number1 + number2 << endl;
    }
    else if (operator1 == '-'){
        cout << number1 - number2 << endl;
    }
    else if (operator1 == '*'){
        cout << number1 * number2 << endl;
    }
    else if (operator1 == '/'){
        cout << number1 / number2 << endl;
    }
    else{
        cout << "Invalid operator" << endl;
    }
    return 0;
}