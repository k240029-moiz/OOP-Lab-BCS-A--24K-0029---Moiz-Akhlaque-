#include <iostream>
#include <string>
using namespace std;

class NUCES {
    int id;
    string name;

public:   

    NUCES() {
        id = 0;
        name = "Not Registered";
    }

    NUCES(int i) {
        id = i;
        name = "Pending";
    }

    NUCES(int id, string name) {
        this->id = id;
        this->name = name;
}
    void display() {
        cout << "ID: " << id << "\nName: " << name << "\n\n";
    }
};

int main() {
    NUCES n1;                  
    NUCES n2(29);              
    NUCES n3(29, "Moiz");     

    n1.display();
    n2.display();
    n3.display();

    return 0;
}

