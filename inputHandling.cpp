#include <iostream>

int main(){
    // int age;
    // std::cout << "How old are you?" << std::endl;
    // std::cin >> age;
    // std::cout << "You are " << age << " years old." << std::endl;

    int date, month, year;
    std::cout << "Enter your DOB (dd mm yyyy): " << std::endl;
    std::cin >> date >> month >> year;
    std::cout << "You were born in " << date << "/" << month << "/" << year << std::endl;
}