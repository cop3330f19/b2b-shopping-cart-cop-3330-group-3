#include <ctime>
#include<sstream>
#include <fstream>
#include <iostream>
#include "Customer.h"
#include "Product.h"
#include <vector>
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
    //Variables for Customer
    string cName, cNum;
    double loc;

    //Variables for Product
    int iNum, sQuant;
    string descript;
    double pri;

    Address a;
    Customer c;
    Product p;

    p.grabinfo();
    vector<Product> prod = p.product;

    c.grabcustomer();
    vector <Customer> cust = c.cust;

    vector <Address> addresses;

        for (int i = 0; i < cust.size(); i++)
        {
            cout << cust[i].getcustomerName() << endl;
        }
    for (int i = 0; i < prod.size(); i++)
    {
        if (prod[i].getcustomerName() == cName)
    }

   
    //associate enters name 
    string asc;

    if (asc == customer)
    {
        cout << "AssociateName :" << endl;
    }
    else
        return ;
    //associate looks up the customer
    if (customer == cName)
    else
        return ;
    //associate enters selected items/quantities
    if (sQuant == iNum)
    {
        for (int = i; i = 0; i--)
    }
    else
        return ;

    string asc;
    cout << "Who are you(Associate Name)? ";
    cin >> asc;

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
    
    cout << "Order Number: " << generateOrderNum()<< endl;
    cout << "Associate: " << asc << endl;
    cout << "Customer Number: " << endl;
    cout << "Costumer: " << endl;
    cout << "Address: " << endl; 
    return 0;
}


