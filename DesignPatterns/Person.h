#pragma once

#include <string>
#include <memory>
#include "Resource.h"


class Person
{
private:
	std::string first_name;
	std::string last_name;
	int arbitrarynumber;
	std::shared_ptr<Resource> pResource;

	//Person(const Person&);
	//Person& operator=(const Person&);

public:
	Person(std::string first,
		std::string last,
		int arbitrary);


	//Person(const Person&);
	//Person& operator=(const Person&);


	std::string GetName() const;
	int GetNumber() const { return arbitrarynumber; }
	void SetNumber(int number) { arbitrarynumber = number; }
	void SetFirstName(std::string first) { first_name = first;  }

	void SetResource(std::string resource_name);
	std::string GetResourceName() const { return pResource->GetName(); }


};

