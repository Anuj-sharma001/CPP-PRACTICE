#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>

int main() {
    std::ifstream inputFile("product.txt");
    if(!inputFile.is_open()){
        std::cerr << "Error opening file." << std::endl;
        return 1;
    }
    std::string product_name;
    int count  =0;
    while(std::getline(inputFile,product_name)){
        count++;
        std::cout<<count<<". "<<product_name<<std::endl;
    }
    inputFile.close();
    std::cout<<"Number of products are: "<<count<<std::endl;


    std::ofstream reportFile("report_file.txt");
    if(!reportFile){
        std::cerr<<"Error in opening a file"<<std::endl;
        return 1;
    }

    reportFile<<std::setfill('=')<<std::setw(40)<<" "<<std::endl;
    reportFile<<std::setfill(' ')<<std::setw(30)<<"DAILY REPORT ANALYSIS"<<std::endl;
    reportFile<<std::setw(40)<<std::setfill('=')<<" "<<std::endl;

    reportFile << std::left <<std::setfill(' ')<< std::setw(15) << "Product"
               << std::setw(10) << "Quantity"
               << std::setw(10) << "Price" << std::endl;

    reportFile << std::left <<std::setfill(' ')<<std::setw(15) << "Laptop"
               << std::setw(10) << "5"
               << "$" << std::fixed << std::setprecision(2) << 999.99 << std::endl;
    reportFile << std::left << std::setw(15) << "Mouse"
               << std::setw(10) << "12"
               << "$" << std::fixed << std::setprecision(2) << 29.99 << std::endl;

    reportFile.close();
    return 0;

}