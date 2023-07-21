#include <iostream>

using namespace std;
int main(){
	const double price_small_room {25.0};
	const double price_big_room {35.0};
	const double t = {0.06};

	int small_rooms {0}, big_rooms {0};
	
	cout << "How much small rooms: ";
	cin >> small_rooms;
	cout << "How much big rooms: ";
	cin >> big_rooms;

	int srooms = price_small_room * small_rooms ;
	int brooms = price_big_room * big_rooms ;
	double sum = (srooms + brooms) * t;

	cout << "price for small roms: $" << srooms << endl;
	cout << "price for big roms: $" << brooms << endl;
	cout << "tax: $" << sum <<endl;
	cout << "=================================" << endl;
	cout << "full price: $" << srooms + brooms + sum <<endl;

}
