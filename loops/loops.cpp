#include<iostream>
using namespace std;

int main(){

    // for loop
    /*
    for(int i=0; i<10; i++){
        printf("for now is %d\t", i);
    }*/
    /*
    // while loop
    int i = 0;
    while( i<=10){
        printf("while now is %d\t", i);
        i += 1;
    }*/

    // while...do
    /*
    int i = 0;
    do{
        printf("while do now is %d\t", i);
        i+=1;
    }while(i <= 10);*/

    // playing with continue and break
    int i = 0;
    while(i<10){
        i+=1;
        if( i==4 ){
            continue;
        }
        cout << i << endl;
        if( i==5 )
            break;
    }

    return 0;
}