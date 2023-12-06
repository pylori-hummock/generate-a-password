// main.cpp
#include "password_generator.h"

int main() {
    PasswordGenerator generator;
    std::string password = generator.generatePassword(12);
    
    std::cout << "Generated Password: " << password << std::endl;
    
    return 0;
}
