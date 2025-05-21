#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> v = {10, 3, 30, 5, 50};
    sort(v.begin(), v.end()); 

    cout << "Using iterator to print vector:\n";
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " "; // *it gives the value at the iterator
    }

    return 0;
}