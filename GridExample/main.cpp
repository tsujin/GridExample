#include "Grid.h"
#include <iostream>

int main()
{
	Grid<int> grid = Grid<int>(10, 10);
	std::cout << grid[0][0];

}