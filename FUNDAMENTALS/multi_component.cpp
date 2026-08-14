#include<iostream>    //for input and output operations
#include<iomanip>     //for formatting the output
#include<string>      //for using the string data type
#include<chrono>      //for using the time functions
#include<random>      //for generating random numbers
using namespace std;


int main(){
    string fact1 = "C++ is a procedural programming langauge";
    string fact2 = "C++ is a Object Oriented Lanaguage";
    bool isFact1True = false;
    cout<<fact1<<endl;
    cout<<fact2<<endl;
    cout<<"Is Fact1 true?"<<(isFact1True ? "Yes" : "No")<<endl;
    return 0;
}