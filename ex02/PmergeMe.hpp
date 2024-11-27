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
		std::vector<std::pair<int,int> >v;
	public :
		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe &toCopy);
		PmergeMe& operator=(const PmergeMe &toAffect);
		std::list<int> getList()const;
		std::vector<std::pair<int,int> > getVector()const;
		int solve(std::string arg);
		void parse(std::string arg);
		void fillVector();
		void PutHighestValueInList();
		void sortList();
		void displayList();
		
		

		
};
#endif
