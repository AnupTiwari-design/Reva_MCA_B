#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class DescendingOrder {
public:
    bool operator()(int a, int b) {
        return a > b; // Sort in descending order
    }
};

int main() {
    vector<int> v = {5, 2, 9, 1};

    sort(v.begin(), v.end(), DescendingOrder());

    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}