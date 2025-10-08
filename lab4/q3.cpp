#include <iostream>
using namespace std;

class PropertyDeed {
private:
    int* ownerID;   

public:
   
    PropertyDeed(int id) {
        ownerID = new int;    
        *ownerID = id;         
        cout << "Regular constructor called. Address: " << ownerID << endl;
    }

   
    PropertyDeed(const PropertyDeed& source, bool shallow) {
        if (shallow) {
          
            ownerID = source.ownerID;
            cout << "Shallow copy constructor called. Shared address: " << ownerID << endl;
        } else {
           
            ownerID = new int;
            *ownerID = *(source.ownerID);
            cout << "Deep copy constructor called. New address: " << ownerID << endl;
        }
    }

  
    void display() {
        cout << "Owner ID Value: " << *ownerID
             << " | Memory Address: " << ownerID << endl;
    }

   
    void setOwnerID(int newID) {
        *ownerID = newID;
    }

    
    ~PropertyDeed() {
        cout << "Destructor called for address: " << ownerID << endl;
        delete ownerID;
    }
};

int main() {
    cout << "Creating Original Object (D1):\n";
    PropertyDeed D1(1001);

    cout << "\nCreating Shallow Copy (D2):\n";
    PropertyDeed D2(D1, true);   

    cout << "\nCreating Deep Copy (D3):\n";
    PropertyDeed D3(D1, false);  

    cout << "\nInitial State:\n";
    D1.display();
    D2.display();
    D3.display();

    cout << "\nChanging D1’s owner ID to 9999...\n";
    D1.setOwnerID(9999);

    cout << "\nAfter Modification:\n";
    D1.display();
    D2.display();
    D3.display();

    cout << "\nProgram End (destructors will now run)\n";
    return 0;
}

