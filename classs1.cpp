#include <iostream>

class Game{
        std::string name;
        public:
        int health;

        void getHealth(){
            std::cout << name <<" is having health "<<health<<std::endl;
        }
        void setHealth(int h){
            health=h;
    }
    };




int main()
{
    Game rohit;
    rohit.setHealth(100); 
    rohit.health=500;
    rohit.getHealth(); 
    return 0;
}



