#include <iostream>
#include <string>
#include <algorithm> // needed for some math functions
#include <stdlib.h> // for srand and rand functions
#include <time.h> // time

using namespace std;

class Human {
public:
	string name;
	int age;
	double weight;
	Human(string name, int age, double weight);

	void eat() {
		cout << this->name << " uses EAT!";
	}
	void drink() {
		cout << this->name << " uses DRINK!";
	}
	void sleep() {
		cout << this->name << " uses SLEEP!";
	}
};
// Scope Resolution Operator '::'
// Another way to create a constructor:
Human::Human(string name, int age, double weight) {
	this->name = name;
	this->age = age;
	this->weight = weight;
}

void welcome() {
	cout << "Welcome!" << endl;
};

double add(double, double);

int main() {
	// Hello World
	//cout << "Hello World" << endl;
	//cout << "Never give up!";
	// "<<" is called an insertion operator
	// Escape sequences are the same as usuall 
	// endl acts as /n

	/*
	// Variables
	int x = 2020;
	double y = 12.23;
	char z = 'g';
	string a = "hello";
	bool b = true;
	// bool for boolean
	// true = 1, false = 0

	cout << "int: " << x << endl;
	cout << "double: " << y << endl;
	cout << "char: " << z << endl;
	cout << "string: " << a << endl;
	cout << "bool: " << b << endl;
	*/

	/*
	// User Input
	string name;
	cout << "Please enter your name: ";
	//cin >> name;
	getline(cin, name); // getLine() also reads spaces and char after spaces until enter is pressed
	// #include <string> is required to use getLine()
	// getLine() only works for string and char values
	// ">>" is called the extraction operator
	cout << "Hello " << name << endl;
	*/

	// Arithmetic operators are as usual
	// Increment and Decrement operators are also as usual
	// Type casting: (double) 5/2;
	// Here the int 5 is cast as a double
	// Programming equations ex.(1+2*3)
	// Step 1: Parenthesis
	// Step 2: multiply * & divide /
	// Step 3: add + & subtract -
	// left to right
	// e.g. 1 + 2 - 3 * 4 / 5.0 + (6 + 7) = 13.6

	// if, else if, else statements are as usual
	// switch statements are as usual, switch statements can be used for short, byte,
	// int and char values
	/*
	switch (check) {
		case 1:
			// code
			break;
		default: 
			//code
			break;
	}
	*/

	/*
	// String Functions
	string name = "hello";
	//int length = name.length(); // returns length
	//name.clear(); // clears / empties a string
	//bool empty = name.empty(); // returns true if string is empty
	name.append(" world!"); // appends (adds text to) a string
	//char letter = name.at(1); // returns char at given index (starts at 0)
	//string sub = name.substr(4, 5); // returns portion of string in given parameters (substring)
	// .substr(starting index, number of char to return starting from starting index)
	//name.insert(3, "wwwww"); // inserts text at given index
	//int x = name.find("h"); // returns first instance of text in string
	// returns -1 if string is not found
	name.erase(4, 5); // removes string based on given parameters
	// erase(initial index, chars from initial index) (parameters are the same as substr)

	cout << name << endl;
	*/

	/*
	double x = 4.99;
	double y = -2;
	double m = max(x, y); // returns maximum of two numbers
	double mi = min(x, y); // returns minimum of two numbers
	double p = pow(x, y); // returns x to power y
	double s = sqrt(x); // returns square root of number
	double a = abs(y); // returns absolute value of number
	double r = round(x); // rounds number to nearest whole integer
	// can be assigned to both double and int type
	// rounding follows regular rules (<.5 round down, >=.5 round up)
	double c = ceil(x); // always rounds number up
	double f = floor(x); // always rounds number down

	cout << "Max = " << f << endl;
	*/

	// Logic operators
	// &&, || and ! works as usual

	/*
	// while and do-while loop work as usual
	while(condition) {
	}
	do {
	} while();
	*/

	/*
	// for loop works as usual
	for(declare / init variable; condition; increment / decrement) {
	}
	*/

	/*
	// printf() (works as usual)
	// %[flags][width][.precision][length]specifier
	string make = "Ford";
	string model = "Mustang";
	int year = 2021;
	double price = 9999.9000;
	char for_sale = 'Y';

	printf("Your car is a %d %s %s", year, model.c_str(), make.c_str()); cout << endl;
	// .c_str() function allows the use of string variables instead of just literals (e.x. just writing "Ford" here instead of using make)
	// has something to do with how printf is ported from C but doesn't recognize C++ string variable
	printf("Cost: $%.2f", price); cout << endl;
	printf("Is it for sale? %c", for_sale); cout << endl;
	printf("This is printed with blank space: %10s", "Ford"); cout << endl;
	// %[spaces]specifier, the spaces include the text itself, so here it gives 6 spaces since "Ford" has 4 letters
	// usually it is right justified, but to left justify add '-' in front of [spaces]
	printf("This is printed with zeros: %010s", "Ford"); cout << endl;
	*/

	/*
	// Functions
	// functions work as usual
	// overloded functions also work as usual
	welcome();
	double num1 = 34;
	double num2 = 32;
	cout << "Sum = " << add(num1, num2) << endl; 
	*/

	/*
	// Pseudo-random numbers

	srand(time(NULL));

	//int number = rand() % 6; // generates random number between 0 and 5
	int num1 = rand() % 10 + 1;
	int num2 = rand() % 10 + 1;
	int num3 = rand() % 10 + 1;
	
	cout << num1 << " " << num2 << " " << num3;
	*/

	/*
	// Pointers
	// & address-of / reference operator
	// * dereference operator

	string name = "Bro";
	int age = 100;

	string* pName = &name; // returns location value of variable
	int* pAge = &age;

	cout << *pName << endl; // returns value of variable
	cout << pAge; // returns location of variable
	*/

	/*
	// Arrays work as usual
	// 2D Array also work as usual
	int number;

	cout << "How many cars do you have?: ";
	cin >> number;
	cin.ignore(); // clears input buffer so getline works

	string* pCars = new string[number];

	for (int i = 0; i < number; i++) {
		cout << "Enter Car #" << i + 1 << ": ";
		getline(cin, pCars[i]);
	}

	cout << "\nHere is your garage!\n";
	cout << "________________________\n";

	for (int i = 0; i < number; i++) {
		cout << "Parking Spot #" << i + 1 << ": " << pCars[i] << "\n";
	}
	*/

	// OOP
	/*
	// Classes
	Human human1;
	human1.name = "Rick";
	human1.age = 45; 

	cout << human1.name << endl;
	cout << human1.age << endl;
	human1.eat();
	*/
	/*
	// Constructors
	// constructors and overloded constructors work as usual 
	//but now you can also use the '::' operator to create them!
	Human human1("Rick", 45, 56.3);

	cout << human1.name << endl;
	cout << human1.age << endl;
	*/

	cout << endl;
	return 0;
}

double add(double num1, double num2) {
	return num1 + num2;
};