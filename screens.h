#include "dialogs.h"
#include "movie.h"

class Screens {
public:
	static void Home()
	{
		ukr_lang();
		Gener g;
		
		Dialogs::access_message(g.getGener_eng("Western"));
		Dialogs::error_message("Невірний ввід");
		Dialogs::warning_message("Невірний ввід");
	}
};
