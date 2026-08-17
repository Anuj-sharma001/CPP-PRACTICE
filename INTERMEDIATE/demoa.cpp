#include<iostream>
#include<string>
class student{
    int roll_no;
    std::string name;
    std::string branch;

    public:
        void getdata(int r, std::string n, std::string b){
            roll_no = r;
            name = n;
            branch = b;
        }   
        void setdata(){
            std::cout<<"Roll NO: "<<roll_no<<std::endl;
            std::cout<<"Name: "<<name<<std::endl;
            std::cout<<"Branch: "<<branch<<std::endl;
        }
    };

int main(){
    student s1;
    s1.getdata(1,"Anuj","CSE");
    s1.setdata();
}

