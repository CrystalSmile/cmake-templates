#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "calc/Calc.h"
#include "TutorialConfig.h"

int main(void)
{
    std::cout << "Hello World!" << std::endl;
    std::cout << "1 + 1 = " << add(1, 1);
    
    std::cout << "Version : " << Tutorial_VERSION_MAJOR <<
    " , " << Tutorial_VERSION_MINOR;    
}
