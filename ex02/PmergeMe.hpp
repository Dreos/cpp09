#ifndef PMERGEME_H
#define PMERGEME_H

#include <string>
#include <list>
#include <vector>
#include <iostream>
#include <algorithm>

class PmergeMe
{
	private :
		std::list<int> l;
		std::vector<int,int>v;
	public :
		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe &toCopy);
		PmergeMe& operator=(const PmergeMe &toAffect);
		std::list<int> &getList()const;
		std::vector<pair<int,int>>&getVector()const;
		int solve();
		void display();
		void parse(std::string arg);
		

		
};
#endif
