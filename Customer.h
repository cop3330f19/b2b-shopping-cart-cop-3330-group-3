/*
Customer.h
Group 3 Members: Hunter Bell, Tariq Green, Darrell Brown, Christian Pierre Paul
Date Last Edited: 02/25/20
Purpose:
*/

#include <string>
#include <vector>
#include "Address.h"

 class Customer
 {
     std::string customerNum;
     std::string customerName;
     double lineOfCredit;
     Address * corperateAddress;
     
     public:
     //Class constructors
     Customer(std::string, std::string, double);
     Customer();
     
     //Class vectors
     std::vector<Customer> cust;
     std::vector<Address> addy;
     
     //Get Functions
     std::string getcustomerNum();
     std::string getcustomerName();
     double getlineOfCredit();
     
     //Receive from file Function
     void grabcustomer();
     
     //Print Function
     std::string getCustomer();
     
     //Set Functions
     void setcustomerNum(std::string);
     void setcustomerName(std::string);
     void setlineOfCredit(double);
 };
