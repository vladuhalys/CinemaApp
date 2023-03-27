#include "get_list_movies.h"

class Screens {
public:
	static void Home()
	{
		ukr_lang();
		println("³���� ��� � ��������!");
		vector<ShowTime> sessions = {
			ShowTime("2:00", "12:00", "14:00"),
			ShowTime("2:00", "14:00", "16:00"),
			ShowTime("2:00", "16:00", "18:00"),
			ShowTime("2:00", "18:00", "20:00"),
			ShowTime("2:00", "20:00", "22:00"),
			ShowTime("2:00", "22:00", "24:00"),
		};
		vector<Date> dates = {
			Date("02", "12", "2023", sessions),
			Date("03", "12", "2023", sessions),
			Date("04", "12", "2023", sessions),
			Date("05", "12", "2023", sessions),
			Date("06", "12", "2023", sessions),
			Date("07", "12", "2023", sessions),
		};
		vector<Movie> movies = {
			Movie("������", "������ ������� �����", "�������", 2009, 10.0, dates),
			Movie("������ 2", "���� ������� �����", "�������", 2023, 10.0, dates),
			Movie("���� ӳ� 4", "������ ������", "�������", 2023, 7.2, dates),
			Movie("�����!", "Գ��� ��� ��������� ����!", "������", 2018, 5.3, dates),
		};
		GetListMovies listMovies(movies);
		listMovies.show();
	}
};
