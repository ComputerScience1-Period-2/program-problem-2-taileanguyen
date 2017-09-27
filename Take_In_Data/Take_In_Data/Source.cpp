/* Heading
Tailea Nguyen - 9/25/17 Period 6
Assignment Name : Take in Data

Display Data, Accept User Responce, Display Changed Data

*/

// Libraries
#include <iostream>
#include <conio.h>

// Namespaces
using namespace std;

// Functions ()
void pause() {
		cout << "Press any key to continue . . .";
		while (!_kbhit());
		_getch();
		cout << '\n';
}

// MAIN
void main() {
		//Variables
		int soda_kids_count;
		char question_hardest
		bool answersMatcheds = false; // which question was hardest


		int calc_1, calc_2, calc_3, calc_4; // hold int values for calculation


		// User Queries
		cout << "How many soda cans is too much for small \"kids\" ";
		cin >> soda_kids_count;
		cout << "Which question was the hardest (1/2/3/4) : ";
		cin >> question_hardest;
		if (question_hardest == '2' || question_hardest == '2') {
				answersMatcheds = true; // only set to true if answer is '2'
		}
		cout << "Give me 3 random whole numbers : " << "\n";
		cout << "1 : ";
		cin >> calc_1;
		cout << "2 : ";
		cin >> calc_2
		cout << "5 : ";
		cin >> calc_3;


		// After questons print out stored data 
		cout << "I think you are correct, " << soda_kids_count << " sodas are too much. \n";
		cout << "I think question " << question_hardest << " was the hardest." << end1;
		cout << "I think question " << answersMatcheds << " was the hardest. \n";

		// Do some calculations
		cout << calc_1 << " + " << calc_2 << " = " << calc_1 + calc_2 << end1; 
		calc_4 = calc_2 * calc_3;
		cout << calc_2 << " * " << calc_3 << " = " << calc_4 << "\n";

		// Pause
		pause();
}