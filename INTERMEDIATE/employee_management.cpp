#include<iostream>
#include<string>
#include<vector>
#include<iomanip>


struct EmployeeStats{
    double averageScore;
    double highestScore;
    double lowestScore;
    int totalEvaluations;
};

EmployeeStats calculateEmployeeStat(const std::vector<double> &scores){
    if(scores.empty()){
        return {0.0,0.0,0.0};
    }

    double sum=0.0;
    double highestScore = scores[0];
    double lowestScore = scores[0];
    for(double score : scores){
        sum += score;
        if(highestScore>score)
            highestScore=score;
        if(lowestScore>score)
            lowestScore=score;
    };

    return {
        sum/scores.size(),
        highestScore,
        lowestScore,
        static_cast<int>(scores.size())
    };
}


bool processEmployeeData(int& id ,std::string name , double& salary){
    if(name.empty() || salary<0|| id<=0){
        std::cout<<"Please Correct the details of the employee.";
    }

    if(!(name.empty())){
        name[0] = std::toupper(name[0]);
    }

    if(salary<30000){
        salary = 30000;
    }

}


int main(){
    std::vector<double> employeeSores = {87.6,78.6,76.4,23.4,89.0,54.9,35.9};
    EmployeeStats stats =  calculateEmployeeStat(employeeSores);
    std::cout<<std::setfill('=')<<std::setw(50)<<" "<<std::endl;
    std::cout<<std::setfill(' ')<<std::setw(28)<<"EMPLOYEE REPORT"<<std::endl;
    std::cout<<std::setfill('=')<<std::setw(50)<<" "<<std::endl;

    std::cout<<"Average Score : "<<stats.averageScore<<std::endl;
    std::cout<<"Highest Score : "<<stats.highestScore<<std::endl;
    std::cout<<"Lowest Score: "<<stats.lowestScore<<std::endl;
    std::cout<<"Total Evaluations: "<<stats.totalEvaluations<<std::endl;

    std::string name = "Jarvis";
    double salary = 50000;
    int id = 1;

    processEmployeeData(id,name,salary);


}
