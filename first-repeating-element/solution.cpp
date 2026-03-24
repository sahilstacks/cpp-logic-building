#include<iostream>

int main(){
    int x, size;
    int arr[] = {1,5,3,4,3,5,6};
    size = sizeof(arr) / sizeof(arr[0]);
    
    int result = -1;
    bool found = false;

    for(int i = 0; i < size; i++){
        x = arr[i];
        for(int j = i + 1; j < size; j++){
            if (x == arr[j]){
                result = i + 1;
                found = true;
                break;
            }
        }
        if (found) {
            break;
        }
    }
    
    std::cout << result << std::endl;
    
    return 0;
}