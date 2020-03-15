#include "foo.h"


base::base(){}

base::base(int a, int b):a{a}, b{b}{
}

int base::add(){
    return a+b;
}

base::~base(){}