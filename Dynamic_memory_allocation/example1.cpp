#include <iostream>
using namespace std;

int main() {
    int* ptr = new int;  // allocate memory for one int
    

    cout << "Value: " << *ptr << endl;

    delete ptr;  // free the memory

    return 0;
}