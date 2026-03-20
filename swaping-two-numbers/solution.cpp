#include<iostream>

void swap_with_3rd_variable();
void swap_without_3rd_variable();

int main(){
    swap_without_3rd_variable();
    return 0;
}

void swap_with_3rd_variable(){ // Using 3rd variable(temp)
    int a,b,temp;

    std::cout << "Input 1st Number : ";
    std::cin >> a;

    std::cout << "Input 2nd Number : ";
    std::cin >> b;

    temp = a;
    a = b;
    b = temp;

    std::cout << "After Swapping, 1st Number is : " << a << std::endl;
    std::cout << "After Swapping, 2nd Number is : " << b;
}

void swap_without_3rd_variable(){
    int a, b;

    std::cout << "Input 1st Number : ";
    std::cin >> a;

    std::cout << "Input 2nd Number : ";
    std::cin >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    std::cout << "After Swapping, 1st Number is : " << a << std::endl;
    std::cout << "After Swapping, 2nd Number is : " << b;
}