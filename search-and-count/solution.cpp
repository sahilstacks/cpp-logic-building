#include<iostream>

int main(){
    int val,count,size;
    count = 0;
    int arr[] = {1,1,1,1,1,1,1,1,1,0,0,0};
    size = sizeof(arr)/sizeof(arr[0]);

    std::cout << "Enter the value to search : ";
    std::cin >> val;

    for(int i = 0; i < size; i++){
        if (arr[i] == val){
            count = count + 1;
        }
    }
    if(count > 0){
        std::cout << "The value " << val << " is found " << count << " times in the array." << std::endl;
    }else{
        std::cout << "The value " << val << " is not found in the array." << std::endl;
    }
    return 0;
}