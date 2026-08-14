#include<iostream>
int main(){
    // int number = 1;
    // float decimal = 1.5f;
    // char alphabet = 'A';
    // bool isTrue = true;
    // double precision = 3.14;
    // short smallNumber = 10;
    // long long largeNumber = 1000000;
    // std::cout<< "Size of int: "<< sizeof(number) << " Bytes"<< std::endl;
    // std::cout<< "Size of float: "<< sizeof(decimal) << " Bytes"<< std::endl;
    // std::cout<< "Size of char: "<< sizeof(alphabet) << " Bytes"<< std::endl;
    // std::cout<< "Size of bool: "<< sizeof(isTrue) << " Bytes"<< std::endl;
    // std::cout<< "Size of double: "<< sizeof(precision) << " Bytes"<< std::endl;
    // std::cout<< "Size of short: "<< sizeof(smallNumber) << " Bytes"<< std::endl;
    // std::cout<< "Size of long long: "<< sizeof(largeNumber) << " Bytes"<< std::endl;
    // int isTrue = true;
    // std::cout<< isTrue<< std::endl;

    int childAge = 10;
    int teenAge = 15;
    int adultAge = 25;
    int avrg = (childAge + teenAge + adultAge)/3;
    std::cout<<"Average age: "<<avrg<<std::endl;
    int diff_between_younngest_and_oldest = adultAge - childAge;
    std::cout<<"Difference between the youngest and the oldest age: "<<diff_between_younngest_and_oldest<<std::endl;



    char grade = 'A';
    char symbol = '#';
    char initial = 'j';
    std::cout<<"Grade has a ASCII value of "<<int(grade)<<std::endl;
    std::cout<<"Symbol has a ASCII value of "<<int(symbol)<<std::endl;
    std::cout<<"Initial has a ASCII value of "<<int(initial)<<std::endl;
    return 0;
}