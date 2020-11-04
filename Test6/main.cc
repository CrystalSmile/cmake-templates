#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "Calc.h"

int main(int argc, char *argv[])
{
    if (argc < 2){
        std::cout << "Usage: " << argv[0] << " number" << std::endl;
        return 1;
    }
    
    int var1 = atoi(argv[0]);
    int var2 = atoi(argv[1]);
    std::cout << add(var1, var2);
}
