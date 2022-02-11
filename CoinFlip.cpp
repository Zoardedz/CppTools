#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <string>

inline void wait_on_enter()
{
    std::string dummy;
    std::cout << "Enter to continue..." << std::endl;
    std::getline(std::cin, dummy);
	cin.get();
}  

int main() {
  
  // Create a number that's 0 or 1
  
  srand (time(NULL));
  int	coin = rand() % 2;
  
  // If number is 0: Heads
  // If it is not 0: Tails
  
  if (coin == 0) {
  
    std::cout << "Heads\n";
  }
	else {
	
    std::cout << "Tails\n";
  }
  wait_on_enter();
}