#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>

int main(){
    std::string message = "This is a Holy Place. A place that holds the wish of a death.";
    std::cout<<"Message: "<<message<<std::endl;

    //FOR FINDING THE FIRST WORD
    size_t first_space = message.find(' ');
    if(first_space != std::string::npos){
        std::string first_word = message.substr(0,first_space);
        std::cout<<"Fist word in the message is: "<<first_word<<std::endl;
    }


    //FOR FINDING THE LAST WORD
    size_t last_space = message.rfind(' ');
    if(last_space != std::string::npos){
        std::string last_word = message.substr(last_space);
        std::cout<<"Last word in the message is: "<<message<<std::endl;
    }

    //FOR COUNTING THE PARTICULAR CHARACTER
    int count=0;
    for(size_t i=0;i<message.size();i++){
        if(message[i]== 'a' || message[i] == 'A')
            count++;
    }
    std::cout<<"The number of times the letter 'a' occurs is: "<<count<<std::endl;
    

    //FOR REPLACING THE WORD FROM THE STRING
    size_t replace_pos = message.find("Place");
    if(replace_pos != std::string::npos){
        std::string replace_word = message.replace(replace_pos,5,"Palace");
        std::cout<<"The new message is: "<<message<<std::endl;
    }

    //FOR ERASING THE FULLSTOP FROM THE STRING
    for(size_t i=0;i<message.size();i++){
        size_t rem_message = message.find('.');
        if(rem_message != std::string::npos){
            std::string new_message = message.erase(rem_message,1);
        }
    }
    std::cout<<message<<std::endl;
    
    //FOR CONVERTING UPPERCASE
    for(char &c : message){
        c = std::toupper(c);
    }
    std::cout<<message<<std::endl;

    //COUNTING THE WORDS IN THE STRING
    int word_count = std::count(message.begin(),message.end(),' ') + 1;
    std::cout<<"The number of words are: "<<word_count<<std::endl;

    //COUNTING THE LONGEST WORD IN THE STRING;
   std::string longest_word;
    size_t start = 0;
    size_t pos = 0;
    while ((pos = message.find(' ', start)) != std::string::npos) {
        std::string word = message.substr(start, pos - start);
        if (word.length() > longest_word.length()) {
            longest_word = word;
        }
        start = pos + 1;
    }

    return 0;
}