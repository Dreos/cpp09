#include "PmergeMe.hpp"


int main(int argc, char **argv)
{
	if(argc != 2)
		std::cout<< " invalid number of arguments "<< std::endl;
	else
	{
		PmergeMe r;
		
		if(!r.solve(argv[1]))
		{
			r.displayList();
		}
		else
			std::cout << "Error during the sort" << std::endl;

	}
}
