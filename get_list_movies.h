#include "movie.h"

class GetListMovies
{
public:
	vector <Movie> movies;
	GetListMovies() = default;
	GetListMovies(vector <Movie> movies) : movies(movies) {}
	~GetListMovies() = default;
	void show()
	{
		for (int i = 0; i < movies.size(); i++)
		{
			cout << "�����: " << movies[i].getTitle() << endl;
			cout << "����: " << movies[i].getDescription() << endl << endl;
			cout << "����: " << movies[i].getGenre() << endl << endl;
			cout << "г�: " << movies[i].getYear() << endl << endl;
			cout << "������: " << endl;
			for (int j = 0; j < movies[i].getDates().size(); j++)
			{
				cout << "����: " << movies[i].getDates()[j].day << "." << movies[i].getDates()[j].month<<"." << movies[i].getDates()[j].year << endl;
				for (size_t k = 0; k < movies[i].getDates()[j].sessions.size(); k++)
				{
					cout << "\t" << movies[i].getDates()[j].sessions[k].duration << " : " << movies[i].getDates()[j].sessions[k].start_time << " - " << movies[i].getDates()[j].sessions[k].end_time << endl;
				}
			}
		}
	}
};
