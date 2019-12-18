#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions.hpp"
#include <cmath>
/*
void inputVectorElements(double vector[], int size, std::string name);
void printVector(double vector[], int size, std::string name);
bool checkSize(int size);
double dotProduct(double vector1[], double vector2[], int size);
double euclideanNorm(double vector[], int size);
double maximumNorm(double vector[], int size);
double* createArray(std::string name, int& size);
void deleteArray(double* array);
*/
TEST_CASE("dotproduct")
{
	double vector1[] = { 1.0, 2.0, 5.0, 4.0, 4.0 };
	double vector2[] = { 2.0, 4.0, 6.0, 7.0, 7.0 };
	CHECK(dotProduct(vector1,vector2,5)==96);
}

TEST_CASE("euclidean norm ")
{
	double vector1[] = { 1.0, 5.0, 4.0, 4.0 };
	CHECK(euclideanNorm(vector1, 4)==std::sqrt(58));
}

TEST_CASE("maximum norm ")
{	
	double vector1[] = { 1.0, 5.0, 4.0, 2.0 };
	CHECK(maximumNorm(vector1, 4) == 5);
}