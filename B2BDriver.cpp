/*
B2BDriver.cpp
Group 3 Members: Hunter Bell, Tariq Green, Darrell Brown, Christian Pierre Paul
Date Last Edited: 02/25/20
Purpose: To test our classes in the program.
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
    
    cout << "Who are you(Associate Name)? ";
    cin >> asc; //associate enters name
    
    //associate looks up the customer
    bool flag=false; //is used to check if task if completed
    while (true) //made to continue until the loop breaks
    {
        cout << "Who is the customer of this transacction? ";
        cin >> cus; //user enters who the customer is
        for (int i=0; i<custo.size(); i++) //iterates from 0 to last index of vector custo
        {
          if (cus==custo[i].getcustomerName())// if the customer's name is found in the vector
          {
              indcus=i; //sets indcus to the index that matches the customer's name
              flag=true;  //task is completed
              break; //breaks out of the for loop if cus is found in the vector custo
          } 
        }
        if (flag==true) //if task is completed then break out of the while loop
            break;
    }
    
    //associate enters selected items
    double total=0; //total will hold the total amount purchased by the customer
    flag=false; //flag is reset to false, is used to check if task is completed
    while(true) //made to run until loop breaks
    {
       cout << "What item # of the item that was used in the transaction?(Enter 0000 to STOP) ";
       cin >> itnu; //user enters itemNo of products used in the transactions
        for (int i=0; i<prod.size(); i++)
        {
            if (itnu==0000) //if user enters 0000, loop will break
            {
                flag=true;
            }
            if(itnu==prod[i].getitemNo()) //verifies if the item number exists in the file
            {
                cout << "What was the quantity purchased? ";
                cin >> quan; //user enters quantity of products purchased during transaction
                if (quan<=prod[i].getstockQuantity()) //verifies if there is enough of the item to satisfy the quantity
                {
                    indpro=i; //indpro is set equal to the index of the itemNo found in the vector prod
                    total+=(quan*prod[i].getprice()); //updates the total price of transaction
                    prod[i].setstockQuantity(prod[i].getstockQuantity()-quan); //lowers stock of the current product as its entered 
                    custo[indcus].setlineOfCredit(custo[indcus].getlineOfCredit()-(quan*prod[i].getprice())); //lowers the customer's line of credit
                    Product tr(prod[i].getitemNo(), prod[i].getdescription(), quan* prod[i].getprice(), quan); //makes objects based on the information entered by the employee
                    transact.push_back(tr); //adds the object to the vector transact
                    break;
                } // else the itemNo and quantity won't be recorded
                else 
                {
                    cout << "Sorry! Re-enter available item and quantity " <<endl;
                }
            }
        }
        if (flag==true) //if task is completed, then loop will break
            break;
    }
    
    
    //sending information to file
    string dash= "-----------------------------------------------"; //string made for formatting in the file
   ofstream file; //variable used to send to the file
    file.open("shoppingcart.txt"); //the name of the file we send information too
   
    file << dash+"\n B2B Shopping Cart \n"+dash+"\n"; //105-113: Sends all of the customer information to the file
    file << "Order Number: " +generateOrderNum()+"\n";
    file << "Customer Number: " +custo[indcus].getcustomerNum() +"\n";
    file << "Customer: " + custo[indcus].getcustomerName() +"\n";
    file << "Address: " + add[indcus].getstreetAddress()+" |\n"+add[indcus].getcity()+", "+add[indcus].getstate()+" "+add[indcus].getzipCode();
    file << "\n"+dash+"\n";
    file << "Item No      Description          Qty     Total";
    file << "\n"+dash+"\n";
    for (int i=0; i<transact.size(); i++) //from 0-the last index of transact
    { //115-118 sends the products used in the transactions
        file << transact[i].getitemNo()<<"      "<< transact[i].getdescription()<<"          "
            <<transact[i].getstockQuantity()<<"     "<<transact[i].getprice()<<"\n";
    }
    file << dash+"\n";
    file << "Total                                   "<<total<<"\n"; //sends the total price of the transaction
    file << dash+"\n";
    file << "Remaining Credit                        "<<custo[indcus].getlineOfCredit(); //sends how much money the customer has left
    file.close(); //closes the file
	return 0;
}
