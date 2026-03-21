#include<iostream>

void print_array(){
    int arr[5] = {10, 25, 9, 16, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Printing array in original order:" << "\n";
    std::cout << "----------------------------------" << "\n";
    for(int i = 0; i < size; i++){
        std::cout << arr[i] << "    ";
    }
    std::cout << "\n";
}

void reverse_array(){
    int arr[5] = {10, 25, 9, 16, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Printing array in reverse order:" << "\n";
    std::cout << "----------------------------------" << "\n";
    for (int i = size - 1; i >= 0; i = i - 1){
        std::cout << arr[i] << "    ";
    }
    std::cout << "\n";
}

int main(){
    print_array();
    std::cout << "\n";
    reverse_array();
}