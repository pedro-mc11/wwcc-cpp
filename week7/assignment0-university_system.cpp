#include <iostream>
#include <iomanip>
using namespace std;

class Student {
private:
    string name;
    int id;
    double gpa;

public:
    Student(string name, int id, double gpa) : name(name), id(id), gpa(gpa){}

    string getName() const { return name; }
    int getId() const { return id; }
    double getGpa() const { return gpa; }

    void setName(string n) {
        name = n;
    }
    void setId(int i) {
        id = i;
    }
    void setGpa(double g) {
        gpa = g;
    }
    void printInfo() {
        cout << "ID: " << getId() << " - " << getName() << "\n" << "GPA: " << getGpa() << endl << endl;
    }
    void updateGpa(double g) {
        gpa = g;

        cout << "\nUpdating " << getName() << "'s GPA to " << fixed << setprecision(1) << getGpa() << "..." << endl << endl;

        cout << "Updated Student Information:" << endl;
        cout << "ID: " << getId() << " - " << getName() << "\n" << "GPA: " << fixed << setprecision(2) << getGpa() << endl << endl;

    }
    
};

class Course {
private:
    string code;
    string title;
    int creditHours;

public:
    Course(string code, string title, int creditHours) : code(code), title(title), creditHours(creditHours){}

    string getCode() const { return code; } 
    string getTitle() const { return title; }
    int getCreditHours() const {return creditHours; }

    void setCode(string c) {
        code = c;
    }
    void setTitle(string t) {
        title = t;
    }
    void setCreditHours(int h) {
        creditHours = h;
    }
    void printInfo() {
        cout << getCode() << ": " << getTitle() << " (" << getCreditHours() << " credits)" << endl;
    }
};


int main() {

    cout << "UNIVERSITY MANAGEMENT SYSTEM" << endl;
    cout << "----------------------------" << endl;

    cout << "Student Information:" << endl;

    Student student1("John Alexson", 1001, 3.57);
    Student student2("Gari Marcia", 1002, 3.29);
    Student student3("Wamal Jilliams", 1003, 3.54);
    
    student1.printInfo();
    student2.printInfo();
    student3.printInfo();

    cout << "Course Information:" << endl;

    Course course1("CS&131", "Intro to C++", 5);
    Course course2("CS133", "Intro to C#", 5);

    course1.printInfo();
    course2.printInfo();

    student2.updateGpa(4.0);
    
   
    

    return 0;
}