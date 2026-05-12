#include <iostream>

using namespace std; // Removed the double "namespace" keyword

int main()
{
    int arr[4] = {16, 28, 9, 10};
    int n = 4;

    cout << "Before sorting:" << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    // Standard Bubble Sort Logic
    for(int i = 0; i < n - 1; i++) {
        // The inner loop stops at n - i - 1 so j+1 never hits arr[4]
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                // Swapping elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "After swapping (Sorted):" << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
