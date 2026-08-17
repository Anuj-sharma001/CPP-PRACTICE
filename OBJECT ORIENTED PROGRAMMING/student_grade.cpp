#include<iostream>
#include<string>
#include<vector>

class Student{
    private:
        std::string name;
        int id;
        std::vector<double> grades;

    public:
        Student(std::string studentName,int studentID):name(studentName), id(studentID){
            std::cout<<"Student whose name is: "<<name<<" Enrolled with ID: "<<id<<std::endl;
        };
        
        void addGrade(double grade){
            if(grade>=0.0 && grade<=100.0){
                grades.push_back(grade);
                std::cout<<"Grade "<<grade<<" added for the student "<<name<<std::endl;
            }
            else
                std::cout<<"Invalid grade, Grade must me greater than equal to 0 and less than equal to 100"<<std::endl;
        }

        double calculateAverage() const {
            if(grades.empty()){
                return 0.0;
            }
            else{
                double sum;
                for(double grade : grades){
                    sum +=  grade;
                }
                return sum/(grades.size());
            }
        }

        void display() const {
            std::cout<<"Name: "<<name<<std::endl;
            std::cout<<"ID: "<<id<<std::endl;
            std::cout<<"Number of grades: "<<grades.size()<<std::endl;
            std::cout<<"Average: "<<calculateAverage()<<std::endl;
        }
};

int main(){
    Student s1("Aman",23);
    s1.addGrade(12);
    s1.addGrade(99);
    s1.addGrade(45);
    s1.addGrade(100);
    s1.addGrade(0);
    s1.addGrade(101);
    s1.calculateAverage();
    s1.display();
    return 0;
}