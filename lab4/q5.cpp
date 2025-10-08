#include <iostream>
#include <string>
using namespace std;

class CurrencyExchange {
private:
    const double PKR_to_USD_Rate;   
    string& branchName;              
    int totalTransactions;

public:

    CurrencyExchange(double rate, string& branch, int transactions)
        : PKR_to_USD_Rate(rate), branchName(branch), totalTransactions(transactions)
    {
        cout << "CurrencyExchange object created for branch: " << branchName << "\n";
    }

    double convertPKRtoUSD(double pkrAmount) {
        totalTransactions++;
        return pkrAmount / PKR_to_USD_Rate;
    }

    void displayInfo() {
        cout << "\nBranch: " << branchName
             << "\nExchange Rate (PKR to USD): " << PKR_to_USD_Rate
             << "\nTotal Transactions: " << totalTransactions << "\n";
    }
};

int main() {
    string branch = "BOUNTY HUNTER OFFICE";
    CurrencyExchange ce(277.50, branch, 0);

    double amountPKR;
    cout << "Enter amount in PKR: ";
    cin >> amountPKR;

    double amountUSD = ce.convertPKRtoUSD(amountPKR);
    cout << "Equivalent USD: $" << amountUSD << "\n";

    ce.displayInfo();

    return 0;
}

