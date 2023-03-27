#include "header_library.h"

enum Colors
{
	Default = 7,
	Green = 10,
	Red = 12,
	Yellow = 14,
};

class Dialogs {
private:
	static HANDLE hConsole;
public:
	static void error_message(string message)
	{
		ukr_lang();
		SetConsoleTextAttribute(hConsole, Colors::Red);
		println("Error: " + message);
		SetConsoleTextAttribute(hConsole, Colors::Default);
	}
	static void warning_message(string message)
	{
		ukr_lang();
		SetConsoleTextAttribute(hConsole, Colors::Yellow);
		println("Warning: " + message);
		SetConsoleTextAttribute(hConsole, Colors::Default);
	}
	static void access_message(string message)
	{
		ukr_lang();
		SetConsoleTextAttribute(hConsole, Colors::Green);
		println("Warning: " + message);
		SetConsoleTextAttribute(hConsole, Colors::Default);
	}
};

HANDLE Dialogs::hConsole = GetStdHandle(STD_OUTPUT_HANDLE);