#include<iostream>
using namespace std;

int main(int argc, const char** argv) {
    // int n = -5;
    // if(n>=0){
    //     cout<<"Positive number "<<endl;
    // }
    // else{
    //     cout<<"Not Positive number "<<endl;
    // }

    // cout<<"Enter your age to clarify your age for voting: "<<endl;
    // int age;
    // cin>>age;
    // if((age >= 18)&&(age <= 70)){
    //     cout<<"You Can vote now "<<endl;
    // }
    // else{
    //     cout<<"You Cannot vote "<<endl;
    // }

    // cout<<"Enter a number wheather to check a number is even or odd : "<<endl;
    // int n;
    // cin>>n;
    // if(n%2==0){
    //     cout<<"Number is Even. "<<endl;
    // }
    // else if(n%2!=0)
    // {
    //     cout<<"Number is Odd. "<<endl;
    // }

    // cout<<"Enter your marks: "<<endl;
    // int marks;
    // cin>>marks;
   
    // if(marks>=90)
    // {
    //     cout<<"Grade A: "<<endl;
    // }
    
    // else if(marks<90&&marks>65)
    // {
    //     cout<<"Grade B: "<<endl;
    // }

    // else if(marks>=50&&marks<=64)
    // {
    //     cout<<"Grade C: "<<endl;
    // }

    // char ch;
    // cout<<"Enter char: "<<endl;
    // cin>>ch;
    // if(ch >='a' && ch <='z'){
    //     cout<<"Small char: "<<endl;
    // }
    // else{
    //     cout<<"Not small char: ";
    // }

    // int n = 10;
    // int sum = 0;
    // int i = 1;
    // while(i<=n){
    //     sum += i;
    //     i++;
    //     if(i == 55){
    //         break;
    //     }
    // }
    // cout<<"Sum of n is: "<<sum<<endl;
    
    // int n = 10;
    // int sum = 0;
    // for(int i = 1;i<=n;i++){
    //     if(i%2!=0){
    //         sum += i;
    //     }    
    // }
    // cout<<"sum of odd digit is: "<<sum<<endl;

// int n = 9;
// bool isPrime = true;
// for(int i = 2;i<=n-1; i++){
//     if(n%i==0){
//         isPrime = false;
//         break;
//     }
// }
// if(isPrime == true){
//     cout<<"It is Prime num: "<<endl;
// }else{
//     cout<<"It is not Prime num: "<<endl;
// }
   
//    int n = 9;
//    bool isPrime =  true;
//    for(int i = 2; i*i <= n;i++){
//     if(n%i == 0){
//         isPrime = false;
//         break;
//     }
//    }
//    if(isPrime == true){
//         cout<<"Prime"<<endl;    
//    }else{
//     cout<<"Non Prime"<<endl;
//    }

// int r = 5;
// int c = 5;

// for(int r1 = 1; r1 <= r; r1++){
//     for(int c2 = r1; c2 <= c; c2++){
//         cout<<"*";
//     }
//     cout<<"\n";
// }

   int n = 10;
   int sum = 0;
   for(int i = 1;i<=n;i++){
    if(n%3==0){
        sum += i;
    }
   }
   cout<<"Sum of 3 divisible: "<<sum;
    return 0;
}