#include <iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}

double add(double a, double b){
    return a+b;
}

int subtract(int a, int b){
    return a-b;
}

int multiply(int a, int b){
    return a*b;
}

double divide(int a, double b = 1.0){
    return a/b;
}

int main(){
    double a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    
    cout << "Add result: " << add(a,b) << endl;
    cout << "Subtract result: " << subtract(a,b) << endl;
    cout << "Multiply result: " << multiply(a,b) << endl;
    cout << "Divide result: " << divide(a,b) << endl;
    cout << "Divide only one num: " << divide(a) << endl;

    return 0;
}