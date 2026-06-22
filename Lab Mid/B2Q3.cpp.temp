#include<iostream>
using namespace std;

class Student{
    int id, marks;
public:
    Student(int sid=0, int smarks=0){
        id = sid;
        marks = smarks;
    }
    void setData(int sid=0, int smarks=0){
        id = sid;
        marks = smarks;
    }
    void display(){
        cout << "ID: " << id << " Marks: " << marks << endl;
    }
};
int main(){
    int temp_id, temp_marks, numberOfStudents;
    cout << "Enter number of students: ";
    cin >> numberOfStudents;

    Student s[numberOfStudents];
    for(int i=0; i<numberOfStudents; i++){
        cout << "Student " << i+1 << ": " << endl;

        cout << "ID = ";
        cin >> temp_id;

        cout << "Marks = ";
        cin >> temp_marks;

        s[i].setData(temp_id, temp_marks);
    }
    cout << "Student Details: " << endl;
    for(int i=0; i<numberOfStudents; i++){
        s[i].display();
    }
}
