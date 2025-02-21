#include <iostream>
int number, element;
int main(){
    std::cout<< "Enter the number of terms: ";
    std::cin>> number;
    if (number == 0){
        std::cout<< " ";
    }
    else if (number == 1){
        std::cout<< "0";
    }
    else if (number == 1){
        std::cout << "0, 1";
    }
    else{
        std::cout<< "0, 1";
        int temp1 = 0;
        int temp2 = 1;
        for (int i = 1; i<=number-2; i++){
            element = temp1 + temp2;
            temp1 = temp2;
            temp2 = element;
            std::cout<< ", " << element;
        }   
    }
    return 0;
}