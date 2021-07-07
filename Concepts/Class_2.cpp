#include <bits/stdc++.h>
using namespace std;

class Student {

    public :
    int rollNumber;

    private :
    int age;

    public :

    // default constructor
    Student(){
        cout << "Constructor Called !" << endl;
    }

    //Parameterized Constructor
    Student(int rollNumber){
        cout << "Constructor 2 called" << endl;
        this -> rollNumber = rollNumber;
    }

    Student(int a, int r){
        cout << "This : " << this << endl;
        cout << "Constructor 3 called" << endl;
        this -> age = a;
        this -> rollNumber = r;
    }

    void display(){
        cout << age << " " << rollNumber << endl;
    }

    int getAge(){
        return age;
    }

    void setAge(int a){
        age = a;
    }
};

int main(){
    Student s1;

    Student *s2 = new Student;

    s1.setAge(20);
    s2 -> setAge(24);

    s1.getAge();
    s2 -> getAge();

    s1.display();
    s2 -> display();

    cout << "Parameterized constructor Demo \n";
    Student s4(10);

    s4.display();

    Student *s5 = new Student(101);
    s5 -> display();

    Student s6(26, 200);
    s6.display();
}