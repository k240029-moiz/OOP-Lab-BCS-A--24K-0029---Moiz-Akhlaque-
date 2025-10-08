#include <iostream>
using namespace std;

class SecureBankAccount {
private:
    int accountNumber;
    double balance;
    const string accountType;  
    int* logHistory;            

public:
   
    SecureBankAccount(int accountNumber, double balance, string type, int logSize)
        : accountType(type)   
    {
     
        this->accountNumber = accountNumber;
        this->balance = balance;

        if (balance < 500.0) {
            cout << " Error: Minimum initial balance should be 500 PKR.\n";
            this->balance = 500.0; 
        }

        logHistory = new int;
        *logHistory = logSize;

        cout << " Account created: " << accountNumber
             << " | Type: " << accountType
             << " | Balance: " << this->balance
             << " | Log size stored at: " << logHistory << endl;
    }

    SecureBankAccount(const SecureBankAccount& source)
        : accountType(source.accountType)
    {
        accountNumber = source.accountNumber;
        balance = source.balance;

        logHistory = new int;
        *logHistory = *(source.logHistory);

        cout << " Deep Copy Constructor Called for Account " 
             << accountNumber << " | New log address: " << logHistory << endl;
    }

    void display() const {
        cout << "Account#: " << accountNumber
             << " | Type: " << accountType
             << " | Balance: " << balance
             << " | Log Size: " << *logHistory
             << " | Memory Address: " << logHistory << endl;
    }

    ~SecureBankAccount() {
        cout << "??? Destructor: Releasing memory at " << logHistory 
             << " for Account#: " << accountNumber << endl;
        delete logHistory;
    }
};

int main() {
    cout << "=== Creating Original Account ===" << endl;
    SecureBankAccount A1(101, 1200.0, "Current", 5);

    cout << "\n=== Creating Deep Copy (A2) ===" << endl;
    SecureBankAccount A2(A1);

    cout << "\n--- Before Change ---" << endl;
    A1.display();
    A2.display();

    cout << "\nChanging A1 log size to 10..." << endl;

    cout << "\n--- After Change ---" << endl;
    A1.display();
    A2.display();

    cout << "\n=== Program End (Destructors will run) ===" << endl;
    return 0;
}

