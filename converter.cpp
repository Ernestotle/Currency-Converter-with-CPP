#include <iostream>

int main() {
  // Declare the currencies as variables
  double pesos, reais, soles;

  // declare the amount of money as dollars
  double dollars;

  // Get the user inputs
  std::cout << "Enter the number of Colombian Pesos: ";
  std::cin >> pesos;

  std::cout << "Enter the number of Brazilian Reais: ";
  std::cin >> reais;

  std::cout << "Enter the number of Peruvian Soles: ";
  std::cin >> soles;

  // Declare the concersion rates
  double conversion_rate1 = 0.051;  // from Pesos to USD
  double conversion_rate2 = 0.18;  // from Reais to USD
  double conversion_rate3 = 0.27;  // from Soles to USD

  // Convert the currencies to dollars
  dollars = (conversion_rate1 * pesos) + (conversion_rate2 * reais) + (conversion_rate3 * soles);

  // Output the result
  std::cout << "US Dollars = $" << dollars << "\n";

  return 0;
}