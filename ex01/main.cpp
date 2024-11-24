#include "RNP.hpp"


int main(int argc, char **argv)
{
	if(argc != 2)
		std::cout<< " invalid number of arguments "<< std::endl;
	else
	{
		RNP r;
		r.parse(argv[1]);
		// r.popall();
	}
}
