#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    while(true){
    cout<<"Enter your string: "<<endl;
    getline(cin,str);
    if(str.empty())
        cout<<"The string is empty"<<endl;
    else
        break;
    }
    int vowel = 0;
    int consonent = 0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' )
            vowel++;
        else if(str[i]==' ')
            continue;
        else
            consonent++;
    }

    cout<<"The vowels are: "<<vowel<<endl;
    cout<<"The consonents are: "<<consonent<<endl;
    string rev;
    bool isrun = true;
    int i=str.size()-1;
    while(isrun){
        rev.push_back(str[i]);
        if(i==0)
            isrun=false;
        i--;
    }
    cout<<"Reverse string is: "<<rev<<endl;

    if(str == rev)
        cout<<"Yes the string is the palindrome";
    else
        cout<<"No the string is not the palindrome";

    return 0;

}