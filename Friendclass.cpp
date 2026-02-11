#include <iostream>
using namespace std;

class Student   // Main Class
{
private:
    int marks;

public:
    Student(int m)
    {
        marks = m;
    }

    // Declare Result as Friend Class
    friend class Result;
};

// Friend Class
class Result
{
public:
    void display(Student s)
    {
        // Accessing private data of Student
        cout << "Student Marks = " << s.marks << endl;
    }
};

int main()
{
    Student s1(85);   // Create Student Object

    Result r1;        // Create Result Object

    r1.display(s1);   // Access private data

    return 0;
}
