//	•	vector is a dynamic array.
//	•	It can grow or shrink in size at runtime.
//	•	It’s part of the <vector> header in STL.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    

    vector<int> v(5,100);//declare vector

    v.push_back(5);
    v.push_back(10);
    v.push_back(15);


  cout << "Vector elements: ";
    for(int x : v) {
        cout << x << " ";
    }
    cout << "\nSize: " << v.size() << endl;

    return 0;
}