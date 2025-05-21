#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter a no"<<endl;
    cin>>a;
    cout<<"enter second no";
    cin>>b;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"swaped no for a and b is"<<a<<" "<<b;
    return 0;
    
}