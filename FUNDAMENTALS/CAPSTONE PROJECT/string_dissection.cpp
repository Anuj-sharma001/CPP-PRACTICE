#include "string_dissection.h"
#include<iostream>
#include<string>
#include<limits>
#include<cctype>    

int word_count(const std::string& str){
    int count=0;
    for(int i=0;i<str.size();i++){
        if(!isspace(static_cast<unsigned char>(str[i])) && (i==0 || isspace(static_cast<unsigned char>(str[i-1])))){
            count++;
        }
    }
    return count;
}

int vowels_count(const std::string& str){
    int count=0;
    for(int i=0;i<str.size();i++){
        char ch = tolower(static_cast<unsigned char>(str[i]));
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            count++;
        }
    }
    return count;
}

int consonents_count(const std::string& str){
    int count=0;
    for(int i=0;i<str.size();i++){
        char ch = tolower(static_cast<unsigned char>(str[i]));
        if(ch>='a' && ch<= 'z' && !(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')){
            count++;
        }
    }
    return count;
}

int number_count(const std::string& str){
    int count = 0;
    for(int i=0;i<str.size();i++){
        char ch = tolower(static_cast<unsigned char>(str[i]));
        if(std::isdigit(static_cast<unsigned char>(str[i])))
            count++;
    }
    return count;
}
