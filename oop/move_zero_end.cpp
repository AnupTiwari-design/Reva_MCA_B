#include<iostream>
using namespace std;

class Zero_end {
public:
    void move_zero_end(int arr[], int n) {
        int c = 0; // Count of zeroes
        for(int i = 0; i < n; i++) {
            if(arr[i] == 0) {
                c++;
            }
            else if(c > 0) {
                int t = arr[i];
                arr[i] = 0;
                arr[i - c] = t;
            }
        }
    }
};

int main() {
    Zero_end obj;
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    obj.move_zero_end(arr, n);

    cout << "After moving zeroes to end: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}