#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> numbers;

    for (int i = 1; i <= 10; i++)
        numbers.push_back(i);

    // Print vector elements with iterators
    for (auto it = numbers.begin(); it != numbers.end(); it++) {
        cout << *it << endl;
        cout << &(*it) << endl;
    }

    auto it = numbers.begin();
    cout << "Element at index 5 is: " << *(it + 5) << endl;

    // Important functionalities
    cout << "Size: " << numbers.size() << endl;
    cout << "Max size: " << numbers.max_size() << endl;
    cout << "Capacity: " << numbers.capacity() << endl;
    numbers.resize(5);
    cout << "Size after resizing: " << numbers.size() << endl;

    if (numbers.empty())
        cout << "Vector is empty" << endl;
    else
        cout << "Vector is not empty" << endl;
    cout << "Element[0] is: " << numbers[0] << endl;
    cout << "Element at(0) is: " << numbers.at(0) << endl;
    cout << "Front: " << numbers.front() << endl;
    cout << "Back: " << numbers.back() << endl;

    // Insert element at a specific position in the vector
    numbers.insert(numbers.begin() + 2, 88);
    // Erase element from a specific position
    numbers.erase(numbers.begin() + 2);
    // Remove the last element of the vector
    numbers.pop_back();

    // Clear all the elements of the vector
    numbers.clear();
    cout << "Size after clear: " << numbers.size() << endl;

    cin.get();

    // Return 0 to indicate successful execution
    return 0;
}
