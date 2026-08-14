#include "calculator.h"
#include<cmath>
#include<iostream>
#include<limits>

void input_validation(double &num){
    while(!(std::cin>>num)){
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cout<<"Invalid input. Please enter a valid number: "<<std::endl;
                        }
}

double addition(double num1 , double num2){
    return num1 + num2;
}

double subtraction(double num1 , double num2){
    return num1 - num2;
}
double multiplication(double num1 , double num2){
    return num1 * num2;
}
double division(double num1, double num2){
    if(num2==0){
        std::cout<<"Error, Zero division error."<<std::endl;
        while(true){
            std::cout<<"Please enter a valid number: "<<std::endl;
            input_validation(num2);
            if(num2!=0){
                break;
            }
        }
    }
    return num1/num2;
}
double exponential(double base , double exponent){
    return pow(base,exponent);
}
double square_root(double num){
    if(num<0){
        std::cout<<"Square root of negative numbers are not possible."<<std::endl;
        while(true){
            std::cout<<"Please enter a valid number: "<<std::endl;
            input_validation(num);
            if(num>=0){
                break;
            }
        }
    }
    return sqrt(num);
}
double cube(double num){
    return num*num*num;
}
double modulus(double num1 , double num2){
    if(num2==0){
        std::cout<<"Error, Zero division error."<<std::endl;
        while(true){
            std::cout<<"Please enter a valid number: "<<std::endl;
            input_validation(num2);
            if(num2!=0){
                break;
            }
        }
    }
    return static_cast<int>(num1) % static_cast<int>(num2);
}
double absolute(double num){
    return fabs(num);
}
