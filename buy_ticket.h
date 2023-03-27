#include "ticket.h"

class BuyTicket
{
	public:
	Ticket ticket;
	BuyTicket() = default;
	BuyTicket(Ticket ticket) : ticket(ticket) {}
	~BuyTicket() = default;
	void buy_ticket()
	{


		ticket.create_tiket();
		ticket.print_ticket();
	}
};
