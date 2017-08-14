#include <iostream>
#include <string>

using namespace std;

void sayHello(const char*);

int main(){

    char name[100];
    cout << "Enter your name: ";
    cin >> name;
    cout << endl;
    
    sayHello(name);
}

// New function
void sayHello(const char* name){
    cout << "Hello " << name << "!" << endl;
}
