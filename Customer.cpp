#include <iostream>
#include <fstream>
#include "Customer.h"
using namespace std;

//Constructors
Customer::Customer(string cnu, string cna, double l)
{
    customerNum=cnu;
    customerName=cna;
    lineOfCredit=l;
}

Customer::Customer()
{
    customerNum="";
    customerName="";
    lineOfCredit=0;
}

//Get Functions
string Customer::getcustomerNum(){return customerNum;}
string Customer::getcustomerName(){return customerName;}
double Customer::getlineOfCredit(){return lineOfCredit;}

//Receive from file functions
void Customer::grabcustomer()
{
        int lineOfCredit;
        string customerNum, customerName, street, city, state, zip;
        char c;
        vector<Customer> customers;
        vector<Address> addresses;
        
        ifstream inFile;
        inFile.open("customers.dat");
        if(inFile.is_open())
        {
            while (!inFile.eof())
            {
                getline(inFile, customerNum, '|');
                getline(inFile, customerName, '|');
                inFile >> lineOfCredit >> c;
                getline(inFile, street, ',');
                getline(inFile, city, ',');
                getline(inFile, state, ',');
                getline(inFile, zip);
                Customer one(customerNum, customerName, lineOfCredit);
                Address two(street, city, state, zip);
                customers.push_back(one);
                addresses.push_back(two);      
            }
        }
        inFile.close();
    cust=customers;
    addy=addresses;
}


//Print Function
string Customer::getCustomer()
{
    string lineOfCredit= (string) lineOfCredit;
    return customerNum+customerName+lineOfCredit;
}

//Set Functions
void Customer::setcustomerNum(string cnu){customerNum=cnu;}
void Customer::setcustomerName(string cna){customerName=cna;}
void Customer::setlineOfCredit(double l){lineOfCredit=l;}
