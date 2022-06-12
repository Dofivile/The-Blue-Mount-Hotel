#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main() {
	string location;
	const int single_price = 60, double_price = 75, king_price = 100, suite_price = 150;
	int number_of_floors, number_of_rooms, rooms, single, double1, king, suite, rooma;
	int hotel_income = 0, total_rooms = 0, total_occupied = 0, total_unoccupied = 0;
	double occupancy;
	cout << "=======================================================================================================" << endl;
	cout << setw(50) << "BlueMount Hotel" << endl;
	cout << "========================================================================================================" << endl;
	cout << "Enter the location of this hotel chain: ";
	getline(cin, location);
	cout << "Enter the total number of floors on the hotel: ";
	cin >> number_of_floors;
	while (number_of_floors < 1 || number_of_floors >5) {
		cout << "ERROR, NUMBER OF FLOORS SHOULD BE BETWEEN 1 AND 5. PLEASE ENTER AGIAN." << endl;
		cin >> number_of_floors;
	}
	cout << "\n";
	int j = 1;
	for (int i = 1; i <= number_of_floors; i++) {
		cout << "Enter total number of rooms in the " << i << "th floor: ";
		cin >> number_of_rooms;
		while (number_of_rooms < 1 || number_of_rooms >30) {
			cout << "ERROR, NUMBER OF ROOMS ON A FLOOR SHOULD BE BETWEEN 1 AND 30. PLEASE ENTER AGAIN. " << endl;
			cin >> number_of_rooms;
		}
		if (i == 1) {
			rooma = number_of_rooms;
		}
		else {
			if (rooma > number_of_rooms) {
				rooma = number_of_rooms;
				j++;
			}
		}

		cout << "How many SINGLE rooms are occupied on the " << i << "th floor: ";
		cin >> rooms;
		while (rooms < 0 || rooms >30) {
			cout << "ERROR, NUMBER OF ROOMS ON THIS FLOOR SHOULD BE BETWEEN 0 AND 30. PLEASE ENTER AGIAN. " << endl;
			cin >> rooms;
		}
		single = rooms;
		cout << "How many DOUBLE rooms are occupied on the " << i << "th floor: ";
		cin >> rooms;
		while (rooms < 0 || rooms>30) {
			cout << "ERROR, NUMBER OF ROOMS ON A FLOOR SHOULD BE BETWEEN 0 AND 30. PLEASE ENTER AGIAN. " << endl;
			cin >> rooms;
		}
		double1 = rooms;
		cout << "How many KING rooms are occupied on the " << i << "th floor: ";
		cin >> rooms;
		while (rooms < 0 || rooms>30) {
			cout << "ERROR, NUMBER OF ROOMS ON A FLOOR SHOULD BE BETWEEN 0 AND 30. PLEASE ENTER AGIAN. " << endl;
			cin >> rooms;
		}
		king = rooms;
		cout << "How many SUITE rooms are occupied on the " << i << "th floor: ";
		cin >> rooms;
		while (rooms < 0 || rooms>30) {
			cout << "ERROR, NUMBER OF ROOMS ON A FLOOR SHOULD BE BETWEEN 0 AND 30. PLEASE ENTER AGIAN. " << endl;
			cin >> rooms;
		}
		suite = rooms;
		cout << "\n";
		if ((single + double1 + king + suite) > number_of_rooms) {
			cout << "THE NUMBER OF OCCUPIED ROOMS HAVE EXCEEDED THE TOTAL NUMBER OF ROOMS ON THIS FLOOR. PLEASE TRY AGAIN" << endl;
			i--;
		}
		else {
			hotel_income = hotel_income + ((single * single_price) + (double1 * double_price) + (king * king_price) + (suite_price
				* suite));
			total_rooms = total_rooms + number_of_rooms;
			total_occupied = total_occupied + (single + double1 + king + suite);
			total_unoccupied = total_rooms - total_occupied;
			occupancy = (double(total_occupied) / total_rooms) * 100;
		}
	}
	cout << "============================================================================================================" << endl;
	cout << setw(50) << "BlueMount Hotel located at " << location << endl;
	cout << "============================================================================================================" << endl;
	cout << setw(50) << "Today's Room Rate (USD/NIGHT) " << endl;
	cout << setw(20) << "Single Room" << setw(20) << "Double Room" << setw(20) << "King Room" << setw(20) << "Suite Room" << endl;
	cout << "-----------------------------------------------------------------------------------------------------------" << endl;
	cout << setw(18) << "60$ " << setw(19) << "75$ " << setw(21) << "100$ " << setw(21) << "150$ " << endl;
	cout << "============================================================================================================" << endl;
	cout << setw(40) << "Hotel Income: $" << showpoint << double(hotel_income) << endl;
	cout << setw(40) << "Total Number Of Rooms: " << total_rooms << endl;
	cout << setw(40) << "Total Number Of Occupied Rooms: " << total_occupied << endl;
	cout << setw(40) << "Total Number Of Unoccupied Rooms: " << total_unoccupied << endl;
	cout << setw(40) << "Occupancy Rate: " << fixed << setprecision(2) << showpoint << (occupancy) << "%" << endl;
	cout << "\n\n";

	cout << j << "th floor with " << rooma << " rooms, has the least number of rooms" << endl;
	if (occupancy < 60) {
		cout << "NEED TO IMPROVE HOTEL OCCUPANCY RATE!!" << endl;
	}
	string programmer = "Robel Endashaw";
	int project = 3;
	string due = "04/04/2022";
	cout << "\n\n";
	cout << "Thank you for testing my program!!" << endl;
	cout << "PROGRAMMER: " << programmer << endl;
	cout << "CMSC140 Common Project " << project << endl;
	cout << "Due date: " << due << endl;
	cout << "\n";
	system("pause");
	return 0;
}