#include <iostream>
#include <list>
using namespace std;

class Group {
private:
    class Student {
    public:
        int age;
        string name;
        Student(int age, string name) {
            this->age = age;
            this->name = name;
        }
    };
    list<Student*> students;
public:
    string groupName;
    Group(string name) {
        this->groupName = name;
    }
    void addStudent(int age, string name) {
        Student* student1 = new Student(age, name);
        this->students.push_back(student1);
    }
    void displayStudents() {
        cout << "\n*Numele grupei: " << endl << this->groupName << endl;
        cout << "\n*Studentii inscrisi:" << endl;
        for (Student* student : this->students) {
            cout << student->name << " " << student->age << endl;
        }
    }
};

int main()
{
    Group* group1 = new Group("Informatica");
    Group* group2 = new Group("Matematica");

    group1->addStudent(19, "Mirela");
    group1->addStudent(21, "Mihai");
    group2->addStudent(18, "Andreea");
    group2->addStudent(20, "Diana");

    group1->displayStudents();
    group2->displayStudents();
}