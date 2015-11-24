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
string containsThree(int);
string containsFive(int);
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
	assert(returnNonFizzBuzzable(35) == "");
	assert(returnNonFizzBuzzable(51) == "");
	assert(returnNonFizzBuzzable(31) == "");

	assert(containsThree(3) == "Fizz");
	assert(containsThree(5) == "");
	assert(containsThree(13) == "Fizz");
	assert(containsThree(30) == "Fizz");
	assert(containsThree(33) == "Fizz");

	assert(containsFive(5) == "Buzz");
	assert(containsFive(3) == "");
	assert(containsFive(15) == "Buzz");
	assert(containsFive(50) == "Buzz");
	assert(containsFive(55) == "Buzz");

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
	if(Fizz(num) == "" && Buzz(num) == ""
		&& containsFive(num) == "" && containsThree(num) == "")
		return to_string(num);
	else
		return "";
}

string containsThree(int num){
	//3 in tens place
	string temp = to_string(num);
	if(temp[0] == '3' || temp[1] == '3')
		return "Fizz";
	else
		return "";
}

string containsFive(int num){
	string temp = to_string(num);
	if(temp[0] == '5' || temp[1] == '5')
		return "Buzz";
	else
		return "";
}

void FizzBuzz(){
	for(int i = 1; i <= 100; ++i){
		if(Fizz(i) == "Fizz" || containsThree(i) == "Fizz")
			cout << "Fizz";
		if(Buzz(i) == "Buzz" || containsFive(i) == "Buzz")
			cout << "Buzz";
		cout << returnNonFizzBuzzable(i);
		cout << endl;

		//cout << Fizz(i);
		//cout << Buzz(i);
		//cout << returnNonFizzBuzzable(i);
		//cout << endl;
	}
}