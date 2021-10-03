#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount .h"
#include <string>

using namespace std;

void Account::setN(string n) {
    this->name = n;
}

string Account::getN() {
    return name;
}

void Account::setB(double b){
    this->balance = b;
}

double Account::getB() {
    return balance;
}

void Account::setD(double d) {
    this->dollars = d;
}

double Account::getD() {
    return dollars;
}

void Account::setE(double e) {
    this->euros = e;
}

double Account::getE() {
    return euros;
}

void Account::setT(double t) {
    this->tenge = t;
}

double Account::getT() {
    return tenge;
}



//void Account::deposit() {
//    SavingsAccount a;
//    CheckingAccount c;
//    TrustAccount t;
//    setN("Mark");
//    setB(1000);
//    setD(2.34);
//    setE(2.02);
//    setT(1000);
//    Account *acc = new Account(getN(), getB(), getD(), getE(), getT());
//
//    //a.rate(getD(), getE(), getT()); //1 TASK
//    //c.withdraw(getB()); //2 TASK
//    t.deposit(getB()); // 3 TASK
//
//}

void SavingsAccount::rate(double a, double b, double c) {
    int choice;
    cout << "Select your type of money(1/2/3): " << endl;
    cin >> choice;
    if(choice == 1){
        cout << "Your current balance: " << a << endl;

        double d1 = a * (1 + interest_rate1/100);

        cout << "Your current Interest Rate Is: " << " " << d1 <<endl;
    }else if(choice == 2){
        cout << "Your current balance: " << b << endl;
        double d1 = b * (1 + interest_rate1/100);

        cout << "Your current Interest Rate Is: " << " " << d1 <<endl;
    }else if(choice == 3){
        cout << "Your current balance: " << c << endl;
        double d1 = c * (1 + interest_rate1/100);

        cout << "Your current Interest Rate Is: " << " " << d1 <<endl;
    }

}

void CheckingAccount::withdraw(double d) {

    fee = d - d*fee;
    cout << "Your current balance: " << d << endl;

    cout << "This is a fee for your money: " << fee << endl;
}




void TrustAccount::deposit(double d) {
    TrustAccount *t;

    if(d > 1000){
        d = d + d*0.01;
        cout << "BALANCE: " << d << endl;
    }

    int choice;
    cout << "Your choice(1 or 0)" << endl;
    cin>> choice;
    if(choice == 1){
        t->TrustAccount::withdraw(d);
    }
    else if (choice == 0) {
        cout << "Have a good day!";
    }

}

void TrustAccount::withdraw(double a) {
    cout << "Your balance " << a << endl;
    cout << "Sum that you can withdraw is " << a/5 << endl;
    cout << "Your remainder " << a - a/5;

}





//IDK
//void Account::withdraw(double d) {
//
//}

//void SavingsAccount::withdraw(double d) {
//    Account::withdraw(0);
//};




void I_Printable::printAll(string a, double b, double dol, double eu, double t) {

    cout << "This is an Output using Abstract Class:" << endl;
    cout << "Name: " << a << endl;
    cout << "Balance: " << b << endl;
    cout << "Dollar: " << dol << endl;
    cout << "Euro: " << eu << endl;
    cout << "Tenge: " << t;

}


