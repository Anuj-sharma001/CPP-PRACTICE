#include<iostream>


int main(){
    int seating[5][5] ={
        {0,1,0,1,0},
        {1,0,1,0,1},
        {1,1,0,0,1},
        {0,0,1,1,0},
        {0,1,0,0,1}
    };
    std::cout<<"Avalibilty = 0 , Occupied = 1"<<std::endl;
    for(int i =0;i<5;i++){
        std::cout<<"Row:"<<i+1<<" { ";
        for(int j=0;j<5;j++){
            std::cout<<seating[i][j]<<" ";
        }
        std::cout<<"}"<<std::endl;
    }

    int availaible=0,occupied = 0;
    for(int i =0;i<5;i++){
        for(int j=0;j<5;j++){
            if(seating[i][j]==1)
                occupied++;
            else
                availaible++;
        }
    }

    std::cout<<"The available seats are: "<<availaible<<std::endl;
    std::cout<<"The occupied seats are: "<<occupied<<std::endl;


    auto getSeat = [&](int row , int col) -> int{
        if( row >=0 && row < 5 && col >= 0 && col <5)
            return seating[row][col];
        else{
            std::cout<<"Invalid seating position please put the correct position.";
            return -1;
        }
    };

    std::cout << "Valid access - Row 2, Col 3: " << getSeat(1, 2) << std::endl;
    std::cout << "Invalid access - Row 6, Col 3: " << getSeat(5, 2) << std::endl;
    std::cout << "Invalid access - Row 3, Col 8: " << getSeat(2, 7) << std::endl;

}