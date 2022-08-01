// Factors.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Enter positive integer and return all of its factors
//

#include <iostream>
#include <vector>

// Return a vector of all of a positive integer's factors
std::vector<int> findFactors(int num) 
{
    std::vector<int> factors(num);

    for (int i = 1; i <= sqrt(num); i++) {
        if (num % i == 0) {
            factors[i - 1] = i;
            if (i != num / i) {
                factors[num / i - 1] = num / i;
            }
        }
    }

    return factors;
}

int main()
{
    int i = -1;
    while (i < 0) {
        std::cout << "Enter a positive integer value: ";
        std::cin >> i;

        if (i < 0) {
            std::cout << "Integer must be positive. Please try again.\n";
        }
    }

    std::cout << "Factors:\n";

    std::vector<int> factors = findFactors(i);

    for (int i = 0; i < (int) factors.size(); i++)
    {
        if (factors[i] != 0) 
        {
            std::cout << factors[i] << '\n';
        }
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
