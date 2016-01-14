#include <iostream>

int main(){
	int input;
	int quarters = 0;
	int dimes = 0;
	int nickels = 0;
	int pennies = 0;

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

	if(quarters != 0){
		std::cout << quarters << " quarter";
		std::cout << (quarters > 1 ? "s." : ".")  << std::endl;
	}

	if(dimes != 0){
		std::cout << dimes << " dime";
		std::cout << (dimes > 1 ? "s." : ".") << std::endl;
	}

	if(nickels != 0){
		std::cout << nickels << " nickel";
		std::cout << (nickels > 1 ? "s." : ".") << std::endl;
	}

	if(pennies != 0){
		std::cout << pennies << " penn";
		std::cout << (pennies >1 ? "ies." : "y.") << std::endl;
	}

	return 0;
}
