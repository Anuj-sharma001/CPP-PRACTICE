#include<iostream>
#include<cmath>
#include<limits>

int main(){
    int choice;
    bool program_running = false;
    while(!program_running){
        std::cout<<"Choose the type of operation you want to perform: "<<std::endl;
        std::cout<<"1. Addition"<<std::endl;
        std::cout<<"2. Subtraction"<<std::endl;
        std::cout<<"3. Division"<<std::endl;
        std::cout<<"4. Multiplication"<<std::endl;
        std::cout<<"5. Square root"<<std::endl;
        std::cout<<"6. Exponential"<<std::endl;
        std::cout<<"7. Modulus"<<std::endl;
        std::cout<<"8. Exit"<<std::endl;
        std::cin>>choice;
        if(!(std::cin>>choice)){
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::cout<<"Enter a valid number"<<std::endl;
            continue;
        }
        
        if (choice == 1){
            double num1,num2,result;
            std::cout<<"Enter your first number: "<<std::endl;
            std::cin>>num1;
            std::cout<<"Enter your Second number: "<<std::endl;
            std::cin>>num2;
            result = num1 + num2;
            std::cout<<"The answer is : "<<result<<std::endl;
        }
        else if (choice == 2){
            double num1,num2,result;
            std::cout<<"Enter your first number: "<<std::endl;
            std::cin>>num1;
            std::cout<<"Enter your Second number: "<<std::endl;
            std::cin>>num2;
            result = num1 - num2;
            std::cout<<"The answer is : "<<result<<std::endl;
        }
        else if (choice == 3){
            double num1,num2,result;
            std::cout<<"Enter your first number: "<<std::endl;
            std::cin>>num1;
            std::cout<<"Enter your Second number: "<<std::endl;
            std::cin>>num2;
            if(num2==0){
                std::cout<<"Error,can't divisible by zero"<<std::endl;
            }
            else{
            result = num1 / num2;
            std::cout<<"The answer is : "<<result<<std::endl;
            }
        }
        else if (choice == 4){
            double num1,num2,result;
            std::cout<<"Enter your first number: "<<std::endl;
            std::cin>>num1;
            std::cout<<"Enter your Second number: "<<std::endl;
            std::cin>>num2;
            result = num1 * num2;
            std::cout<<"The answer is : "<<result<<std::endl;
        }
        else if (choice == 5){
            double num1,num2,result;
            std::cout<<"Enter your first number: "<<std::endl;
            std::cin>>num1;
            result = sqrt(num1);
            std::cout<<"The answer is : "<<result<<std::endl;
        }
        else if (choice == 6){
            double num1,num2,result;
            std::cout<<"Enter your first number: "<<std::endl;
            std::cin>>num1;
            std::cout<<"Enter power  of the number: "<<std::endl;
            std::cin>>num2;
            result = pow(num1,num2);
            std::cout<<"The answer is : "<<result<<std::endl;
        }
        else if (choice == 7){
            double num1,num2,result;
            std::cout<<"Enter your first number: "<<std::endl;
            std::cin>>num1;
            std::cout<<"Enter your Second number: "<<std::endl;
            std::cin>>num2;
            result = static_cast<int>(num1) % static_cast<int>(num2);
            std::cout<<"The answer is : "<<result<<std::endl;
        }
        else if(choice == 8){
            std::cout<<"You Exit the Calculator"<<std::endl;
            program_running = true;
        }
        else 
            std::cout<<"Invalid choice"<<std::endl;
    }

    return 0;
}

