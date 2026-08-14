#include<iostream>
#include<string>
#include<cmath>


double perform_operations(double a , double b, char op){
    switch(op){
        case '+': return a+b;
        case '-': return a-b;
        case '*': return a*b;
        case '/':
            if(b!=0)
                return a/b;
            else
                std::cout<<"Number is not divisible by zero.";
                return 0;
        case '%':
            if(b!=0)
                return static_cast<int>(a) % static_cast<int>(b);
            else{
                std::cout<<"Error, Zero division Error";
                return 0;
            } 
        case '^':
            return pow(a,b);

        default:
            std::cout<<"This operation doesn't exist.";
            return 0;
        
    }
}

bool perform_relational_operations(double a, double b, std::string op){
    if(op == "==")
        return a == b;
    else if (op == "!=")
        return a!=b;
    else if (op == ">=")
        return a>=b;
    else if (op == "<=")
        return a<=b;
    else if (op == "<")
        return a<b;
    else if (op == ">")
        return a>b;
    else{
        std::cout<<"This operation doesn't exists"<<std::endl;
        return false;
    }
    
}


bool logical_operator(double a, double b , std::string op){
    if(op == "&&")
        return a&&b;
    else if (op == "||")
        return a||b;
    else
        std::cout<<"This operation doesn't exists"<<std::endl;
}




int main(){
    bool isTrue = true;
    while(isTrue){
        double a,b;
        std::string y;
        int operation_type;
        std::cout<<"Enter your operation type: "<<std::endl;
        std::cout<<"1. For Arthematic Operations "<<std::endl;
        std::cout<<"2 For Relational Operations: "<<std::endl;
        std::cout<<"3 For Logical Operations: "<<std::endl;
        std::cin>>operation_type;
        if(operation_type == 1){
            char op;
            std::cout<<"Enter your first number: "<<std::endl;
            std::cin>>a;
            std::cout<<"Enter your second number: "<<std::endl;
            std::cin>>b;
            std::cout<<"Choose the operation you want to perform (+, -, *, /, %, ^): "<<std::endl;
            std::cin>>op;
            double result = perform_operations(a,b,op);
            std::cout<<"The answer is: "<<result<<std::endl;
        }

        else if (operation_type== 2){
            std::string ro;
            std::cout<<"Enter your first number: "<<std::endl;
            std::cin>>a;
            std::cout<<"Enter your second number: "<<std::endl;
            std::cin>>b;
            std::cout<<"Choose the operation you want to perform (> , <, ==, !=, <=, >=): "<<std::endl;
            std::cin>>ro;
            bool relation_result = perform_relational_operations(a,b,ro);
            std::cout<<"The answer is: "<<relation_result<<std::endl;
        }
        
        else if(operation_type == 3){
            std::string lo;
            std::cout<<"Enter your first number: "<<std::endl;
            std::cin>>a;
            std::cout<<"Enter your second number: "<<std::endl;
            std::cin>>b;
            std::cout<<"Choose the operation you want to perform ( &&, || ): "<<std::endl;
            std::cin>>lo;
            bool logical_result = logical_operator(a,b,lo);
            std::cout<<"The answer is: "<<logical_result<<std::endl;

        }

        std::cout<<"Do you want to continue calculations? Yes / No"<<std::endl;
        std::cin>>y;
        if(y == "Yes" || y == "yes" )
            isTrue = true;
        else{
            std::cout<<"Thank you"<<std::endl;
            isTrue = false;
        }
    }
    return 0;
}