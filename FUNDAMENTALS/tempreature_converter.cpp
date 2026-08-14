#include<iostream>
const double FREZZING_POINT_C = 0.0;
const double FREZZING_POINT_F = 32.0;
const double ABSOLUTE_ZERO_C = -273.15;
const double F_TO_C_FACTOR = 5.0/9.0;
const double C_TO_F_FACTOR = 9.0/5.0;
double celciusToFahenheit(double celcius){
    return (celcius * C_TO_F_FACTOR) + FREZZING_POINT_F;
};
double fahrenhietToCelcius(double fahrenheit){
    return (fahrenheit - FREZZING_POINT_F) * F_TO_C_FACTOR;
};
double celsiusToKelvin(double celsius){
    return celsius - ABSOLUTE_ZERO_C;
};
double kelvinToCelsius(double kelvin){
    return kelvin + ABSOLUTE_ZERO_C;
};
double fahrenheitToKelvin(double fahrenheit){
    return (fahrenheit - FREZZING_POINT_F) * F_TO_C_FACTOR - ABSOLUTE_ZERO_C;
};
double kelvinToFahrenheit(double kelvin){
    return (kelvin + ABSOLUTE_ZERO_C) * C_TO_F_FACTOR + FREZZING_POINT_F;
};
int main(){
    int choice;
    double result,inputTemp;
    bool isrunning = true;
    while(isrunning){
        std::cout<<"Tempreature Converter"<<std::endl;
        std::cout<<"1. Celcius to Fahrenheit"<<std::endl;
        std::cout<<"2. Fahrenheit to Celcius"<<std::endl;
        std::cout<<"3. Celcius to Kelvin"<<std::endl;
        std::cout<<"4. Kelvin to Celcius"<<std::endl;
        std::cout<<"5. Fahrenheit to Kelvin"<<std::endl;
        std::cout<<"6. Kelvin to Fahrenheit"<<std::endl;
        std::cout<<"7. Exit"<<std::endl;
        std::cout<<"Enter your choice: ";
        std::cin>>choice;
        switch(choice){
            case 1:
                std::cout<<"Enter your tempreature in celcius: ";
                std::cin>>inputTemp;
                if(inputTemp < ABSOLUTE_ZERO_C){
                    std::cout<<"Error: Temperature below absolute zero!"<<std::endl;
                    break;
                }
                result = celciusToFahenheit(inputTemp);
                std::cout<<"Tempreature in Fahrenheit: "<<result<<std::endl;
                break;
            case 2:
                std::cout<<"Enter your tempreature in fahrenheit: ";
                std::cin>>inputTemp;
                if(inputTemp < FREZZING_POINT_F){
                    std::cout<<"Error: Temperature below freezing point!"<<std::endl;
                    break;
                }
                result = fahrenhietToCelcius(inputTemp);
                std::cout<<"Tempreature in celcius: "<<result<<std::endl;
                break;
            case 3:
                std::cout<<"Enter your tempreature in celcius: ";
                std::cin>>inputTemp;
                if(inputTemp < ABSOLUTE_ZERO_C){
                    std::cout<<"Error: Temperature below absolute zero!"<<std::endl;
                    break;
                }
                result = celsiusToKelvin(inputTemp);
                std::cout<<"Tempreature in kelvin: "<<result<<std::endl;
                break;
            case 4:
                std::cout<<"Enter your tempreature in kelvin: ";
                std::cin>>inputTemp;
                if(inputTemp < ABSOLUTE_ZERO_C){
                    std::cout<<"Error: Temperature below absolute zero!"<<std::endl;
                    break;
                }
                result = kelvinToCelsius(inputTemp);
                std::cout<<"Tempreature in celsius: "<<result<<std::endl;
                break;
            case 5:
                std::cout<<"Enter your tempreature in fahrenhiet: ";
                std::cin>>inputTemp;
                if(inputTemp < FREZZING_POINT_F){
                    std::cout<<"Error: Temperature below freezing point!"<<std::endl;
                    break;
                }
                result = fahrenheitToKelvin(inputTemp);
                std::cout<<"Tempreature in kelvin: "<<result<<std::endl;
                break;
            case 6:
                std::cout<<"Enter your tempreature in kelvin: ";
                std::cin>>inputTemp;
                if(inputTemp < ABSOLUTE_ZERO_C){
                    std::cout<<"Error: Temperature below absolute zero!"<<std::endl;
                    break;
                }
                result = kelvinToFahrenheit(inputTemp);
                std::cout<<"Tempreature in fahrenheit: "<<result<<std::endl;
                break;
            case 7:
                std::cout<<"You exit the program"<<std::endl;
                isrunning = false;
                break;
        }

                      
    }
}