#include<iostream>
using namespace std;

class rectangle{
    public:
    int length;
    int bredth;
    rectangle(int length,int bredth){
        this->length=length;
        this->bredth=bredth;
        
    }
    int area(){
        return length*bredth;
    }

};
int main(){
    rectangle ob(4,5);
   int area=ob.area();
   cout<<area;
    return 0;
}