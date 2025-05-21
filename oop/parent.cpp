#include<iostream>
using namespace std;
class Parent {
public:
    void greet() {
        cout << "Hello from Parent!" << endl;
    }
};
class child:public Parent{
    public:
    void display()
{
    cout<<"hello from child";
}
};
int main(){
    child ob;
    ob.greet();
    ob.display();
    return 0;
}