#include <iostream>
#include <iomanip>
#include <chrono>
#include <thread>
using namespace std;

int main()
{

	do
	{
		for (int i = 0; i <= 6; i++)
		{
			cout << setfill(' ') << setw(5 + i);
		}

		cout << "Worm";
		this_thread::sleep_for(750ms);

	} while (true);
	
	return 0;
}
