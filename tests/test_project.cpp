#include <catch.hpp>

#include "bubble_sort.h"
#include "counting_sort.h"
#include "insertion_sort.h"
#include "merge_sort.h"
#include "quick_sort.h"
#include "selection_sort.h"

TEST_CASE("bubble_sort", "N=10") 
{
 srand(time(NULL));
 const int N = 10;
 
 int nosort[N];
 for (int i = 0; i<N; i++)
 {
 nosort[i] = rand () % 1000;
 }
 
 bubble_sort(&nosort[0], &nosort[N]);

std::vector<int> sorted(nosort, nosort + N);
std::sort(sorted.begin(), sorted.end());
  
bool flag = true; 
for (int i = 0; i < N; i++) 
{ 
 if (nosort[i] != sorted[i]) 
 flag = false; 
}
  REQUIRE(flag == true);
}

TEST_CASE("counting_sort", "N=10") 
{
 srand(time(NULL));
 const int N = 10;
 
 int nosort[N];
 for (int i = 0; i<N; i++)
 {
 nosort[i] = rand () % 1000;
 }
 
counting_sort(&nosort[0], &nosort[N]);

std::vector<int> sorted(nosort, nosort + N);
std::sort(sorted.begin(), sorted.end());
  
bool flag = true; 
for (int i = 0; i < N; i++) 
{ 
 if (nosort[i] != sorted[i]) 
 flag = false; 
}
  REQUIRE(flag == true);
}

TEST_CASE("insertion_sort", "N=10")
{
	srand(time(NULL));
	const int N = 10;

	int nosort[N];
	for (int i = 0; i<N; i++)
	{
		nosort[i] = rand() % 1000;
	}

	insertion_sort(&nosort[0], &nosort[N]);

	std::vector<int> sorted(nosort, nosort + N);
	std::sort(sorted.begin(), sorted.end());

bool flag = true; 
for (int i = 0; i < N; i++) 
{ 
 if (nosort[i] != sorted[i]) 
 flag = false; 
}
  REQUIRE(flag == true);
}

TEST_CASE("merge_sort", "N=10")
{
	srand(time(NULL));
	const int N = 10;

	int nosort[N];
	for (int i = 0; i<N; i++)
	{
		nosort[i] = rand() % 1000;
	}

	merge_sort(&nosort[0], &nosort[N]);

	std::vector<int> sorted(nosort, nosort + N);
	std::sort(sorted.begin(), sorted.end());

	bool flag = true;
	for (int i = 0; i < N; i++)
	{
		if (nosort[i] != sorted[i])
			flag = false;
	}
	REQUIRE(flag == true);
}

TEST_CASE("quick_sort", "N=10")
{
	srand(time(NULL));
	const int N = 10;

	int nosort[N];
	for (int i = 0; i<N; i++)
	{
		nosort[i] = rand() % 1000;
	}

	quick_sort(&nosort[0], &nosort[N]);

	std::vector<int> sorted(nosort, nosort + N);
	std::sort(sorted.begin(), sorted.end());

	bool flag = true;
	for (int i = 0; i < N; i++)
	{
		if (nosort[i] != sorted[i])
			flag = false;
	}
	REQUIRE(flag == true);
}

TEST_CASE("selection_sort", "N=10")
{
	srand(time(NULL));
	const int N = 10;

	int nosort[N];
	for (int i = 0; i<N; i++)
	{
		nosort[i] = rand() % 1000;
	}

	selection_sort(&nosort[0], &nosort[N]);

	std::vector<int> sorted(nosort, nosort + N);
	std::sort(sorted.begin(), sorted.end());

	bool flag = true;
	for (int i = 0; i < N; i++)
	{
		if (nosort[i] != sorted[i])
			flag = false;
	}
	REQUIRE(flag == true);
}
