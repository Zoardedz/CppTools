#include <iostream>
#include <vector>
#include <string>
  
inline void wait_on_enter()
{
    std::string dummy;
    std::cout << "Enter to continue..." << std::endl;
    std::getline(std::cin, dummy);
	cin.get();
}  
  
int main() {
  
  std::vector<double> delivery_order;
  
  int numberOfOrders;
  
  std::cout<<"Please enter the number of orders you're willing to have!\nEnter: ";
  std::cin>>numberOfOrders;
  
  //keep asking for the value of what they're gonna order until the number of orders is equal to "a"
  int a = 0;
  while (a < numberOfOrders){
	  std::cout<<"Enter your item's value\nEnter: ";
	  int value = 0;
	  std::cin>>value;
	  delivery_order.push_back(value);
	  a++;
  }
 
  // Calculate the total using a for loop:
  
  double total = 0.0;
  
  for (int i = 0; i < delivery_order.size(); i++)
  {
	  total += delivery_order[i];
  }
  std::cout<<"The total issss: "<<total<<"\n";
  wait_on_enter();
}

