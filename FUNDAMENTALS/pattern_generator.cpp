#include<iostream>
#include<string>
#include<limits>
using namespace std;

void generateRightTriangle(int height){
    for(int i=0;i<height;i++){
        for(int j=0;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    
}

void generatePyramid(int height){
    int row = 0;
    while(row<height){
        int space = 0;
        while(space<height-row-1){
            cout<<" ";
            space++;
        }
        int star = 0;
        while(star<=2*row){
            cout<<"*";
            star++;
        }
        cout<<endl;
        row++;
    }
}

void generateDiamond(int height){
    int row = 0;
    do{
        int space = 0;
        do {
            cout<<" ";
            space++;
        } while(space<height-row);
        int star = 0;
        do{
            cout<<"*";
            star++;
        } while(star<=2*row);
        cout<<endl;
        row++;
    } while(row<height);

    row = height - 2;
    do{
        int space = 0;
        do{
            cout<<" ";
            space++;
        } while(space<height-row);
        int star = 0;
        do{
            cout<<"*";
            star++;
        } while(star<=2*row);
        cout<<endl;
        row--;
    } while(row>=0);
}

void generateNumberPattern(int height){
        for(int i=0;i<height;i++){
            for(int j=0;j<height-i-1;j++){
                cout<<" ";
            }
            for(int k=1;k<i+1;k++){
                cout<<k;
            }
            for(int l=i+1;l>0;l--){
                cout<<l;
            }
            cout<<endl;
    }
}

int main(){
    int choice, height;
    bool program_running = true;
    cout<<"Choose the type of pattern you want to generate: "<<endl;
    cout<<"1. Right Triangle"<<endl;
    cout<<"2. Pyramid"<<endl;
    cout<<"3. Diamond"<<endl;
    cout<<"4. Number Pattern"<<endl;
    cout<<"5. Exit"<<endl;
    while(program_running){
        cin>>choice;

        cout<<"Enter height: (Between 1 - 20)"<<endl;
        cin>>height;
        if(height<1 || height>20){
            cout<<"Please Enter a valid height"<<endl;
            continue;
        }

        switch(choice){
            case 1:
                generateRightTriangle(height);
                break;
            case 2:
                generatePyramid(height);
                break;
            case 3:
                generateDiamond(height);
                break;
            case 4:
                generateNumberPattern(height);
                break;
            default:
                cout<<"This choice doesn't exists"<<endl;
                break;
        }

    }
}