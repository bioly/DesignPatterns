#include "pch.h"
#include "Person.h"

Person::Person(std::string first, std::string last, int arbitrary):first_name(first), 
																	last_name(last), 
																	arbitrarynumber(arbitrary)
{
}

//Person::Person(const Person& p) :first_name(p.first_name),
//								last_name(p.last_name),
//								arbitrarynumber(p.arbitrarynumber)
//{
//	pResource.reset(new Resource(p.GetResourceName()));
//}
//
//Person& Person::operator=(const Person& p)
//
//{
//	first_name = p.first_name;
//	last_name = p.last_name;
//	arbitrarynumber = p.arbitrarynumber;
//	pResource.reset(new Resource(p.GetResourceName()));
//
//	return *this;
//}

std::string Person::GetName() const
{
	return std::string(first_name + " " + last_name);
}

void Person::SetResource(std::string resource_name)
{
	//pResource.reset(new Resource(resource_name));
	pResource = std::make_shared<Resource>(resource_name);
}
