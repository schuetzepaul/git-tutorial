#include <iostream>
#include <string>

using namespace std;

void sayHello(const char*);
void sayGoodbye(const char*);

int main(){

    char name[100];
    cout << "Enter your name: ";
    cin >> name;
    cout << endl;
    
    sayHello(name);
    sayGoodbye(name);
}

// New function
void sayHello(const char* name){
    cout << "Hello " << name << "!" << endl;
}

void sayGoodbye(const char* name){
    cout << "Goodbye " << name << "!" << endl;
}
