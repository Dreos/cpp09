#include "PmergeMe.hpp"


PmergeMe::PmergeMe()
{

}
PmergeMe::~PmergeMe()
{}
PmergeMe::PmergeMe(const PmergeMe &toCopy)
{
	l = std::list<int>(toCopy.l);
	v = std::vector<std::pair<int,int> >(toCopy.v);

}
PmergeMe& PmergeMe::operator=(const PmergeMe &toAffect)
{
	if(this != &toAffect)
		*this = toAffect;
	return *this;
}
std::list<int> PmergeMe::getList()const
{
	return l;
}
std::vector<std::pair<int,int> > PmergeMe::getVector()const
{
	return v;
}
int PmergeMe::solve(std::string arg)
{
	parse(arg);
	fillVector();
	PutHighestValueInList();
	sortList();
	return 0;
}
/*
int isDigit(char &c)
{
	return (c <= '9' && c >= '0');
}
int isNumber(std::string &value)
{
	if(value.size() == 0)
		return(0);
	for(std::string::iterator it = value.begin() ; it != value.end() ; it++ )
	{
		if(!isDigit(*it))
			return 0;
	}
	return 1;
}*/
void PmergeMe::parse(std::string arg)
{
	std::string copy(arg);
	size_t pos = 0;
	std::string tmp;

	if(arg.size() == 0)
	{
		std::cout << "wrong input" << std::endl;return;
	}

	while((pos = copy.find_first_of(" ")) != std::string::npos)
	{
		tmp = copy.substr(0,pos);
		if(std::atoi(tmp.c_str()))
			l.push_back(std::atoi(tmp.c_str()));
		else
		{
			std::cout << "wrong input" << std::endl;return;
		}
		copy.erase(0,pos+1);
	}
	tmp = copy.substr(0,pos);
	if(std::atoi(tmp.c_str()))
		l.push_back(std::atoi(tmp.c_str()));
	else
	{
		std::cout << "wrong input" << std::endl;
		return;
	}
	displayList();
}
void PmergeMe::fillVector()
{
		int cell1;
		int cell2;
		std::pair<int,int> p;
		std::list<int>::iterator it = l.begin();
		while(it != l.end() and std::distance(it,l.end()) >= 2)
		{
			cell1 = *it;
			it++;
			cell2 = *it;
			if(cell1 >= cell2)
				p = std::make_pair(cell1,cell2);
			else	
				p = std::make_pair(cell2,cell1);
			v.push_back(p);
			it++;
		}
		// HANDLE THE LAST NUMBER WITH ODD INPUT SITUATION
}
void PmergeMe::PutHighestValueInList()
{
	l.clear();
	for(std::vector<std::pair<int,int> >::iterator it = v.begin(); it != v.end() ; it++)
	{
		l.push_back(it->first);
	}

}
void PmergeMe::sortList()
{
	std::list<int>::iterator _tmp;
	std::list<int>::iterator _min;
	int i;
	for(std::list<int>::iterator it = l.begin() ; it != l.end(); it++)
	{
		//std::cout << *it << std::endl;
		_tmp= it;
		_min = _tmp;
		while(_tmp !=l.end())
		{
			if(*_min > *_tmp )
			{
				_min = _tmp;
			}
			_tmp++;
		}
		i = *it;
		*it = *_min;
		*_min = i;
	}

}
void PmergeMe::displayList()
{
	for(std::list<int>::iterator it = l.begin(); it != l.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}
