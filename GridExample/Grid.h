#pragma once
#include <vector>



template <class ItemType>
class Grid {

	int m_width;
	int m_height;

	std::vector< std::vector <ItemType> > m_grid;

public:

	//	constructor
	Grid(int width, int height)
	{
		m_width = width;
		m_height = height;
	
		m_grid.resize(width, std::vector<ItemType>(height, ItemType()));
	}

	bool inBounds(int row, int col)
	{
		if (row > m_width - 1 || col > m_height - 1)
		{
			return false;
		}
		
		return true;
	}


	std::vector<ItemType>& operator[](int row)
	{
		if (row > m_width) throw(911);
		return m_grid[row];
	}
};
