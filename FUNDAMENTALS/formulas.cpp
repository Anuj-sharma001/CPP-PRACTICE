#include<iostream>
#include<limits>
using namespace std;

int main(){
    int n;
    while(true){
        cout<<"Enter your range of numbers: "<<endl;
        if((cin>>n)){
            break;
        }
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"Please enter a valid value"<<endl;
    }

    int arr[n];
    for(int i =0;i<n;i++){
        cout<<"Enter your "<<i+1<<" number"<<endl;
        cin>>arr[i];
    }

    int maxNum = arr[0];
    for(int i =0;i<n;i++){
        if(arr[i]>maxNum)
            maxNum = arr[i];
    } 
    cout<<"The maximun number is: "<<maxNum<<endl;
    
    int minNum = arr[0];
    for(int i =0;i<n;i++){
        if(arr[i]<minNum)
        minNum = arr[i];
    }
    cout<<"The minimum number is: "<<minNum<<endl;

    int sum=0;
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
    }
    cout<<"The sum of the numbers is: "<<sum<<endl;
    
    int average = sum/n;
    cout<<"The average of the numbers is: "<<average<<endl;

    int odd=0,even=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0)
            even++;
        else
            odd++;
    }

    cout<<"The even numbers are: "<<even<<endl;
    cout<<"The odd numbers are: "<<odd<<endl;

    

}
