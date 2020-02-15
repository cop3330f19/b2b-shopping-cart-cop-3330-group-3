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
