#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <limits> 

double plus();
double minus();
double mult();
double divi();

int main() {
  std::string sym;

  std::cout << "Enter symbol (+ - * /): ";
  std::cin >> sym;

  if (sym == "+"){
    double result = plus();
    std::cout << "Result: " << result << std::endl;
  } else if (sym == "-") {
    double result = minus();
    std::cout << "Result: " << result << std::endl;
  } else if (sym == "*") {
    double result = mult();
    std::cout << "Result: " << result << std::endl;
  } else if (sym == "/") {
    double result = divi();
    std::cout << "Result: " << result << std::endl;
  }
	
}

double plus() {
  double a, b, sum;

  std::cout << "Enter first num: ";
  std::cin >> a;

  std::cout << "Enter second num: ";
  std::cin >> b;

  sum = a + b;

  return sum;
}

double minus() {
  double a, b, sum;

  std::cout << "Enter first num: ";
  std::cin >> a;

  std::cout << "Enter second num: ";
  std::cin >> b;

  sum = a - b;

  return sum;
}

double mult() {
  double a, b, sum;

  std::cout << "Enter first num: ";
  std::cin >> a;

  std::cout << "Enter second num: ";
  std::cin >> b;

  sum = a * b;

  return sum;
}

double divi() {
  double a, b, sum;

  std::cout << "Enter first num: ";
  std::cin >> a;

  std::cout << "Enter second num: ";
  std::cin >> b;

  sum = a / b;

  return sum;
}
