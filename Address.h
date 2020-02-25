/*
Address.h
Group 3 Members: Hunter Bell, Tariq Green, Darrell Brown, Christian Pierre Paul
Date Last Edited: 02/25/20
Purpose: To store our set and get funtions for our source code file Address.cpp
*/

#include <string>

class Address
{
  //data members
  std::string streetAddress;
  std::string city;
  std::string state;
  std::string zipCode;
  
  public:
  //constructors
  Address(std::string, std::string, std::string, std::string);
  Address();
  
  //Get Functions
  std::string getstreetAddress();
  std::string getcity();
  std::string getstate();
  std::string getzipCode();
  
  //Print function
  std::string getAddress();
  
  //Set Functions
  void setstreetAddress(std::string);
  void setcity(std::string);
  void setstate(std::string);
  void setzipCode(std::string);
};
