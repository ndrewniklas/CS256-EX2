#include <iostream>

int main(){
	int input;
	int quarters;
	int dimes:
	int nickels;
	int pennies;

	std::cout << "Input a number in the range [0, 99]: ";
	std::cin >> input;
	while(0 >= input >= 99){
		std::cout << "\nInvalid! Enter a number in the range [0,99]: ";
	}
	while(input >= 25){
		input -=25;
		quarters++;
	}
	while(input >= 10){
		input -= 10;
		dimes++;
	}
	while(input >= 5){
		input -= 5;
		nickels++;
	}
	while(input > 0){
		input --;
		pennies++;
	}

	std::cout << quarters;
	if(quarters > 1){
		std::cout << " quarters." << std::endl;
	}else{
		std::cout << " quarter." << std::endl;
	}
	std::cout << dimes;
	if(dimes >1){
		std::cout << " dimes." << std::endl;
	}else{
		std::cout << " dime." << std::endl;
	}
	std::cout << nickels;
	if(nickels > 1){
		std::cout << " nickels." << std::endl;
	}else{
		std::cout << "nickel." << std::endl;
	}
	std::cout << pennies;
	if(pennies > 1){
		std::cout << " pennies." << std::endl;
	}else{
		std::cout << " penny." << std::endl;
	}

	return 0;
}
