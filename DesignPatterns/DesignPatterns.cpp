// DesignPatterns.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>

void print(int v) {
	std::cout << v << std::endl;
}

int main()
{
    std::cout << "Design Patterns based on the UDEMY course!!!\n"; 

	std::vector<int> int_vector{ 1,2,3,4,45,5,6,5 };

	std::for_each(int_vector.begin(), int_vector.end(), print);


	return EXIT_SUCCESS;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > ochaAdd Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
