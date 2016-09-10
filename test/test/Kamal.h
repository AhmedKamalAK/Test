#pragma once
#include <iostream>

class KamalClass
{
public:
	KamalClass();
	~KamalClass();

private:
	int x;
};

KamalClass::KamalClass()
{
	std::cout << "Kamal" << std::endl;
}

KamalClass::~KamalClass()
{
}