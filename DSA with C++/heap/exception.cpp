#include<iostream>
#include <stdexcept>
#include <exception>

int main(int argc, char const *argv[])
{   
    bool correct = false;
    int age;

        while(true) {
            std::cout << "what is your age? " << std::endl;
            try {
                
                std::cin >> age;
                
                if(std::cin.fail()) {
                    std::cin.clear();
                    std::cin.ignore(1000,'\n');
                    throw std::runtime_error("Invalid input");
                }
                else {
                    break;
                }
            }
            catch (const std::exception& e) {
                std::cout<< "Exception: " << e.what() << " try again" <<  std::endl;
                
            }
        }

        std::cout << "Awesome your " << age << " years old" << std::endl;
   



    return 0;
}
