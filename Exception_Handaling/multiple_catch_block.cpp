#include <iostream>
using namespace std;

int main() {
    try {
        throw "abc"; // throw an int
    }
    catch (int x) {
        cout << "Caught integer: " << x << endl;
    }
    catch (...) {
        cout << "Caught unknown exception!" << endl;
    }

    return 0;
}