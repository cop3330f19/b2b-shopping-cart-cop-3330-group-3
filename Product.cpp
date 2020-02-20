#include <string>
#include <fstream>
#include <iostream>
#include "Product.h"
#include <vector>
using namespace std;

    //Constructors
    Product::Product(int i, string d, double p, int s)
    {
        itemNo=i;
        description=d;
        price=p;
        stockQuantity=s;
    }
    Product::Product()
    {
        /*
        itemNo=0;
        description="";
        price=0;
        stockQuantity=0; */   
    }

    //Get Function
    int Product::getitemNo(){return itemNo;}
    string Product::getdescription(){return description;}
    double Product::getprice(){return price;}
    int Product::getstockQuantity(){return stockQuantity;}
    
    //Receive from file Function
    void Product::grabinfo()
    {
        int itemNo, stockQuantity;
        double price;
        string size, type, description;
        char c;
        
        vector<Product> products;
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
               Product one(itemNo, description, price, stockQuantity);
               products.push_back(one);
               //cout << itemNo << "," << description << "," << price << "," << stockQuantity << endl;
           } 
        }    
        inFile.close();
        product=products;
    }
    
    //Print Function
    string Product::getProduct()
    {
        string itemNo=(string) itemNo;
        string stockQuantity= (string) stockQuantity;
        string price= (string) price;
        return itemNo+description+""+stockQuantity+price+"";
    }

    //Set Function
    void Product::setitemNo(int i){itemNo=i;}
    void Product::setdescription(string d){description=d;}
    void Product::setprice(double p){price=p;}
    void Product::setstockQuantity(int s){stockQuantity=s;}
