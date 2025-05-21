#include <iostream>
#include <exception>
using namespace std;

class InvalidAge : public exception {
    public:
    const char* what() const noexcept override {
        return "Invalid age! Age must be between 0 and 120.";
    }
};

class Person {
private:
    int age;

public:
    void setAge(int a) {
        if (a < 0 || a > 120) {
            throw InvalidAge();
        }
        age = a;
    }

    void displayAge() {
        cout << "Age is: " << age << endl;
    }
};

int main() {
    Person p;

    try {
        int inputAge;
        cout << "Enter age: ";
        cin >> inputAge;

        p.setAge(inputAge);
        p.displayAge();
    }
    catch (const InvalidAge& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}