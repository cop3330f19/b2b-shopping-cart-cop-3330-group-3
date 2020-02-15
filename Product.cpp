#include <fstream>
#include <iostream>
#include "Product.h"
using namespace std;

    //Constructors
    Product::Product(int i, string d, double p, int s)
    {
        itemNo=i;
        description=d;
        price=p;
        stockQuantity=s;
    }
    Product::Product(){}

    //Get Function
    int Product::getitemNo(){return itemNo;}
    string Product::getdescription(){return description;}
    double Product::getprice(){return price;}
    int Product::getstockQuantity(){return stockQuantity;}
    
    //Print Function
    void Product::getProduct()
    {
        string size, type;
        char c;
        
        ifstream inFile;
        inFile.open("inventory.dat");
        if(inFile.is_open())
        {
           while (!inFile.eof())
           {
               inFile >> itemNo >> c ;
               getline(inFile, size, ' ');
               getline(inFile, type, ','); 
               inFile >> price >> c >> stockQuantity;
               description= size + " " +type;
               cout << itemNo << endl << description << endl << price << endl << stockQuantity << endl;  
           } 
        }    
        inFile.close();
    }
    //Set Function
    void Product::setitemNo(int i){itemNo=i;}
    void Product::setdescription(string d){description=d;}
    void Product::setprice(double p){price=p;}
    void Product::setstockQuantity(int s){stockQuantity=s;}
