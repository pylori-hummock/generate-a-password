// password_generator.cpp
#include "password_generator.h"
#include <cstdlib>
#include <ctime>

std::string PasswordGenerator::generatePassword(int length) {
    // Implement your password generation logic here
    srand(static_cast<unsigned>(time(nullptr)));

    const std::string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+";
    std::string password;

    for (int i = 0; i < length; ++i) {
        password += characters[rand() % characters.length()];
    }

    return password;
}
