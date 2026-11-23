#include <iostream>

void displayMarks(const int* marks, int size) {
    std::cout << "\n--- Student Marks ---\n";
    for (int i = 0; i < size; i++) {
        std::cout << "Student " << (i + 1) << ": " << marks[i] << "\n";
    }
}

double calculateAverage(const int* marks, int size) {
    long long sum = 0;
    for (int i = 0; i < size; i++) {
        sum += marks[i];
    }
    return static_cast<double>(sum) / size;
}

int findHighest(const int* marks, int size) {
    int highest = marks[0];
    for (int i = 1; i < size; i++) {
        if (marks[i] > highest) {
            highest = marks[i];
        }
    }
    return highest;
}

int findLowest(const int* marks, int size) {
    int lowest = marks[0];
    for (int i = 1; i < size; i++) {
        if (marks[i] < lowest) {
            lowest = marks[i];
        }
    }
    return lowest;
}

int main() {
    int size = 0;
    std::cout << "Enter number of students: ";
    std::cin >> size;

    if (!std::cin || size <= 0) {
        std::cout << "Invalid number!\n";
        return 1;
    }

    int* marks = new int[size];

    for (int i = 0; i < size; i++) {
        std::cout << "Enter marks for student " << (i + 1) << ": ";
        std::cin >> marks[i];
        if (!std::cin) {
            std::cout << "Invalid marks input!\n";
            delete[] marks;
            return 1;
        }
    }

    int choice = 0;
    do {
        std::cout << "\n==== STUDENTS MARKS SYSTEM =====\n";
        std::cout << "1. Display All Marks\n";
        std::cout << "2. Calculate Average\n";
        std::cout << "3. Find Highest Marks\n";
        std::cout << "4. Find Lowest Marks\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter Choice: ";
        std::cin >> choice;

        if (!std::cin) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Please enter a valid number.\n";
            continue;
        }

        switch (choice) {
            case 1:
                displayMarks(marks, size);
                break;
            case 2:
                std::cout << "Average marks: " << calculateAverage(marks, size) << "\n";
                break;
            case 3:
                std::cout << "Highest marks: " << findHighest(marks, size) << "\n";
                break;
            case 4:
                std::cout << "Lowest marks: " << findLowest(marks, size) << "\n";
                break;
            case 5:
                std::cout << "Exiting program.\n";
                break;
            default:
                std::cout << "Invalid choice! Try 1 to 5.\n";
                break;
        }
    } while (choice != 5);

    delete[] marks;
    return 0;
}