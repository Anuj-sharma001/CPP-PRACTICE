#include<iostream>
#include<string>
#include<iomanip>
#include<limits>

int main(){
    std::string name;
    std::cout<<"Enter your name: "<<std::endl;
    getline(std::cin,name);
    
    std::string dob;
    std::cout<<"Enter your Date of Birth: "<<std::endl;
    getline(std::cin,dob);


    std::string email;
    std::cout<<"Enter your Email Address: "<<std::endl;
    getline(std::cin,email);

    int score;
    std::cout<<"Enter score: "<<std::endl;
    while(!(std::cin>>score) || score<0 || score>100){
        std::cout<<"Please Enter the Valid Entry."<<std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cout<<"Enter score: ";
    }

    std::cout<<std::setfill('=')<<std::setw(40)<<" "<<std::endl;
    std::cout<<std::setfill(' ')<<std::setw(28)<<"STUDENT INFORMATION"<<std::endl;
    std::cout<<std::setfill('=')<<std::setw(40)<<" "<<std::endl;

    std::cout<<std::setfill(' ')<<std::setw(10)<<"Name"
             <<std::setw(20)<<"Date of Birth"
             <<std::setw(25)<<"Email Address"
             <<std::setw(20)<<"Score"<<std::endl;

    std::cout<<std::setw(13)<<name
             <<std::setw(15)<<dob
             <<std::setw(35)<<email
             <<std::setw(10)<<score<<std::endl;
}