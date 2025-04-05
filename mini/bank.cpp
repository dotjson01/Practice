#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string name;
    double balance;
    static int count;  // Total accounts

public:
    // Constructor
    BankAccount(int accNo, string accName, double bal) {
        accountNumber = accNo;
        name = accName;
        if (bal < 0)
            balance = 0;
        else
            balance = bal;

        count++;
    }

    // Destructor
    ~BankAccount() {
        count--;
    }

    // Getter
    double getBalance() const {
        return balance;
    }

    // Setter
    void setBalance(double b) {
        if (b >= 0)
            balance = b;
    }

    // Display
    void display() const {
        cout << "Account No: " << accountNumber
             << " | Name: " << name
             << " | Balance: ₹" << balance << endl;
    }

    // Static function
    static int getCount() {
        return count;
    }

    // Operator Overloading: Adding balances
    friend BankAccount operator+(BankAccount a1, BankAccount a2);
};

// Friend function to overload +
BankAccount operator+(BankAccount a1, BankAccount a2) {
    return BankAccount(0, "Merged Account", a1.balance + a2.balance);
}

// Static var init
int BankAccount::count = 0;

int main() {
    BankAccount *acc1 = new BankAccount(101, "Sahil", 5000);
    BankAccount *acc2 = new BankAccount(102, "Ankit", 3000);

    acc1->display();
    acc2->display();

    cout << "\nTotal Accounts: " << BankAccount::getCount() << endl;

    BankAccount acc3 = *acc1 + *acc2;  // Using overloaded operator
    acc3.display();

    delete acc1;
    delete acc2;

    cout << "\nAccounts after deletion: " << BankAccount::getCount() << endl;

    return 0;
}
