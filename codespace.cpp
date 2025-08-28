#include <iostream>
using namespace std;

class Student {
    public:
        string name;
        int id;
        double gpa;
};

void displayInfo(string name, int id, double gpa){
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
    cout << "GPA: " << gpa << endl;
}

int main(){

    Student student;
    student.name = "Sakal pong toch";
    student.id = 1234;
    student.gpa = 3.14;

    displayInfo(student.name, student.id, student.gpa);

    return 0;
}