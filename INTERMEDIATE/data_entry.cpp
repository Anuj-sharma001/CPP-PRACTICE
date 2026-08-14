#include<iostream>
#include<string>
#include<limits>
#include<vector>
#include<iomanip>


int main(){
    struct Product{
        std::string name;
        double price;
        int quantity;
        double total() const {
            return price * quantity;
        }
    };

    std::vector<Product> product = {
        {"Laptop", 999.99, 2},
        {"Mouse", 29.50, 5},
        {"Keyboard", 89.99, 3}
    };

    std::cout<<std::string(50,'=')<<std::endl;
    std::cout<<std::setw(30)<<"INVOICE SUMMARY"<<std::endl;
    std::cout<<std::string(50,'=')<<std::endl;

    std::cout<<std::left<<"Name"<<
               std::right<<std::setw(10)<<"Price"<<
               std::right<<std::setw(15)<<"Quantity"<<
               std::right<<std::setw(10)<<"Total"<<std::endl;
             

    std::cout<<std::string(50,'-')<<std::endl;

    double grandTotal = 0.0;
    for(const auto& p: product){
        std::cout<<std::left<<p.name<<
                   std::setfill(' ')<<std::right<<std::setw(10)<<std::fixed<<std::setprecision(2)<<p.price<<
                   std::right<<std::setw(15)<<p.quantity<<
                   std::right<<std::setw(10)<<std::fixed<<std::setprecision(2)<<p.total()<<std::endl;
        grandTotal += p.total();
    }
    std::cout<<std::string(50,'-')<<std::endl;
    std::cout<<std::right<<std::setw(35)<<"Grand Total: "<<std::fixed<<std::setprecision(2)<<grandTotal<<std::endl;
    return 0;
}