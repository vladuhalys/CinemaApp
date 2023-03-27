#include "header_library.h"

class ShowTime
{
public:
	string duration;
	string start_time;
	string end_time;
	ShowTime(string duration, string start_time, string end_time) : duration(duration), start_time(start_time), end_time(end_time)
	{}
	~ShowTime() = default;
};

class Date
{
	public:
	string day;
	string month;
	string year;
	vector<ShowTime> sessions;
	Date(string day, string month, string year, vector<ShowTime> sessions) : day(day), month(month), year(year), sessions(sessions)
	{}
	~Date() = default;
};
