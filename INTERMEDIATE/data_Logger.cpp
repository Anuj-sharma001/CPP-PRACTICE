#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>

int config_read(std::ifstream &inputFile){
    if(!inputFile.is_open()){
        std::cerr<<"Error in opening a file"<<std::endl;
        return 1;
    }
    std::string readFile;
    while(std::getline(inputFile,readFile)){
        std::cout<<readFile<<std::endl;

    }
}


int main(){
    std::ifstream inputFile("config.txt");
    config_read(inputFile);

    std::ifstream readFile("data.csv");
    if(!readFile){
        std::cerr<<"Error in opening a File";
        return 1;
    }

    std::string csv;
    while(std::getline(readFile,csv)){
        size_t firstComma = csv.find(',');
        size_t secondComma = csv.find(',',firstComma+1);
        size_t thirdComma = csv.find(',',secondComma+1);
        if(firstComma!= std::string::npos && secondComma != std::string::npos && thirdComma != std::string::npos){
            std::string name = csv.substr(0,firstComma);
            std:: string age = csv.substr(firstComma+1,secondComma-firstComma-1);
            std::string city = csv.substr(secondComma+1,thirdComma-secondComma-1);
            std::string address = csv.substr(thirdComma +1);

            std::cout<<"Name: "<<name<<std::endl;
            std::cout<<"Age: "<<age<<std::endl;
            std::cout<<"City: "<<city<<std::endl;
            std::cout<<"Address: "<<address<<std::endl;
            std::cout<<std::setfill(' ')<<" "<<std::endl;
        }
    }

    std::ofstream logFile("log.txt",std::ios::app);
    if(!logFile.is_open()){
        std::cerr<<"Error in opening log file"<<std::endl;
        return 1;
    }

    logFile<<"This is a log entry."<<std::endl;
    logFile.close();

}