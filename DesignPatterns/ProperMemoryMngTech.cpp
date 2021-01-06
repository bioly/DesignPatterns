#include "pch.h"
#include "ProperMemoryMngTech.h"
#include "Person.h"
#include <string>
#include <iostream>



int ProperMemoryMngTech::exec_example_one()
{
	Person Lukasz("Lukasz", "Letocha", 345);
	std::cout << "...1\n";
	Lukasz.SetResource("Lukasz resource");
	std::cout << "...2\n";
	Lukasz.SetResource("Second Lukasz resource");
	std::cout << "...3\n";
	Person Lukasz2 = Lukasz;
	std::cout << "...4\n";
	Lukasz = Lukasz2;
	std::cout << "...5\n";
	std::string s1 = Lukasz.GetResourceName();
	std::cout << "...6\n";
	return 0;
}
