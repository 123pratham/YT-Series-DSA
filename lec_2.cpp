/* Lecture 2 : Variable, Data Types & Operators | DSA Series | C++*/

#include<iostream>
using namespace std;
// int main(){
//     std::cout << "/* message */" << std::endl;
// }
int main(){
    cout<<"Hello mere bhai"<<endl;
    // char grade = 'a';//97
    // int value = grade;
    // cout<<value<<endl;
    float price = 655.25;
    int newPrice = (int)price;
    cout<<newPrice<<endl;
//Relational operator

    cout<<(3>5)<<endl;
    cout<<(5>2)<<endl;

// Logical operator     OR -> || -> pipe operator / AND -> Logical and -> &&  / NOT -> !
//not
cout<<!(3>1)<<endl;
cout<<!(3<2)<<endl;

// OR its need any one got true for excutoion
cout<<((3<2)||(3>2))<<endl;

//AND its need to be both true when code execute
cout<<((3>2) && (5>3))<<endl;

// Sum of two numbers

int a=10;
int b=50;
int sum = a+b;
cout<<sum<<endl;
int a1,b1;
cout<<"Enter number of a: "<<endl;

cin>>a1;
cout<<"Enter number of b: "<<endl;
cin>>b1;

int sum1 = a1+b1;
cout<<"Your ans is:"<<sum1<<endl;
    return 0;
}
