#include <algorithm>
#include <iostream>
#include <limits>
#include <numeric>
#include <vector>

namespace {

void clearInputStream() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int readIntInRange(const char* prompt, int minVal, int maxVal) {
    int value = 0;
    while (true) {
        std::cout << prompt;
        if (std::cin >> value && value >= minVal && value <= maxVal) {
            return value;
        }
        std::cout << "Invalid input. Please enter a number between "
                  << minVal << " and " << maxVal << ".\n";
        clearInputStream();
    }
}

std::vector<int> collectMarks(int count) {
    std::vector<int> marks;
    marks.reserve(static_cast<std::size_t>(count));

    for (int i = 0; i < count; ++i) {
        std::cout << "Enter marks for student " << (i + 1) << " (0-100): ";
        int mark = readIntInRange("", 0, 100);
        marks.push_back(mark);
    }
    return marks;
}

void displayMarks(const std::vector<int>& marks) {
    std::cout << "\n--- Student Marks ---\n";
    for (std::size_t i = 0; i < marks.size(); ++i) {
        std::cout << "Student " << (i + 1) << ": " << marks[i] << '\n';
    }
}

double calculateAverage(const std::vector<int>& marks) {
    const long long sum = std::accumulate(marks.begin(), marks.end(), 0LL);
    return static_cast<double>(sum) / static_cast<double>(marks.size());
}

int findHighest(const std::vector<int>& marks) {
    return *std::max_element(marks.begin(), marks.end());
}

int findLowest(const std::vector<int>& marks) {
    return *std::min_element(marks.begin(), marks.end());
}

void printMenu() {
    std::cout << "\n==== STUDENTS MARKS SYSTEM =====\n"
              << "1. Display All Marks\n"
              << "2. Calculate Average\n"
              << "3. Find Highest Marks\n"
              << "4. Find Lowest Marks\n"
              << "5. Exit\n";
}

}  // namespace

int main() {
    constexpr int kMaxStudents = 10000;
    constexpr int kMenuExit = 5;

    const int studentCount = readIntInRange(
        "Enter number of students: ", 1, kMaxStudents);
    const std::vector<int> marks = collectMarks(studentCount);

    int choice = 0;
    do {
        printMenu();
        choice = readIntInRange("Enter Choice: ", 1, kMenuExit);

        switch (choice) {
            case 1:
                displayMarks(marks);
                break;
            case 2:
                std::cout << "Average marks: " << calculateAverage(marks) << '\n';
                break;
            case 3:
                std::cout << "Highest marks: " << findHighest(marks) << '\n';
                break;
            case 4:
                std::cout << "Lowest marks: " << findLowest(marks) << '\n';
                break;
            case kMenuExit:
                std::cout << "Exiting program.\n";
                break;
        }
    } while (choice != kMenuExit);

    return 0;
}