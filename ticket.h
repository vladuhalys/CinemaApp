#include "movie.h"
#include "customer.h"
#include "cinema_hall.h"

class Ticket
{
	Movie movie;
	Customer customer;
	CinemaHall cinema_hall;
public:
	Ticket() = default;
	Ticket(Movie movie, Customer customer, CinemaHall cinema_hall) : movie(movie), customer(customer), cinema_hall(cinema_hall){}
	~Ticket() = default;
	void create_tiket()
	{
		Dialogs::access_message("Білет створено.");
	}
	void print_ticket()
	{
		Dialogs::access_message("Білет друковано.");
	}
};