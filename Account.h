#include <iostream>
using namespace std;
#include <string>

#ifndef ASSIGNMENT_3_ACCOUNT_H
#define ASSIGNMENT_3_ACCOUNT_H

class Account{

private:
    string name = "Unnamed Account";
    double balance = 0.0;
    double dollars = 0;
    double euros = 0;
    double tenge = 0;

public:
//    void deposit();
//    virtual void withdraw(double d);
    Account(string n, double b, double balance_dol, double balance_eu, double balance_ten){
        this->name = n;
        this->balance = b;
        this->dollars = balance_dol;
        this->euros = balance_eu;
        this->tenge = balance_ten;
    }

    virtual bool deposit() = 0;
    virtual bool withdraw() = 0;

    void setN(string n);
    string getN();
    void setB(double b);
    double getB();
    void setD(double d);
    double getD();
    void setE(double e);
    double getE();
    double getT();
    void setT(double t);



    Account(){};


};

class SavingsAccount : public Account{
public:
    double interest_rate1 = 3;
    void rate(double a, double b, double c);
//    virtual void withdraw(double d);


};

class CheckingAccount : public Account{

private:
    string name;
    double balance;
    double fee = 0.15;


public:
    void Print();
    void withdraw(double b);


};

class TrustAccount : public Account{

private:
    string name;
    double balance;
    int interest_rate;

public:
    void deposit(double s);
    void withdraw(double a);
    TrustAccount(){};

};

class I_Printable : public Account{
public:
    void printAll(string a, double b, double dol, double eu, double t);
    bool deposit() override{
        auto *b = new I_Printable();
        setN("Mark");
        setB(1000);
        setD(2.34);
        setE(2.02);
        setT(1000);

        b->printAll(getN(), getB(), getD(), getE(), getT());
        return true;
    };
    bool withdraw() override{
        return true;
    };
};


class Redistribution : public Account{

public:
    Redistribution(){};
    void redistribute(double tenge){

        setN("Mark");
        setB(1000);
        setD(426.62);
        setE(494.62);
        setT(1000);

        double final_Dollar = getT()/getD();
        double final_Euro = getT()/getE();

        cout << "First Account: " << endl;
        cout << "Name: " << getN() << endl;
        cout << "Tenge: : " << getB() << endl;
        cout << "Converted into Dollars: " << final_Dollar << endl;
        cout << "Converted into Euros: " << final_Euro << endl;

        cout << endl;

        setN("Elisa");
        setB(32000);
        setD(426.62);
        setE(494.62);
        setT(32000);

        double final_Dollar1 = getT()/getD();
        double final_Euro1 = getT()/getE();

        cout << "Second Account: " << endl;
        cout << "Name: " << getN() << endl;
        cout << "Tenge: : " << getB() << endl;
        cout << "Converted into Dollars: " << final_Dollar1 << endl;
        cout << "Converted into Euros: " << final_Euro1 << endl;

        cout << endl;

        setN("Hurricane");
        setB(5454);
        setD(426.62);
        setE(494.62);
        setT(5454);

        double final_Dollar2 = getT()/getD();
        double final_Euro2 = getT()/getE();

        cout << "Third Account: " << endl;
        cout << "Name: " << getN() << endl;
        cout << "Tenge: : " << getB() << endl;
        cout << "Converted into Dollars: " << final_Dollar2 << endl;
        cout << "Converted into Euros: " << final_Euro2 << endl;

        cout << endl;
    };

    bool deposit() override{
        auto *b = new I_Printable();
        setN("Mark");
        setB(1000);
        setD(2.34);
        setE(2.02);
        setT(1000);

        b->printAll(getN(), getB(), getD(), getE(), getT());
        return true;
    };
    bool withdraw() override{
        return true;
    };
};


#endif //ASSIGNMENT_3_ACCOUNT_H
