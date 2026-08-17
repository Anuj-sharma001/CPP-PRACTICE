#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<limits>
#include<nlohmann/json.hpp>
#include<vector>
using json = nlohmann::json;

namespace Fileio {
    int fileInput(const std::string &filename){
        std::ifstream file(filename);
        if(!file.is_open()){
            std::cerr<<"Error in opening a file"<<std::endl;
            return 1;
        }
        std::string readfile;
        while(std::getline(file,readfile)){
            std::cout<<readfile<<std::endl;
        }
        return 0;
    }

    int fileOutput(const std::string &filename){
        std::ofstream file(filename);
        if(!file.is_open()){
            std::cerr<<"Error in opening a file"<<std::endl;
            return 1;
        }
        return 0;
    }

    void addPerson(json &data){
        std::string name;
        int age;

        std::cout<<"Enter name: "<<std::endl;
        std::getline(std::cin,name);

        std::cout<<"Enter age: "<<std::endl;
        std::cin>>age;

        bool isStudent;
        std::cout<<"Is the person a student? (1 for yes, 0 for no): "<<std::endl;
        std::cin>>isStudent;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        std::vector<std::string> skills;
        std::cout<<"Enter skills (type 'done' to finish): "<<std::endl;
        std::string skill;
        while(std::getline(std::cin, skill) && skill != "done"){
            skills.push_back(skill);
        }

        std::string city;
        std::cout<<"Enter city: "<<std::endl;
        std::getline(std::cin, city);

        std::string zip;
        std::cout<<"Enter zip code: "<<std::endl;
        std::getline(std::cin, zip);

        std::string project;
        std::cout<<"Enter project name: "<<std::endl;
        std::getline(std::cin, project);
        if(project.empty()){
            project = "Null";
        }

        
        data["name"] = name;
        data["age"] = age;
        data["isStudent"] = isStudent;
        data["skills"] = skills;
        data["address"]["city"] = city;
        data["address"]["zip"] = zip;
        data["project"] = project;
    }

}

namespace DataPharsing{
    
}