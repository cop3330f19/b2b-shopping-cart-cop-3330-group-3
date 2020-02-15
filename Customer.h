#include <string>
#include "Address.h"

 class Customer
 {
     std::string customerNum;
     std::string customerName;
     double lineOfCredit;
     Address * corperateAddress;
     
     public:
     Customer(std::string, std::string, double);
     Customer();
     
     //Get Functions
     std::string getcustomerNum();
     std::string getcustomerName();
     double getlineOfCredit();
     
     //Print Function
     std::string getCustomer();
     
     //Set Functions
     void setcustomerNum(std::string);
     void setcustomerName(std::string);
     void setlineOfCredit(double);
 };
