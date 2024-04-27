#include<iostream>
#include<string>
using namespace std;

int main(){
    int *dynamicInteger = nullptr;
     string *dynamicString = new string;
    dynamicInteger = new int;
    cout<<"enter value to the dynamically allocated string:"<<endl;//prompt user to enter value for dynamically allocated string.

    cout<<"enter value to the dynamically allocated integer:"<<endl;//prompt user to enter value for dynamically allocated integer.

    cin>>*dynamicString;//user input

    cin>>*dynamicInteger;
    cout<<"the value of dynamically allocated string is:"<<*dynamicString<<endl;

    cout<<"the value of dynamically allocated intege is:"<<*dynamicInteger;

     delete dynamicInteger;

     delete dynamicString;
     
     return 0;

}# pointers
