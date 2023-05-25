#include <iostream>

int main (){
   
   using namespace std;

    char op;
    double  num1;
    double num2;
    double result;

    cout << "*****CALCULATOR*****" << '\n';

    cout << " enter an operation ( +, - , * or /)" << '\n';
    cin>> op;
    cout << " enter number 1 " << '\n';
    cin>> num1;
    cout << " enter number 2 " << '\n';
    cin>> num2;

    switch(op){
        case '+':
           result = num1 + num2;
           cout << "result:" << result << '\n';
        break;
        case '-':
           result = num1 - num2;
           cout << "result:" << result << '\n';
        break;
        case '*':
           result = num1 * num2;
           cout << "result:" << result << '\n';
        break;
        case '/':
           result = num1 / num2;
           cout << "result:" << result << '\n';
        break;
        default:
        cout << "error" << '\n';
    }
 
    cout << "*****END*****" << '\n';


    return 0;
}