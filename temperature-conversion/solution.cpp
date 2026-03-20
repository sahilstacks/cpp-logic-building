#include <iostream>

double celsius_to_fahrenheit(double temp){
    return (1.8*temp + 32);
}

double fahrenheit_to_celsius(double temp){
    return (5*(temp - 32))/9;
}

int main(){
    double temp;
    int choice;

    calc:
    std::cout << "Temperature Conversion Menu \n";
    std::cout << "----------------------------------\n";
    std::cout << "1. Celsius to Fahrenheit \n";
    std::cout << "2. Fahrenheit to Celsius \n";
    std::cout << "3. EXIT\n";
    std::cout << "Enter the choice : ";
    std::cin >> choice;

    switch (choice){
    case 1:
        std::cout << "Enter the Temperature(Celsius) : ";
        std::cin >> temp;
        std::cout << "Temperature is : " << celsius_to_fahrenheit(temp) << "°F\n\n";
        goto calc;
    
    case 2:
        std::cout << "Enter the Temperature(Fahrenheit) : ";
        std::cin >> temp;
        std::cout << "Temperature is : " << fahrenheit_to_celsius(temp) << "°C\n\n";
        goto calc;
    case 3:
        std::cout << "Thanks for Using...!";
        return 0;
    default:
        std::cout << "Wrong Choice...!\n\n";
        goto calc;
    }
    return 0;
}