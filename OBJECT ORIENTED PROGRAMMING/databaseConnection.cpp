#include<iostream>
#include<string>

class DatabaseConnection{
    private:
        std::string connectionString;
        std::string databaseName;
        bool isConnected;
        int connectionID;
        static int nextID;

        bool establishConnection(){
            std::cout<<"Establish connection to"<<databaseName<<"......"<<std::endl;
            isConnected = true;
            return true;
        }

        void closeConnection(){
            if(isConnected){
                std::cout<<"Closing Database Connection [ID: "<<connectionID<<" ]"<<std::endl;
                isConnected = false;
            }
        }

        public:
            DatabaseConnection()
            : connectionString("Localhost: 1234"), databaseName("default db"), isConnected(true) , 
              connectionID(1){
                nextID++;
                std::cout << "Creating default database connection [ID: " << connectionID << "]" << std::endl;
                establishConnection();
              }
            
            DatabaseConnection(std::string stringName , std::string dataname )
            : connectionString(stringName), databaseName(databaseName), isConnected(false), connectionID(++nextID){
                std::cout << "Creating database connection [ID: " << connectionID << "] to " << databaseName << std::endl;
                establishConnection();
            }

            DatabaseConnection(DatabaseConnection &other)
            : connectionString(other.connectionString), databaseName(other.databaseName), isConnected(false),
              connectionID(++nextID){
                std::cout << "Creating copied database connection [ID: " << connectionID<< "] based on connection "<< other.connectionID<<std::endl;
                establishConnection();
              }

            ~DatabaseConnection(){
                std::cout << "Destroying database connection [ID: " << connectionID << "]" << std::endl;
                closeConnection();
            }

            void executequery(const std::string &query){
                if(isConnected)
                    std::cout << "Executing on " << databaseName << ": " << query << std::endl;
                else
                    std::cout << "Cannot execute - connection not established" << std::endl;
            }

            bool getConnectionStatus() const{
                return isConnected;
            }

            int getID() const{
                return connectionID;
            }
};

int DatabaseConnection::nextID = 0;

int main(){
    std::cout << "=== Database Connection Manager ===" << std::endl;

    //default Constructor
    DatabaseConnection defaultConstructor;
    defaultConstructor.getConnectionStatus();
    defaultConstructor.getID();
    defaultConstructor.executequery("SELECT * FROM default_table");

    //parameterized Constructor
    DatabaseConnection paramConstructor("RemoteHost: 5678", "UserDB");
    paramConstructor.getConnectionStatus();

    //copy Constructor
    DatabaseConnection copyConstructor = paramConstructor;
    copyConstructor.getConnectionStatus();
    
    return 0;
}