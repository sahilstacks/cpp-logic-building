#include<iostream>

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

int main(){
    swap_with_3rd_variable();
    return 0;
}