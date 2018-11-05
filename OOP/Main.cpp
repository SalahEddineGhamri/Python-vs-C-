// this is the main script of our program
#include"humanClass.h"

int main(){
    human Salah( "Salah", 30);
    human SalahCopy(Salah);
    SalahCopy.sayName();
    SalahCopy.sayAge();
    return 0;
}