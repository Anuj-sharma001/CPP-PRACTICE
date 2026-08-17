#include<iostream>
#include<string>
class Book{

private:
    std::string title;
    std::string author;
    int pages;
    bool isAvailable;

public:
    Book(std::string booktitle , std::string bookauthor , int bookpages)
        : title(booktitle), author(bookauthor) , pages(bookpages), isAvailable(true){
    }

    std::string gettitle() const {return title;}
    std::string getauthor() const {return author;}
    int getpages() const {return pages;}
    bool check() const {return isAvailable;}

    void setpages(int newpages){
        if(newpages>0)
            pages = newpages;
    }

    void setAvailability(bool status){
        isAvailable = status;
    }

    void displayInfo(){
        std::cout<<"Title: "<<title<<std::endl;
        std::cout<<"Author: "<<author<<std::endl;
        std::cout<<"Pages: "<<pages<<std::endl;
        std::cout<<"Availability: "<<(isAvailable ? "Yes" : "No")<<std::endl;
    }

};
    int main(){
        Book book1("Atomic Habits","James clear",329);
        Book book2("XYZ","ABC",1000);
        book1.displayInfo();
        book2.displayInfo();
        std::cout<<"Checking out "<<book1.gettitle()<<std::endl;
        book1.setAvailability(false);
        book1.displayInfo();

}