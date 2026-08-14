#include<iostream>
#include<cmath>
#define pi 3.14159

double calculateArea(double radius){
    return pi * std::pow(radius , 2); 
}

double calculateArea(double length , double breadth){
    return length * breadth;
}

double calculateArea(double base , double height, bool istrue){
    return 0.5 * base * height;
}

double power(int base , int exponent){
    if(exponent==0) return 0;
    if(exponent==1) return base;
    int result = 1;
    for(int i =0;i<exponent;i++){
        result *= base;
    }
    return result;
}

double power(double base, double exponent){
    return std::pow(base,exponent);
}


long long recursivefactorial(int n){
    if(n<=1){
        return 1;
    }
    return n * recursivefactorial(n-1);
}


long long iterativeFactorial(int n){
    if(n<=1) return 1;
    int result = 1;
    for(int i =1;i<=n;i++){
        result *= i;

    }
    return result;
}


long long iterativeFibonaaci(int n){
    if(n<=1) return 1;
    int curr = 1 , prev = 0;
    int next;
    for(int i =2;i<n;i++){
        int next = prev + curr;
        prev = curr;
        curr = next;
    }
    return curr;

}




long long fibonacci(int n){
    if(n<=0) return 0;
    if(n==1) return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}

long long sumofdigits(int n){
    if(n<=0) return 0;
    if(n==1) return 1;
    return n%10 +sumofdigits(n/10);
}

int main(){
    // std::cout << "=== Area Calculations ===" << std::endl;
    // std::cout << "Circle (radius 5): " << calculateArea(5.0) << std::endl;
    // std::cout << "Rectangle (4x6): " << calculateArea(4.0, 6.0) << std::endl;
    // std::cout << "Triangle (base 4, height 6): " << calculateArea(4.0, 6.0,true) << std::endl;
    // // Test power calculations
    // std::cout << "\n=== Power Calculations ===" << std::endl;
    // std::cout << "Integer: 2^8 = " << power(2, 2) << std::endl;
    // std::cout << "Float: 2.5^3.2 = " << power(2.5, 3.2) << std::endl;
    // std::cout<<"Factorial: "<<recursivefactorial(5)<<std::endl;
    std::cout<<"Factorial: "<<iterativeFactorial(50)<<std::endl;
    // for(int i=0;i<10;i++){
    //     std::cout<<fibonacci(i)<<" ";
    // }
    // std::cout<<std::endl;
    // std::cout<<"Sum of digits: "<<sumofdigits(12345)<<std::endl;
    // std::cout<<"Iterative Fibonacci: "<<iterativeFibonaaci(5)<<std::endl;

    return 0;
}