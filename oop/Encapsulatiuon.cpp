#include<iostream>
using namespace std;
class student{
    private:
    int age;
    string name;

    public:
    void setName(string n){
        name=n;

    }
    string getName() {
        return name;
    }
    void setAge(int a){
        if(a>0){
            age=a;
        }
    }
    int getAge() {
        return age;
    }
};
int main() {
    student s;
    s.setName("Mokshith");
    cout<<s.getName()<<endl;
    s.setAge(35);
    cout<<s.getAge();
}