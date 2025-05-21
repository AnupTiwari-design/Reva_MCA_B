#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    student(string name,int age){
        this->name=name;
        this->age=age;


    }
    void introduction(){
        cout<<"Hi My self "<<name<<" "<<"my ages is "<<age;
    }


};
int main(){
    student ob("Anup",20);
    
    ob.introduction();
    return 0;
}