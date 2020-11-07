#include <iostream>
#include "ArrayQueue.h"

int main() {
    int n, choice, x;
    char cont;

    std::cout
            << "Enter the maximum number of items that can be stored in a queue: ";
    std::cin >> n;

    ArrayQueue<int> arr = ArrayQueue<int>(n);
    std::cout << "Queue initialized successfully." << std::endl << std::endl;

    while (true) {
        std::cout << "What do you want to perform in the queue ?" << std::endl;
        std::cout << "1. Insert in the queue." << std::endl;
        std::cout << "2. Remove from the queue." << std::endl;
        std::cout << "3. Get front of the queue." << std::endl;
        std::cout << "4. Get rear of the queue." << std::endl;

        std::cout << "Your choice : ";
        std::cin >> choice;
        try {
            switch (choice) {
                case 1:
                    std::cout << "Enter value number to insert: ";
                    std::cin >> x;
                    arr.insert(x);
                    break;
                case 2:
                    std::cout << arr.remove() << "removed from the queue" << std::endl;
                    break;
                case 3:
                    std::cout << "Front value = " << arr.front() << std::endl;
                    break;
                case 4:
                    std::cout << "Rear value = " << arr.rear() << std::endl;
                    break;
                default:
                    break;
            }
        } catch (const char *error) {
            std::cout << error << std::endl;
        }

        std::cout << "Do you want to continue? ";
        std::cin >> cont;
        if (cont == 'n') {
            break;
        }
    }
}