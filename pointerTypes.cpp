#include <iostream>

// void changeVariable(int *pointer, int newValue){
//     pointer = &newValue;
// }


int main(){
    //void
    int variable = 100;
    void *pVariable = &variable;
    std::cout<< pVariable << "\n";

    // //reference
    // int initialVariable = 50;
    // int *pPointer = &initialVariable;
    // std::cout<< pPointer << " --> ";
    // changeVariable(pPointer, variable);
    // std::cout<< pPointer;
    // return 0;  
}