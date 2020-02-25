/*
Address.cpp
Group 3 Members: Hunter Bell, Tariq Green, Darrell Brown, Christian Pierre Paul
Date Last Edited: 02/25/20
Purpose:
*/

#include <iostream>
#include "Address.h"
using namespace std;

//constructors given definition
Address::Address(string sa, string c, string s, string z)
{
    streetAddress=sa;
    city=c;
    state=s;
    zipCode=z;
} 
Address::Address()
{
    streetAddress="";
    city="";
    state="";
    zipCode="";    
}

//Get Functions
string Address::getstreetAddress(){return streetAddress;}
string Address::getcity(){return city;}
string Address::getstate(){return state;}
string Address::getzipCode(){return zipCode;}

//Print Function
string Address::getAddress()
{
    return (streetAddress+","+city+","+state+","+zipCode); 
}

//Set Functions
void Address::setstreetAddress(string sa){streetAddress=sa;}
void Address::setcity(string c){city=c;}
void Address::setstate(string s){state=s;}
void Address::setzipCode(string z){zipCode=z;}
