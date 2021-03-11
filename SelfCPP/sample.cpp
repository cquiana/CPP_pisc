#include <iostream>
#include "sample.hpp"

Sample::Sample(void)
{
	// std::cout << "Costructor called!" << std::endl;
	// this->setF(0);
	std::cout << "this setF(): " << this->getF() << std::endl;

	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called!" << std::endl;
	return;
}

int Sample::getF(void) const
{
	return this->_f;
}

int Sample::compare(Sample *other) const
{
	if (this->_f < other->getF())
		return -1;
	else if (this->_f > other->getF())
		return 1;
	return 0;
}

// void Sample::setF(int v)
// {
// 	if (v >= 0)
// 		this->_f = v;
// 	return;
// }
