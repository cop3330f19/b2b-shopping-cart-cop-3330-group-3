#include <ctime>
#include<sstream>
#include <fstream>
#include <iostream>
#include "Customer.h"
#include "Product.h"
#include <vector>
#include <string>
using namespace std;

string generateOrderNum()
{
    time_t now = time(0);
    string oNum;
    stringstream strstream;
    strstream << now;
    strstream >> oNum;
    return oNum;    
}

int main()
{
    //creating objects to access classes
    Address a;
    Customer c;
    Product p;
    //runs the function in the class to store objects of information from each file
    p.grabinfo();
    c.grabcustomer();
    //the vector containing the objects that store the files from each file
    vector<Product> prod=p.product;
    vector <Customer> custo=c.cust;
    vector <Address> add=c.addy;
    vector <Product> transact;
   

    string asc, cus; //variable for associate and customer to enter their name/the name
    int itnu, quan; //the item number and quantity of the item used in the transaction
    int indcus, indpro; //holds the values of the index of the product and customer;
   
    //associate enters name
    cout << "Who are you(Associate Name)? ";
    cin >> asc;
   
    //associate looks up the customer
    bool flag=false;
    while (true)
    {
        cout << "Who is the customer of this transacction? ";
        cin >> cus;
        for (int i=0; i<custo.size(); i++)
        {
          if (cus==custo[i].getcustomerName())
          {
              indcus=i;
              flag=true;
              break;
          }
        }
        if (flag==true)
            break;
    }
