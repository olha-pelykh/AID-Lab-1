#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm> 

using std::vector;
using std::cout;
using std::endl;

void fillVectorWithRandomValues(vector<int>& arr, int size) {
    srand(time(0));
    for (int i = 0; i < size; ++i) {
        arr.push_back(rand() % 100);
    }
}

void binarySearchAndReplace(vector<int>& arr, int b) {
    int left = 10;               
    int right = arr.size() - 1;  
    int comparisons = 0;         

    while (left <= right) {
        int mid = left + (right - left) / 2;
        comparisons++;  

        if (arr[mid] == b) {
            arr[mid] = 2 * (b * b); 
            cout << "Number of elements that was fiden in the massive " << mid << endl;
            cout << "Number of comparison: " << comparisons << endl;
            return;
        }

        if (arr[mid] > b) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    cout << "Element " << b << " was not fiden in area from to 10 to " << arr.size() - 1 << endl;
    cout << "Number of comparison: " << comparisons << endl;
}

int main() {
    vector<int> arr;
    int vectorSize;

    cout << "Enter the number of elements in vector: ";
    std::cin >> vectorSize;

    fillVectorWithRandomValues(arr, vectorSize);

    std::sort(arr.rbegin(), arr.rend());

    cout << "Initial massive: ";
    for (const int& num : arr) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Enter the element that you wanted to find and change: ";
    int b;
    std::cin >> b;

    binarySearchAndReplace(arr, b);

    cout << "Updated massive: ";
    for (const int& num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
