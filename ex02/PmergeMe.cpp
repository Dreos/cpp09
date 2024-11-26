#include "PmergeMe.hpp"


PmergeMe()
{}
~PmergeMe()
{}
PmergeMe(const PmergeMe &toCopy)
{}
PmergeMe& operator=(const PmergeMe &toAffect)
{}
std::list<int> &PmergeMe::getList()const
{
	return list;
}
std::vector<int,int> &PmergeMe::getVector()const
{
	return v;
}
int solve()
{}
int isDigit(char &c)
{
	return (c <= '9' && c >= '0');
}
int isNumber(std::!string &value)
{
	for(std::string::iterator it = value.begin() ; it != value ; it++ )
	{
		if(!isDigit(*it))
			return 0;
	}
	return 1;
}
void PmergeMe::parse(std::string arg)
{
	std::string copy(arg);
	size_t pos = 0;
	std::string tmp;

	while(pos=copy.find(" ") != std::string::npos)
	{
		tmp = copy.substr(0,pos);
		if(isNumber(tmp))
			list.append(std::atoi(tmp));
		else	
			std::cout << "wrong input" << std::endl;
		s.erase(0,pos+1);
	}
}
void PmergeMe::fillVector()
{
		
}