#include<iostream>
#include<string>

class character{
    private:
        std::string name;
        int health;
        int strength;

    public:
        character(std::string characterName, int characterHealth, int characterStrength)
        : name(characterName) , health(characterHealth) , strength(characterStrength){};

        void damage(int damage){
            std::cout<<"Knight got the damage of: "<<damage<<std::endl;
            health -= damage;
            std::cout<<"Player Health: "<<health<<std::endl;
            if(health <0)
                std::cout<<"Player is Dead...."<<std::endl;
        };

        void parry(){
            std::cout<<"Attack sucessfully parried , Bonus: Gain in health points."<<std::endl;
            health += 20;
        };

        void attackEnemy(int attack){
            std::cout<<"Player attack with strenth of: "<<strength<<std::endl;
            if(health <0)
                std::cout<<"Can't attack enemy player is dead"<<std::endl;
        };

        void display(){
            std::cout<<"Name of player: "<<name<<std::endl;
            std::cout<<"Health points: "<<health<<std::endl;
            std::cout<<"Your strength: "<<strength<<std::endl;
        };

};


int main(){
    character c1("Tarnished",100,10);
    c1.display();
    c1.damage(20);
    c1.attackEnemy(30);
    c1.parry();
    c1.display();
    c1.damage(100);
    
}