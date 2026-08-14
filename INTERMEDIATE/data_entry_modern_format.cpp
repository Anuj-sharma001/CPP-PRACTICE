#include<iostream>
#include<string>
#include<regex>
#include<iomanip>

bool validate_email(const std::string &email){
    std::regex email_pattern(R"([a-zA-Z0-9+-%._]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,})");
    return std::regex_match(email,email_pattern);
}

bool validate_phone(const std::string &phone_number){
    std::regex phone_number_pattern(R"(((\(\d{3}\)\s?|\d{3}[-.]?)\d{3}[-.]?\d{4}))");
    return std::regex_match(phone_number,phone_number_pattern);
}

bool validate_name(const std::string &name){
    std::regex name_pattern(R"([a-zA-Z\s]{2,})");
    return std::regex_match(name,name_pattern);
}


int main(){
    std::string name,email,phone_number;
    
    do{
        std::cout<<"Enter your Name: "<<std::endl;
        getline(std::cin,name);
        if(!validate_name(name)){
            std::cerr<<"Error: Name must contain only letters and spaces (minimum 2 characters)." << std::endl;
        }
    }
    while(!validate_name(name));

    do{
        std::cout<<"Enter your Email: "<<std::endl;
        getline(std::cin,email);
        if(!validate_email(email)){
            std::cerr << "Error: Invalid email format. Use: user@domain.com" << std::endl;
        }
    }
    while(!validate_email(email));

    do{
        std::cout<<"Enter your Phone Number: "<<std::endl;
        getline(std::cin,phone_number);
        if(!validate_phone(phone_number)){
            std::cerr << "Error: Invalid phone format. Use: 123-456-7890 or (123) 456-7890" << std::endl;
        }
    }
    while(!validate_phone(phone_number));

    std::cout<<"REGISTRATION SUCESSFULL"<<std::endl;
    std::cout<<std::string(50,'-');
    std::cout<<std::setfill(' ')<<"Name"<<
               std::setw(20)<<"Email"<<
               std::setw(20)<<"Phone Number"<<std::endl;

    std::cout<<std::setfill(' ')<<name<<
               std::setw(20)<<email<<
               std::setw(20)<<phone_number<<std::endl;

    return 0;
}