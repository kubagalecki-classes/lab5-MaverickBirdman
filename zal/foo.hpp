#pragma once

#include "Human.hpp"

#include <list>
#include <vector>
#include <iterator>

using std::vector;
using std::list;
using std::iterator;

vector<char> foo(list<Human> &people)
{
	vector<char> wektor(people.size());
	list<Human>::reverse_iterator it = people.rbegin();
	vector<char>::reverse_iterator rit = wektor.rbegin();
	for (it; it != people.rend(); it++)
	{
		it->birthday();
		if (it->isMonster()==true)
		{
			*rit = 'n';
		}
		else
		{
			*rit = 'y';
		}
	}
	return wektor;
}
