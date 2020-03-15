#include <iostream>
#include "foo.h"

int main(){
    base_child b(5, 6);
    std::cout << b.add() << std::endl;
    return 0;
}