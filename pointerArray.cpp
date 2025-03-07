#include <iostream>

int main(){
    std::string characters = "Hiren Waghmare";
    char *pCharacters = nullptr;
    float pointerArray[characters.length()];
    for (int i = 0; i<characters.length(); i++){
        pCharacters = &characters[i];
        pointerArray[i] = *pCharacters;
    }
    for (int i = 0; i<characters.length();i++){
        std::cout<< pointerArray[i] << " ";
    }
    return 0;
}