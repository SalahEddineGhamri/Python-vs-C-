#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    int i=0;
    string line;
    ifstream myfile("The_file.txt");
    if (myfile.is_open()){
    while ( getline(myfile, line) ){
        if ( i == 1 ){
            int nbr1 = stoi(line);
            cout << "The first numbr is " 
                 << nbr1 << endl;
        } else if( i == 3) {
            int nbr2 = stoi(line);
            cout << "The second numbr is " 
                 << nbr2 << endl;
        }
        i += 1;
        }
    } 
    else { cout << " Error opening the file " << endl;}
    myfile.close();
    return 0;
}