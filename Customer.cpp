#include <iostream>
#include "Customer.h"
using namespace std;

//Constructors
Customer::Customer(string cnu, string cna, double l)
{
    customerNum=cnu;
    customerName=cna;
    lineOfCredit=l;
}

Customer::Customer(){}

//Get Functions
string Customer::getcustomerNum(){return customerNum;}
string Customer::getcustomerName(){return customerName;}
double Customer::getlineOfCredit(){return lineOfCredit;}

//Print Function
string Customer::getCustomer()
{
    
}

//Set Functions
void Customer::setcustomerNum(string cnu){customerNum=cnu;}
void Customer::setcustomerName(string cna)
{customerName=cna;
ifstream inFile;
        inFile.open("customers.dat");
        if (!inFile)
        {
            cout << "Invalid Customer Name.";
        }
}
void Customer::setlineOfCredit(double l){lineOfCredit=l;}
