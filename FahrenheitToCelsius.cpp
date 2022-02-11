#include <iostream>
#include <stdlib.h>
#include <string>

inline void wait_on_enter()
{
    std::string dummy;
    std::cout << "Enter to continue..." << std::endl;
    std::getline(std::cin, dummy);
	cin.get();
}  

int main() {
	double tempf;
	double tempc;
	std::cout << "Enter your temperature in fahrenheit so we can convert it to Celsius.\nEnter:";
	std::cin >> tempf;
	
	//Celsius = (Fahrenheit - 32)/1.8;

	tempc = (tempf - 32)/1.8;
	std::cout << "Your degrees in Celsius are: " << tempc << ", hopefully it isn't too hot... or too cold!\n";
	
	wait_on_enter();
}