#ifndef RNP_H
#define RNP_H

#include <string>
#include <stack>
#include <iostream>

class RNP
{
	private :
		std::stack<int> s;
	public :
		RNP();
		~RNP();
		RNP(const RNP &toCopy);
		RNP& operator=(const RNP &toAffect);
		std::stack<int> getStack()const;
		int solve();
		void parse(std::string arg);
		void popall();

		
};


#endif
