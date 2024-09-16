#include <iostream>
#include <string>
using namespace std;
class airport
{
private:
	string name;
	int ticketprice;
	int sitamount;
	int soldtickets;
public:
	airport() : name("DefaultName"), ticketprice(10000), sitamount(750), soldtickets(523)
	{};
	void getairportname() {
		cout << "Input name of an airport: ";
		getline(cin, name);
	}
	void ShowInfo() {
		cout << "Name - " << name << ", price of a ticket - " << ticketprice << ", amount of sitplaces - " << sitamount << ", amount of sold tickets - " << soldtickets << endl;
	}
	int SumSoldTickets(){
		return ticketprice * soldtickets;
	}
};
int main()
{
	airport aboba;
	aboba.getairportname();
	int summoney = 0;
	summoney = aboba.SumSoldTickets();
	cout << endl;
	cout << "Info about airport:" << endl;
	aboba.ShowInfo();
	cout << "Cost of all sold tickets: " << summoney;
}