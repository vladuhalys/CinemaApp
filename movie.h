#include "showtime.h"

class Gener
{
private:
	map<string, vector<string>> name;
public:
	Gener() {
		name["Action"] = { "Дія", "Aktion", "Action"};
		name["Comedy"] = { "Комедія", "Komödie","" };
		name["Drama"] = { "Драма", "","" };
		name["Horror"] = {"Жахи", "","" };
		name["Thriller"] = {"Трилер","","" };
		name["Fantasy"] = {"Фентезі","","" };
		name["Adventure"] = {"Пригоди","","" };
		name["Mystery"] = {"Детектив","","" };
		name["Sci-Fi"] = {"Фантастика","","" };
		name["Western"] = {"Вестерн","",""};
		name["Animation"] = {"Мультфільм","","" };
		name["Biography"] = {"Біографія","","" };
		name["Crime"] = {"Кримінал","","" };
		name["Documentary"] = {"Документальний","","" };
		name["Family"] = {"Сімейний","","" };
		name["History"] = {"Історичний","","" };
		name["Music"] = {"Музика","","" };
		name["Musical"] = {"Мюзикл","","" };
		name["Romance"] = {"Романтика","","" };
		name["Sport"] = {"Спорт","","" };
		name["War"] = {"Війна","War","" };
	}
	string getGener_ukr(string key) {
		if (name[key][0].empty())
		{
			return key;
		}
		else
		{
			return name[key][0];
		}
	}
	string getGener_de(string key) {
		if (name[key][1].empty())
		{
			return key;
		}
		else
		{
			return name[key][1];
		}
	}
	string getGener_eng(string key) {
		if (name[key][2].empty())
		{
			return key;
		}
		else
		{
			return name[key][2];
		}
		
		
	}
};

class Movie {
private:
	string title;
	string description;
	string genre;
	int year;
	float rate;
	vector<Date> dates;
public:
	string getGenre() {
		return genre;
	}
	string getTitle() {
		return title;
	}
	string getDescription() {
		return description;
	}
	int getYear() {
		return year;
	}
	float getRate() {
		return rate;
	}
	vector<Date> getDates() {
		return dates;
	}
	void setRate(float rate) {
		this->rate = rate;
	}
	void setOneDate(Date date) {
		this->dates.push_back(date);
	}
	Movie() {
		this->title = "No title";
		this->description = "No description";
		this->genre = "No genre";
		this->year = 0;
		this->rate = 0.0;
	}
	Movie(string title) : Movie() {
		this->title = title;
	}
	Movie(string title, string description) : Movie(title) {
		this->description = description;
	}
	Movie(string title, string description, string genre) : Movie(title, description) {
		this->genre = genre;
	}
	Movie(string title, string description, string genre, int year) : Movie(title, description, genre) {
		this->year = year;
	}
	Movie(string title, string description, string genre, int year, float rate) : Movie(title, description, genre, year) {
		this->rate = rate;
	}
	Movie(string title, string description, string genre, int year, float rate, vector<Date> dates) : Movie(title, description, genre, year, rate) {
		this->dates = dates;
	}
};