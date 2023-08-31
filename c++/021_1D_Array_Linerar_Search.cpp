#include <iostream>
int main() {
    int rows, cols;
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;
    std::cout << "Enter the number of columns: ";
    std::cin >> cols;
    int arr[rows][cols];
    std::cout << "Enter the elements of the array:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> arr[i][j];
        }
    }
    int target;
    std::cout << "Enter the target element to search for: ";
    std::cin >> target;
    bool found = false;
    int targetRow, targetCol;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (arr[i][j] == target) {
                found = true;
                targetRow = i;
                targetCol = j;
                break;
            }
        }
        if (found) {
            break;
        }
    }
    if (found) {
        std::cout << "Element " << target << " found at position (" << targetRow << ", " << targetCol << ")\n";
    } else {
        std::cout << "Element not found in the array.\n";
    }
    return 0;
}