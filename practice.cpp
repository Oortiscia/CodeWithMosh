
// dice.
/* #include "cstdlib" // random function.
#include "ctime"   // for time function.elapses time in terms of seconds from
#include "iostream"

jan 1st 1976. using namespace std;
int main() {
  const short minValue = 1;
  const short maxValue = 6;

  srand(time(nullptr)); // seed for rand().
  short dice1 = (rand() % (maxValue - minValue + 1)) + 1;
  short dice2 = (rand() % (maxValue - minValue + 1)) + 1;
  // limiting the range of numbers.

  cout << dice1 << endl << dice2;
} */

// boolalpha.
/* #include "iostream"
#include "iomanip"
using namespace std;
int main()
{
  bool variable0 = true;
  bool variable1 = false;

  cout << boolalpha
  << variable0 << endl
  << variable1 << endl;

  cout << noboolalpha
  << variable1;
} */

// manipulators.
/* #include "iomanip" // io manipulator.
#include "iostream"
using namespace std;
int main()
{
  cout << setw(12) << "spring" << setw(10) << "nice" << endl // set with.
       << setw(12) << "summer" << setw(10) << "hot" << endl;

  cout << left; // left is a sticky manipulator and it won't go away until we
change it. cout << setw(12) << "spring" << setw(10) << "nice" << endl
       << setw(12) << "summer" << setw(10) << "hot" << endl;

  cout << 12.12345678 << endl;

  cout << fixed
       << 12.123456 << endl;

  cout << setprecision(10)
       << 12.12345678 << endl; // both setprecision and fixed are sticky
manipulators.
} */

// formatting.
/* #include "iostream" //formatting.
using namespace std;
#include "iomanip"
int main()
{
  cout << left << setw(15) << "course" << setw(10) << "students" << endl
       << left << setw(15) << "c++" << right << setw(10) << "100" << endl
       << left << setw(15) << "javaScript" << right << setw(10) << "50" << endl;
} */

// character ascii code.
/* #include "iostream"
using namespace std;
int main()
{
  char variable0 = 'a';
  char variable1 = 98 ;
  cout << variable0 << endl
       << variable1 << endl
       << +variable0 ;
} */

// getline.
/* #include "iostream"
using namespace std;
int main()
{
  string state;
  cout << "please enter your state: ";
  getline(cin, state); // mosh says getline is defined in std namespace.

  string cityName;
  cout << "city name: ";
  getline(cin, cityName);

  string street;
  cout << "street name: ";
  getline(cin, street);

  string zipcode;
  cout << "zipcode: ";
  getline(cin, zipcode);

  cout << "\n"
       << street << endl
       << cityName << ", " << state << ", " << zipcode;
  // mosh says getline function is included in std namespace, my code compiles
properly but has an unsolved error.
} */

// numeric limits.
/* #include "iostream"
#include "limits" //mosh didn't use any library for the numeric_limits but i
needed to. using namespace std; int main()
{
  cout << numeric_limits<int>::max() << endl
       << sizeof(int);
} */

// a getline example.
/* #include "iostream"
using namespace std;
int main()
{
  string names[3];        // hexadecimal num is the address of array in memory.
  getline(cin, names[0]); // can also initialize this way: string names[3] = {
[0]:john, marry, jack};. getline(cin, names[1]); // index is from 0 to size-1,
  getline(cin, names[2]);
  cout << "\n"
       << names[0] << endl
       << names[1] << endl
       << names[2];
} */

// C style casting.
/*
==>  int a = 10 , int b = 3; double z = (double)a / b; (not recommended).
*/

// C++ casting.
/*
==>   int a = 10 , int b = 3; double z = static_cast<double>(a) / b; (type
conversions).
*/

// order of operators.
/*
()
!
&&
||
*/

// logical operators order.
/* #include "iostream"
using namespace std;
int main()
{
bool a, b, c;
a = true;
b = false;
c = false;
bool result = a || b && c;
cout << boolalpha
     << result;
} */

