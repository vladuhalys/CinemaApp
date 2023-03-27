#include "dialogs.h"

class Place
{
public:
	int row;
	int seat;
	bool is_free;
	Place(int row, int seat, bool is_free) : row(row), seat(seat), is_free(is_free){}
	bool order_place()
	{
		if (is_free == true)
		{
			is_free = false;
			return true;
		}
		else
		{
			return false;
		}
			
	}
	~Place() = default;
};

class CinemaHall
{
	void create_places()
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < seats; j++)
			{
				Place place(i, j, true);
				places.push_back(place);
			}
		}
	}
public:
	int number;
	int rows;
	int seats;
	vector<Place> places;
	CinemaHall(int number, int rows, int seats) : number(number), rows(rows), seats(seats) 
	{
		create_places();
	}
	bool OrderPlace(int row, int seat)
	{
		for (int i = 0; i < places.size(); i++)
		{
			if (places[i].row == row && places[i].seat == seat)
			{
				if (places[i].order_place())
				{
					Dialogs::access_message("Місце заброньовано.");
					return true;
				}
				else
				{
					Dialogs::error_message("Місце зайняте! Повторіть дію.");
					return false;
				}
			}
		}
	}
	

	~CinemaHall() = default;
};