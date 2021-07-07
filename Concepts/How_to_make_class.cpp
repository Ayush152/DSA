#include <bits/stdc++.h>
using namespace std;

class Student {

    public :
    int rollNumber;

    private :
    int age;

    public :

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
    // Create objects statically
    Student s1;
    Student s2;

    Student s3, s4, s5;

    //s1.age = 24;
    s1.rollNumber = 101;

    cout << "s1 age : " << s1.getAge() << endl;
    cout << "s1 roll number : " << s1.rollNumber << endl;

    s1.display();
    s2.display();


    //s2.age = 30;

    // Create objects dynamically
    Student *s6 = new Student;
    Student *s7 = new Student;

    //(*s6).age = 25;
    (*s6).rollNumber = 104; 

    (*s6).display();

    cout << "s6 age : " << s6 -> getAge() << endl;

    //s7 -> age = 23;
    s7 -> rollNumber = 102;

    s7 -> display();
}