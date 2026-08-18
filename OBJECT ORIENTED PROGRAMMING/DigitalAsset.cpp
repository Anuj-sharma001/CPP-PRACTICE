#include<iostream>
#include<string>
#include<chrono>

class DigitalAsset{
    private:
        std::string filename;
        std::string fileType;
        double fileSizeMB;
        bool isActive;
        std::string creationDate;
        static int totalAssets;

        public: 
            DigitalAsset() : filename("Untitled"), fileType("default"), fileSizeMB(0.0), isActive(true){
                auto now = std::chrono::system_clock::now();
                auto time_t = std::chrono::system_clock::to_time_t(now);
                creationDate = std::ctime(& time_t);
                creationDate.pop_back();
                totalAssets++;
                std::cout<<"Default Asset Created: "<<filename<<" | Number of Assets: "<<totalAssets;
            };  
            
            DigitalAsset(const std::string name , const std::string type , bool active )
            : filename(name) , fileType(type) , isActive(active){
                auto now = std::chrono::system_clock::now();
                auto time_t = std::chrono::system_clock::to_time_t(now);
                creationDate = std::ctime(& time_t);
                creationDate.pop_back();
                totalAssets++;
                std::cout<<"Asset Created: "<<filename<<"of size "<<fileSizeMB<<" | Number of Assets: "<<totalAssets; 
            }


            DigitalAsset(const DigitalAsset &other)
            : filename(other.filename + "_copy"),
              fileType(other.fileType),
              fileSizeMB(other.fileSizeMB),
              isActive(other.isActive),
              creationDate(other.creationDate){
                totalAssets++;
                std::cout<<"Asset Copied: "<<filename<<" | Number of Assets: "<<totalAssets;
            };

            ~DigitalAsset(){
                totalAssets--;
                std::cout<<"Asset Destroyed: "<<filename<<" | Number of Assets: "<<totalAssets;
            }

            void displayInfo() const{
                std::cout<<"File name: "<<filename<<"\n"<<"["<<fileSizeMB<<"]"<<"of type: "<<fileType<<"\n"<<"created on: "
                <<creationDate<<"\n"<<"Active: "<<(isActive ? "Yes" : "Archived")<<"\n";
            }

            void Archive(){
                isActive = false;
                std::cout<<"Asset Archived: "<<filename<<"\n";
            }

            static int getTotalAssets(){
                return totalAssets;
            }
};

int DigitalAsset::totalAssets = 0;


int main(){
    std::cout<<"==========Digital Asset management=========="<<std::endl;
    std::cout<<"Initial Assets are: "<<DigitalAsset::getTotalAssets()<<std::endl;

    std::cout<<"==========Default Constructor==========="<<std::endl;
    DigitalAsset defaultAsset;
    defaultAsset.displayInfo();
    std::cout<<std::endl;

    std::cout<<"==========Paramertized Constructer==========="<<std::endl;
    std::cout << "2. Creating specific assets:" << std::endl;
    DigitalAsset logo("company_logo.png", "image", 2.5);
    DigitalAsset video("promo_video.mp4", "video", 150.0);
    logo.displayInfo();
    video.displayInfo();
    std::cout << std::endl;

    std::cout << "3. Testing copy constructor:" << std::endl;

    DigitalAsset copylogo = logo;
    copylogo.displayInfo();
    copylogo.Archive();
    std::cout<<"Logo copy going the out of the space."<<std::endl;
    
    std::cout << "\n4. Final status:" << std::endl;
    std::cout << "Total assets remaining: " << DigitalAsset::getTotalAssets() << std::endl;
    std::cout << "\n=== Program ending - remaining objects will be destroyed ===" << std::endl;
}