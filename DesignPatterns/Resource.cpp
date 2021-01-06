#include "pch.h"
#include "Resource.h"

#include <iostream>

Resource::Resource(std::string n):name(n)
{
    std::cout << "Resource ctor " << name << std::endl;
}

Resource::Resource(const Resource& r):name(r.name)
{
    std::cout << "Resource copy ctor " << name << std::endl;
}

Resource& Resource::operator=(const Resource& r)
{
    name = r.GetName();
    std::cout << "Resource copy assigning " << name << std::endl;
    return *this;
}

Resource::~Resource(void)
{
    std::cout << "Resource detor " << name << std::endl;
}
