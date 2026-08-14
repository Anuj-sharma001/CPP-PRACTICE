#include<iostream>
#include<string>
#include<iomanip>
#include<limits>

int main(){
    std::string name;
    std::cout<<"Enter name: "<<std::endl;
    std::getline(std::cin,name);


    int customerID;
    std::cout<<"Enter Customer ID: "<<std::endl;
    while(!(std::cin>>customerID)){
        std::cout<<"Please Enter the Valid Entry."<<std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cout<<"Enter Customer ID: ";
    }
    double balance = 3424.522;
    std::cout<<"Enter Balance: "<<std::endl;
    while(!(std::cin>>balance)){
        std::cout<<"Please Enter the Valid Entry."<<std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cout<<"Enter Balance: ";
    }
    std::cout<<std::setfill('=')<<std::setw(40)<<" "<<std::endl;
    std::cout<<std::setfill(' ')<<std::setw(28)<<"CUSTOMER INFORMATION"<<std::endl;
    std::cout<<std::setfill('=')<<std::setw(40)<<" "<<std::endl;
    std::cout<<std::setfill(' ');
    std::cout<<std::setw(10)<<"Name";
    std::cout<<std::setw(17)<<"CustomerID";
    std::cout<<std::setw(15)<<"Balance"<<std::endl;
    std::cout<<std::setw(13)<<name;
    std::cout<<std::setw(10)<<customerID;
    std::cout<<std::setw(19)<<std::fixed<<std::setprecision(2)<<balance;

}