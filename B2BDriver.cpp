/*
B2BDriver.cpp
Group 3 Members: Hunter Bell, Tariq Green, Darrell Brown, Christian Pierre Paul
Date Last Edited: 02/25/20
Purpose:
*/

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
     //associate enters selected items
    double total=0;
    flag=false;
    while(true)
    {
       cout << "What item # of the item that was used in the transaction?(Enter 0000 to STOP) ";
       cin >> itnu;    
        for (int i=0; i<prod.size(); i++)
        {
            if (itnu==0000)
            {
                flag=true;
            }
            if(itnu==prod[i].getitemNo()) //verifies if the item number exists in the file
            {
                cout << "What was the quantity purchased? ";
                cin >> quan;
                if (quan<=prod[i].getstockQuantity()) //verifies if there is enough of the item to satisfy the quantity
                {
                    indpro=i;
                    total+=(quan*prod[i].getprice()); //updates the total price of transaction
                    prod[i].setstockQuantity(prod[i].getstockQuantity()-quan); //updates stock during transaction
                    custo[indcus].setlineOfCredit(custo[indcus].getlineOfCredit()-(quan*prod[i].getprice())); //updates the customer's line of credit
                    Product tr(prod[i].getitemNo(), prod[i].getdescription(), prod[i].getprice(), prod[i].getstockQuantity());
                    transact.push_back(tr);
                    break;
                } 
                else 
                {
                    cout << "Sorry! Re-enter available item and quantity " <<endl;
                }
            }
            //cout << "The final total is " <<prod[i].getitemNo() << " is " << total <<endl;
        }
        if (flag==true)
            break;
    }


