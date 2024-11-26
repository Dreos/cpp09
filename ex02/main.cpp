#include "PmergeMe.hpp"


int main(int argc, char **argv)
{
	if(argc != 2)
		std::cout<< " invalid number of arguments "<< std::endl;
	else
	{
		PmergeMe r;
		r.parse(argv[1]);
		if(!r.solve())
			std::cout << "Error during the sort" << std::endl;
		else
			r.display();
	}
}
