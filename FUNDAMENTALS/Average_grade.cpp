#include<iostream>
using namespace std;
#include <limits>


int main(){
    int score1,score2,score3;

    while (true) {
        cout<<"Enter the score of the first subject: "<<endl;
        if(cin>>score1 && score1<100 && score1>0){
            break;
        }
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"Please enter a valid score."<<endl;
    }
    while (true) {
        cout<<"Enter the score of the Second subject: "<<endl;
        if(cin>>score2 && score2<100 && score2>0){
            break;
        }
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"Please enter a valid score."<<endl;
    }
    while (true) {
        cout<<"Enter the score of the Third subject: "<<endl;
        if(cin>>score3 && score3<100 && score3>0){
            break;
        }
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"Please enter a valid score."<<endl;
    }
    int average = (score1 + score2 + score3)/3;
    cout<<"Your average is: "<<average<<endl;
    if(average>=90)
        cout<<"Your Grade is O"<<endl;
    else if (average>=80 && average<90)
        cout<<"Your Grade is A+"<<endl;
    else if (average>=70 && average<80)
        cout<<"Your Grade is A"<<endl;
    else if (average>=60 && average<70)
        cout<<"Your Grade is B+"<<endl;
    else if (average>=50 && average<60)
        cout<<"Your Grade is B"<<endl;
    else if (average>=40 && average<50)
        cout<<"Your Grade is C"<<endl;
    else if (average>=40 && average<50)
        cout<<"Your Grade is D"<<endl;
    else
        cout<<"You are Fail"<<endl;
}