// job application.
/* #include "iostream"
using namespace std;
int main()
{
  double yearsOfExperience;
  string isUsCitizen;
  string hasBachelorDegree;
  bool isUsCitizen0, hasBecholarDegree0, yearsOffExperience0; // variables with
0 in the notation are boolean.

  cout << "are you a US citizen? (yes/no) ";
  cin >> isUsCitizen;
  if (isUsCitizen == "yes")
    isUsCitizen0 = true;
  else if (!isUsCitizen0)
  {
    cout << "sorry we don't hire on visa.";
    return 0;
  }

  cout << "do you have a becholar degree or higher? (yes/no) ";
  cin >> hasBachelorDegree;
  if (hasBachelorDegree == "yes")
  {
    hasBecholarDegree0 = true;
  }

  cout << "how many years of experience do you have? ";
  cin >> yearsOfExperience;
  if (yearsOfExperience >= 2)
  {
    yearsOffExperience0 = true;
  }

  if ((isUsCitizen0 && (hasBecholarDegree0 || yearsOffExperience0)))
  {
    cout << endl
         << "you are our pick";
  }
  else
  {
    cout << "sorry we have something else in mind.";
  }
  return 1;
} */

// conditional operator.
/* #include "iostream"
using namespace std;
int main()
{
  int variable, inputVariable0, inputVariable1;
  cin >> inputVariable0 >> inputVariable1; // in case true     in case false
  variable = (inputVariable1 > inputVariable0) ? inputVariable1 :
inputVariable0; cout << variable;
} */

// switch case.
/* #include "iostream"
#include "cmath"
using namespace std;
int main()
{
  short firstNumber, secondNumber;
  double output;
  char op;

  cin >> firstNumber >> secondNumber;
  getline(cin, op);

  switch (op)
  {
  case '+':
    output = firstNumber + secondNumber;
    break;

  case '-':
    output = firstNumber - secondNumber;
    break;

  case '/':
    output = firstNumber / secondNumber; // error fix needed.
    break;

  case '*':
    output = firstNumber * secondNumber;
    break;

    default:
      cout << "w"
    }
  cout << output;
} */

// coordinates.
/* #include "iostream"
using namespace std;
int main()
{
  for (int i = 0; i < 10; i++)
    for (int j = 0; j < 10; j++)
      cout << "(" << i << "," << j << ")" << endl;
} */

// factorial.
/* #include "iostream"
#include "cmath"
using namespace std;
// int main()
// {
//   int number;
//   cin >> number;
//   int factorial = 1;
//   for (int i = 1; i <= number; i++)
//     factorial = factorial * i;
//   cout << factorial;
// }

int main()
{
  double number;
  double factorial = 1;
  cin >> number;
  for (int i = number; i > 0; i--)
    factorial *= i;
  cout << factorial;
} */

// traditional c++ array looping.
/* #include "iostream"
using namespace std;
int main()
{
  int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 234, 31, 2, 43};
  int sizeOfArray = sizeof(numbers) / sizeof(int); // number of bytes this array
takes in memory.

  for (int i = 0; i <= (sizeOfArray - 1); i++)
    cout << numbers[i] << endl;

} */

// range-based for loops.
/* #include "iostream"
using namespace std;
int main()
{
  int numbers[] = {1, 2, 3, 21, 2, 3, 123, 0, 534, 1};
  for (int number : numbers)
    cout << number << endl;
} */

// range-based for loops in strings.
/* #include "iostream"
using namespace std;
int main()
{
  string name = "farham shakeri";
  for (char ch : name)
    cout << ch << endl;
} */

// looping over an array.
/* #include "iostream"
using namespace std;
#include "iomanip"
int main()
{
  float temperatureList[] = {123.12, 32, 323, 100};
  int arraySize = sizeof(temperatureList) / sizeof(float);
  float sum = 0;
  for (int number : temperatureList)
    sum += number;

  double averageTemperature = static_cast<float>(sum) / arraySize;
  cout << fixed
       << averageTemperature;
} */

// while loop example.
/* #include "iostream"
#include "iomanip"
using namespace std;
int main()
{
  int age;
  bool eligibility;
  cout << "please enter your age: ";
  cin >> age;
  while (age < 18 || age > 65)
  {
    cout << "please enter your age: ";
    eligibility = false;
    cin >> age;
  }
  bool condition = (eligibility) ? true : false;
  if (!condition)
  {
    cout << right
         << setw(10)
         << "sorry";
  }
} */

// another while loop example.
/* #include "iostream"
#include "cmath"
using namespace std;
int main()
{
  int secretNumber = 7;
  int guess;
  cin >> guess;
  while (guess != 7)
  {
    cout << "number: ";
    cin >> guess;
  }
  return 1;
} */

// do-while loops.
/* #include "iostream"
using namespace std;
int main()
{
  int number;
  do    // always gets executed atleast once.
  {
    cout << "number: ";
    cin >> number;
  } while (number < 1 || number > 5); // receive a number between 1 to 5.
} */

