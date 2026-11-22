
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Student {
private:
    std::string name;
    int marks;

public:
    Student(std::string n, int m)
        : name(std::move(n)), marks(m) {}

    void display() const {
        std::cout << name << " : " << marks << '\n';
    }

    int getMarks() const {
        return marks;
    }

    std::string getName() const {
        return name;
    }
};

int main() {
    std::vector<Student> students;

    students.emplace_back("Ayush", 90);
    students.emplace_back("Nitin", 75);
    students.emplace_back("Chota", 95);

    std::sort(
        students.begin(),
        students.end(),
        [](const Student& a, const Student& b) {
            return a.getMarks() > b.getMarks();
        }
    );

    std::cout << "Student Rankings:\n";

    for (const Student& student : students) {
        student.display();
    }

    return 0;
}