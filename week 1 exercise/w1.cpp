#include <iostream>
using namespace std;
int main(){
    // Ex 1

    // cout << "Hello World!" << endl;

    // Ex 2

    // int studentCount = 30;
    // float temperature = 36.6;
    // char grade = 'A';
    // bool passed = true;
    // std::cout << "" << studentCount << std::endl;
    // std::cout << "" << temperature << std::endl;
    // std::cout << "" << grade << std::endl;
    // std::cout << "" << passed << std::endl;
    // // Ex 3
    // int num1, num2;
    // cin >> num1;
    // cin >> num2;
    // cout << "" << num1 + num2 << endl;

    // Ex 4

    // int studentId = 1234;
    // int StudentRecord = 30;
    // float student_score = 77.82;
    // int MAX_BUFFER_SIZE = 100;
    // cout << "" << studentId << endl;
    // cout << "" << StudentRecord << endl;
    // cout << "" << student_score << endl;
    // cout << "" << MAX_BUFFER_SIZE << endl;
    // Ex 5
    
    // int num;
    // cin >> num;
    // if (num % 2 == 0){
    //     cout << "Even\n";
    // }else{
    //     cout << "Odd\n";
    // }

    // Ex 6
    
    // char grade;
    // cin >> grade;
    // switch (grade){
    // case 'A':
    //     cout << "Excellent\n";
    //     break;
    // case 'B':
    //     cout << "Good\n";
    //     break;
    // case 'C':
    //     cout << "Fair\n";
    //     break;
    // case 'F':
    //     cout << "Fail\n";
    //     break;
    // default:
    //     cout << "Invalid Grade\n";
    //     break;
    // }
    
    // Ex 7
    
    // int n = 5;
    // for (int i = 1; i <= 10; i++){
    //     cout << "" << n*i << endl;
    // }

    // Ex 8
    
    // int op;
    // do{
    //     cout << "Enter your option: ";
    //     cin >> op;
    //     if(op == 1){
    //         char name[50];
    //         cout << "What is your name? ";
    //         cin >> name;
    //         cout << "Hello " << name << endl;
    //     }else if(op == 2){
    //         int n;
    //         cout << "Enter the number: ";
    //         cin >> n;
    //         int result = 1;
    //         for(int i = n; i > 0; i--){
    //             result *= i;
    //         }
    //         cout << "" << result << endl;
    //     }
    // }while (op != 0);

    // Ex Bonus
    
    int num;
    cout << "Enter the possitive number: ";
    cin >> num;
    if(num > 0){
        for(int i = 0; i <= num; i++){
            bool isPrime = true;
            if (i < 2) {
                isPrime = false;
            } else {
                for (int j = 2; j * j <= i; j++) {
                    if (i % j == 0) {
                        isPrime = false;
                        break;
                    }
                }
            }
            if (isPrime) {
                cout << " " << i;
            }
        }
    }else{
        cout << "The number is not possitive number\n";
    }
    return 0;
}