
#include <iostream>
#include <new>

int main()
{
    int size;

    std::cout << "Enter list size: ";
    std::cin >> size;

    if (size <= 0) {
        std::cout << "Invalid list size!" << std::endl;
        return 1;
    }

    // Dynamically allocate memory
    int* list = new int[size];

    // Insert elements
    std::cout << "Enter " << size << " elements:\n";

    for (int i = 0; i < size; i++) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> list[i];
    }

    // Display elements
    std::cout << "\nYour List: ";

    for (int i = 0; i < size; i++) {
        std::cout << list[i] << " ";
    }

    std::cout << std::endl;

    // Release allocated memory
    delete[] list;

    return 0;
}
