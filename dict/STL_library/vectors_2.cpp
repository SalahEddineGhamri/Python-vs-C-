#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct person{
    int age; string name;
    person( int Age, string Name){
        age = Age;
        name = Name;
    }
};

vector<person> persones;

int main(){

    persones.push_back(person(20, "Salah"));
    persones.push_back(person(40, "Eddine"));

    for(int i=0; i<persones.size(); ++i)
        cout << persones[i].name << endl;

    return EXIT_SUCCESS;
}