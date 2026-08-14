#include<iostream>
#include<array>
#include "matrix_operations.h"

void Addition_matrix(int addition_matrix[3][3], int matrix[3][3], int matrix_2[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            addition_matrix[i][j] = matrix[i][j] + matrix_2[i][j];
        }
    }
    std::cout<<"Addition matrix"<<std::endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            std::cout<<addition_matrix[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
}
void Multiplication_matrix(int multiplication_matrix[3][3], int matrix[3][3], int matrix_2[3][3]){
    if(sizeof(matrix)/sizeof(matrix[0]) != sizeof(matrix_2)/sizeof(matrix_2[0])){
        std::cout<<"Incompatible matrix dimensions for multiplication"<<std::endl;
        return;
    }
    else{
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                multiplication_matrix[i][j]=0;
                for(int k=0;k<3;k++){
                    multiplication_matrix[i][j] += matrix[i][k] * matrix_2[k][j];
                }
            }
        }
    }

    std::cout<<"Multiplication matrix"<<std::endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            std::cout<<multiplication_matrix[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
}
void Transpose_matrix(int transpose_matrix[3][3], int matrix[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            transpose_matrix[i][j] = matrix[j][i];
        }
    }
    std::cout<<"Transpose of matrix"<<std::endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            std::cout<<transpose_matrix[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
}
template<size_t rows ,size_t col>
void Determinent_matrix(int &determinent , int (&matrix)[rows][col]){
    if(rows != col)
        std::cout<<"Determinent is not possible due to the non equal rows and columns"<<std::endl;
    else{
        determinent = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1])
                    - matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0])
                    + matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);

    std::cout<<"The determinant of the matrix is: "<<determinent<<std::endl;
    }
}
int main(){
    int matrix[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int matrix_2[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int addition_matrix[3][3];
    int multiplication_matrix[3][3];
    int transpose_matrix[3][3];
    int determinent = 0;

    Addition_matrix(addition_matrix, matrix, matrix_2);
    Multiplication_matrix(multiplication_matrix,matrix,matrix_2);
    Transpose_matrix(transpose_matrix,matrix);
    Determinent_matrix(determinent,matrix);


}