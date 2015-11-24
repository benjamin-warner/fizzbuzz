#include <iostream>
#include <string>
#include <cassert>

using std::cout;
using std::endl;
using std::string;
using std::to_string;

string Fizz(int);
string Buzz(int);
string returnNonFizzBuzzable(int);
void FizzBuzz();

int main(int argc, char* argv[]){
	
	assert(Fizz(3) == "Fizz");
	assert(Fizz(5) == "");
	assert(Fizz(7) == "");
	assert(Fizz(15) == "Fizz");

	assert(Buzz(5) == "Buzz");
	assert(Buzz(3) == "");
	assert(Buzz(7) == "");
	assert(Buzz(15) == "Buzz");

	assert(returnNonFizzBuzzable(3) == "");
	assert(returnNonFizzBuzzable(5) == "");
	assert(returnNonFizzBuzzable(7) == "7");
	assert(returnNonFizzBuzzable(10) == "");


	cout << endl;
	FizzBuzz();
	
	return 0;
}

string Fizz(int num){
	if(num % 3 == 0)
		return "Fizz";
	else
		return "";
}

string Buzz(int num){
	if(num % 5 == 0)
		return "Buzz";
	else
		return "";
}

string returnNonFizzBuzzable(int num){
	if(Fizz(num) == ""
	&& Buzz(num) == "")
		return to_string(num);
	else
		return "";
}

void FizzBuzz(){
	for(int i = 1; i <= 100; ++i){
		cout << Fizz(i);
		cout << Buzz(i);
		cout << returnNonFizzBuzzable(i);
		cout << endl;
	}
}