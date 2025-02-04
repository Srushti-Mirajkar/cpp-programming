#include<iostream>
using namespace std;
int globalVar = 50; // Global variable
int main() {
int localVar = 10; // Local variable
const float pi = 3.14; // Constant
cout<<"global variable:"<<globalVar<<endl; 
cout<<"local variable:"<<localVar<<endl;
cout<<"const pi:"<<pi<<endl;     
int a = 5, b = 10;
int sum = a + b; // Simple operation
return 0;
}
