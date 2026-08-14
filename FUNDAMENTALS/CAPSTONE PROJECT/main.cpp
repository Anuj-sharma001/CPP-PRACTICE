#include<iostream>
#include<limits>
#include<string>
#include "calculator.h"
#include "tempreature.h"
#include "string_dissection.h"

void program_selection(){
    std::cout<<"Select the program you want to run: "<<std::endl;
    std::cout<<"1. -------- CALCULATOR --------"<<std::endl;
    std::cout<<"2. -------- TEMPERATURE CONVERTER --------"<<std::endl;
    std::cout<<"3. -------- STRING DISSECTION --------"<<std::endl;
    std::cout<<"4. Exit"<<std::endl;
}

int main(){
    int choice;
    while(true){
        program_selection();
        std::cout<<"Enter your choice: ";
        if((std::cin>>choice) && choice<5 && choice>0){
            if(choice == 4){
                std::cout<<"You Exit the program."<<std::endl;
                break;
            }
        }
        else{
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::cout<<"Your choice is wrong please choose the number from 1-4."<<std::endl;
        }
        if(choice == 1){
            while(true){
                std::cout<<"Choose the type of operation you want to perform: "<<std::endl;
                std::cout<<"1. Addition"<<std::endl;
                std::cout<<"2. Subtraction"<<std::endl;
                std::cout<<"3. Division"<<std::endl;
                std::cout<<"4. Multiplication"<<std::endl;
                std::cout<<"5. Square root"<<std::endl;
                std::cout<<"6. Exponential"<<std::endl;
                std::cout<<"7. Modulus"<<std::endl;
                std::cout<<"8. Cuberoot"<<std::endl;
                std::cout<<"9. Exit"<<std::endl;
                int operation_choice;
                std::cout<<"Enter your choice: ";
                if((std::cin>>operation_choice) && operation_choice<10 && operation_choice>0){
                    if(operation_choice==1){
                        double num1,num2;
                        std::cout<<"Enter your First number: "<<std::endl;
                        input_validation(num1);
                        std::cout<<"Enter your Second number: "<<std::endl;
                        input_validation(num2);
                        std::cout<<"Answer is: "<<addition(num1,num2)<<std::endl;
                    }
                    else if(operation_choice == 2){
                        double num1,num2;
                        std::cout<<"Enter your First number: "<<std::endl;
                        input_validation(num1);
                        std::cout<<"Enter your Second number: "<<std::endl;
                        input_validation(num2);
                        std::cout<<"Answer is: "<<subtraction(num1,num2)<<std::endl;
                    }
                    else if(operation_choice == 3){
                        double num1,num2;
                        std::cout<<"Enter your First number: "<<std::endl;
                        input_validation(num1);
                        std::cout<<"Enter your Second number: "<<std::endl;
                        input_validation(num2);
                        std::cout<<"Answer is: "<<division(num1,num2)<<std::endl;
                    }
                    else if(operation_choice == 4){
                        double num1,num2;
                        std::cout<<"Enter your First number: "<<std::endl;
                        input_validation(num1);
                        std::cout<<"Enter your Second number: "<<std::endl;
                        input_validation(num2);
                        std::cout<<"Answer is: "<<multiplication(num1,num2)<<std::endl;
                    }
                    else if(operation_choice == 5){
                        double num1;
                        std::cout<<"Enter your First number: "<<std::endl;
                        input_validation(num1);
                        std::cout<<"Answer is: "<<square_root(num1)<<std::endl;
                    }
                    else if(operation_choice == 6){
                        double num1,num2;
                        std::cout<<"Enter your Base: "<<std::endl;
                        input_validation(num1);
                        std::cout<<"Enter your Power: "<<std::endl;
                        input_validation(num2);
                        std::cout<<"Answer is: "<<exponential(num1,num2)<<std::endl;
                    }
                    else if(operation_choice==7){
                        double num1,num2;
                        std::cout<<"Enter your First number: "<<std::endl;
                        input_validation(num1);
                        std::cout<<"Enter your Second number: "<<std::endl;
                        input_validation(num2);
                        std::cout<<"Answer is: "<<modulus(num1,num2)<<std::endl;
                    }
                    else if(operation_choice == 8){
                        double num1;
                        std::cout<<"Enter your First number: "<<std::endl;
                        input_validation(num1);
                        std::cout<<"Answer is: "<<cube(num1)<<std::endl;
                    }
                    else if(operation_choice==9){
                        std::cout<<"You Exit the calculator."<<std::endl;
                        break;
                    }
                }
                else{
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                    std::cout<<"Invalid input. Please enter a valid number: "<<std::endl;
                }
            }
        }
        else if(choice==2){
            while(true){
                std::cout<<"1. Celcius to Fahrenheit"<<std::endl;
                std::cout<<"2. Fahrenheit to Celcius"<<std::endl;
                std::cout<<"3. Celcius to Kelvin"<<std::endl;
                std::cout<<"4. Kelvin to Celcius"<<std::endl;
                std::cout<<"5. Fahrenheit to Kelvin"<<std::endl;
                std::cout<<"6. Kelvin to Fahrenheit"<<std::endl;
                std::cout<<"7. Exit"<<std::endl;
                int tempreature_choice;
                std::cout<<"Enter your choice: ";
                if((std::cin>>tempreature_choice) && tempreature_choice>0 && tempreature_choice<8){
                    if(tempreature_choice==1){
                        double celcius;
                        std::cout<<"Enter the temperature in Celcius: "<<std::endl;
                        input_validation(celcius);
                        std::cout<<"Temperature in Fahrenheit is: "<<celciusToFahenheit(celcius)<<std::endl;
                    }
                    else if(tempreature_choice==2){
                        double fahrenhiet;
                        std::cout<<"Enter the temperature in fahrenhiet: "<<std::endl;
                        input_validation(fahrenhiet);
                        std::cout<<"Temperature in celcius is: "<<fahrenhietToCelcius(fahrenhiet)<<std::endl;
                    }
                    else if(tempreature_choice==3){
                        double celcius;
                        std::cout<<"Enter the temperature in celcius: "<<std::endl;
                        input_validation(celcius);
                        std::cout<<"Temperature in kelvin is: "<<celsiusToKelvin(celcius)<<std::endl;
                    }
                    else if(tempreature_choice==4){
                        double kelvin;
                        std::cout<<"Enter the temperature in kelvin: "<<std::endl;
                        input_validation(kelvin);
                        std::cout<<"Temperature in celcius is: "<<kelvinToCelsius(kelvin)<<std::endl;
                    }
                    else if(tempreature_choice==5){
                        double fahrenheit;
                        std::cout<<"Enter the temperature in fahrenheit: "<<std::endl;
                        input_validation(fahrenheit);
                        std::cout<<"Temperature in kelvin is: "<<fahrenheitToKelvin(fahrenheit)<<std::endl;
                    }
                    else if(tempreature_choice==6){
                        double kelvin;
                        std::cout<<"Enter the temperature in kelvin: "<<std::endl;
                        input_validation(kelvin);
                        std::cout<<"Temperature in fahrenhiet is: "<<kelvinToFahrenheit(kelvin)<<std::endl;
                    }
                    else if(tempreature_choice==7){
                        std::cout<<"You Exit the tempreature converter."<<std::endl;
                        break;
                    }   
                }
                else{
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                    std::cout<<"Invalid input. Please enter a valid number: "<<std::endl;
                }
            }
        }
        else if (choice==3){
            while(true){
            std::cout<<"Choose the string dissection program: "<<std::endl;
            std::cout<<"1. Word Count"<<std::endl;
            std::cout<<"2. Vowels Count"<<std::endl;
            std::cout<<"3. Consonents Count"<<std::endl;
            std::cout<<"4. Number Count"<<std::endl;
            std::cout<<"5. Exit"<<std::endl;
            int dissection_choice;
            std::cout<<"Enter your choice: ";
            if((std::cin>>dissection_choice) && dissection_choice>0 && dissection_choice<6){
                if(dissection_choice==1){
                    std::string str;
                    std::cout<<"Enter a string: ";
                    std::getline(std::cin >> std::ws, str);
                    std::cout<<"Word count: "<<word_count(str)<<std::endl;
                }
                else if(dissection_choice==2){
                    std::string str;
                    std::cout<<"Enter a string: ";
                    std::getline(std::cin >> std::ws, str);
                    std::cout<<"Vowels count: "<<vowels_count(str)<<std::endl;
                }
                else if(dissection_choice==3){
                    std::string str;
                    std::cout<<"Enter a string: ";
                    std::getline(std::cin >> std::ws, str);
                    std::cout<<"Consonents count: "<<consonents_count(str)<<std::endl;
                }
                else if(dissection_choice==4){
                    std::string str;
                    std::cout<<"Enter a string: ";
                    std::getline(std::cin >> std::ws, str);
                    std::cout<<"Number count: "<<number_count(str)<<std::endl;
                }
                else if(dissection_choice==5){
                    std::cout<<"You Exit the string dissection program."<<std::endl;
                    break;
                }
            }
            else{
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                std::cout<<"Invalid input. Please enter a valid number: "<<std::endl;
            }   

        }

    }


}
}