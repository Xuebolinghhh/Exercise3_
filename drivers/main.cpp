#include <iostream>
#include "functions.hpp"



int main()
{
	int option;

	do
	{
		std::cout << "------ Menu ------\n"
			"[1] dot product   \n"
			"[2] euclidean norm\n"
			"[3] maximum norm  \n"
			"[4] exit          \n\n";

		std::cout << "Input: ";
		std::cin >> option;
		std::cout << std::endl;

		if (option == 1)
		{
			int n1, n2;

			double* v1 = createArray("v1", n1);
			double* v2 = createArray("v2", n2);

			if (n1 != n2)
			{
				std::cout << "\nError: vectors sizes don't match." << "\n" << std::endl;

				continue;
			}

			std::cout << "\nDot product is " << dotProduct(v1, v2, n1) << "\n" << std::endl;

			deleteArray(v1);
			deleteArray(v2);
		}
		else if (option == 2)
		{
			int n1;
			double* v1 = createArray("v1", n1);

			std::cout << "\nEuclidean norm is " << euclideanNorm(v1, n1) << "\n" << std::endl;

			deleteArray(v1);
		}
		else if (option == 3)
		{
			int n1;
			double* v1 = createArray("v1", n1);

			std::cout << "\nMaximum norm is " << maximumNorm(v1, n1) << "\n" << std::endl;

			deleteArray(v1);
		}
	} while (option != 4);

	return 0;
}