// continue statement.
/* #include "iostream"
using namespace std;
int main()
{
  for (int i = 1; i <= 20; i += 1)
    if (i % 3 != 0) {
      continue;}
    else {
      cout << i <<endl;}
} */

// nested loops.
/* #include "iostream"
using namespace std;
int main() {
  int row;
  cout << "number of rows: ";
  cin >> row;

  for (int i = 1; i <= row; i++) {

    for (int j = 0; j < i; j++) {
      cout << i << " " << j;
    }

    cout << endl;
  }
  return 1;
} */

// basic functions.
/* #include "iostream"
using namespace std;
string fullName(string first, string last) { return first + " " + last; }
void greet(string name) { cout << "hello " << name << endl; }
int main() { greet(fullName("farham", "shakeri")); } */

// a function for length calculation. (skips spaces)
/* void length(string name) { // these values are parameters.
  int j = 0;
  int k = 0;
  for (int i : name) {
    if (+i == 32) // skiping spaces.
      continue;
    else
      j += 1;
  }
  int length = j;
  cout << length;
} */

// another basic function. (number comparison)
/* #include "iostream"
using namespace std;

int maxNum(int firstNum, int secondNum) {
  return (firstNum > secondNum) ? firstNum : secondNum; // conditional
operator.
}
int main() {
  cout << maxNum(2, 1);
} */

// because why not.
/* #include "cstdlib"
#include "ctime"
#include "iostream"

using namespace std;
void dice() {
  const int maxValue = 6;
  const int minValue = 1;
  srand(time(nullptr));
  int firstDice = (rand() % (maxValue - minValue + 1)) + 1;
  int secondDice = (rand() % (maxValue - minValue + 1)) + 1;
  cout << firstDice << " and " << secondDice;
} */

// assigning default value for parameters. (tax calculator)
/* #include "iostream"
using namespace std;
double cTax(double income, double taxRate = .2) {  // cannot code a parameter
without a default value after taxRate; double tax = income * taxRate; return
tax;
}
int main() {
  cout << cTax(500, .4) << endl
       << cTax(500);
} */

// overloading functions.
/* #include "iostream"
using namespace std;

void greet(string name) { cout << "hello " << name << endl; }
// function signature: function name, number and type of parameters.
void greet(string title, string name) { //
  cout << "hello " << title << " " << name << endl;
}
// this "name" parameter is not related to the previous name parameter.

int main() {
  greet("farham");
  greet("mr", "mosh");
} */

// passing arguments by value or reference.
/* #include "iostream"
using namespace std;

// double priceIncrease(double price) {
//   price *= 1.2;
//   return price;
//   // "price" in this block isn't related to the next block
// }
// int main() {
//   double price = 100;

//   cout << priceIncrease(price) << endl;

//   priceIncrease(price);
//   cout << price << endl;
// }

void increasePrice(double &price) {
  // the '&' puts "price" as reference to a double.
  price *= 1.2;
}
int main() {
  double x = 100;
  increasePrice(x);
  cout << x; // 'x' is overwritten despite being in another block.
} */

// declaring a function.
/* #include "iostream"
using namespace std;

// declaring our function (function prototype)
void greet(string name);

int main() { greet("farham"); }

// function definition.
void greet(string name) { cout << "hello " << name << endl; } */

// using namespaces.
/* #include "iostream"
using namespace std;
// using namespace hello;

namespace hello {
  void oddNums(int number) {
    for (int i = 1; i <= number; i += 1) {
      if (i % 2 == 0)
      continue;
      else {
        cout << i << endl;
      }
    }
  }
}

int main() {
  hello::oddNums(24);
} */

// arrays (again).
/* #include "iostream"
using namespace std;

int main() {
  int numbers[] = {10, 20, 30};

  for (int i = 0; i < size(numbers); i += 1) {
    // size function (std), returns array size in bytes.
    cout << numbers[i] << endl;
  }
} */

// playing with stars.
/* #include "iostream"
using namespace std;

void star(int number) {
  for (int i = 1; i <= number; i += 1) {
    cout << endl;
    for (int j = 0; j < i; j += 1) {
      cout << "*";
    }
  }
} */

// copy array.
/* #include "iostream"
using namespace std;
int main() {
  int myArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 1, 3, 2, 6, 8};
  int yourArray[size(myArray)] = {};

  for (int i = 0; i < size(myArray); i += 1) {
    yourArray[i] = myArray[i];
  }
  for (int i : yourArray) {
    cout << i << endl;
  }
} */
