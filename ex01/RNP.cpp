#include "RNP.hpp"
/*
static int stoi( std::string & s ) {
    int i;
    std::istringstream(s) >> i;
    return i;
}
*/
RNP::RNP()
{
}	
RNP::~RNP()
{
}
RNP::RNP(const RNP &toCopy)
{
	this->s = std::stack<int>(toCopy.s);
}
RNP& RNP::operator=(const RNP &toAffect)
{
	if(this != &toAffect)
	{
		*this = toAffect;		
	}
	return(*this);
}
std::stack<int> RNP::getStack()const
{
	return s;
}
int validDigit(const char c)
{
	return(c <= 57 && c >= 48);
}
int validSign(const char c)
{
	return((c == '+') || (c == '-') || (c == '*') || (c == '/'));
}
/*
int RNP::solve()
{
	int result = 0;
	int tmp = 0;
	char sign;
	char c;
	
	while(s.size())
	{
		c = s.top();
		s.pop();
		if(validDigit(c))
			tmp = stoi(std::string(c));
		else
			sign = c;
		
	}

	return result;
}*/
void RNP::parse(std::string arg)
{
	int i = 0;

	int tmp;
	int tmp2;
	while(arg[i])
	{
		if(validDigit(arg[i]))
		{
			s.push(arg[i] - 48);
		}
		else if(validSign(arg[i]))
		{
			if(s.size() < 2)
			{
				std::cout << "error" << std::endl;
				return;
			}
			tmp = s.top();
			s.pop();
			tmp2 = s.top();
			s.pop();
			if(arg[i] == '+')
				s.push(tmp + tmp2);
			if(arg[i] == '*')
				s.push(tmp * tmp2);
			if(arg[i] == '-')
				s.push(tmp2 - tmp);
			if(arg[i] == '/')
				s.push(tmp2 / tmp);
		}
		else if(arg[i] != ' ')
		{
			std::cout << "error" << std::endl;
			return;
		}
		else if((i % 2) == 0)
		{
			std::cout << "error" << std::endl;
			return;
		}
		i++;
	}
	if(s.size() > 1 )
		std::cout  << "error" << std::endl;
	else
		std::cout << s.top() << std::endl;
}
void RNP::popall()
{
	while(s.size() > 0)
	{
		std::cout << s.top() << std::endl;
		s.pop();
	}
}
