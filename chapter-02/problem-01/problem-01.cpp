#include <iostream>

using namespace std;
void static halfOfSquare()
{
	int row = 0;

	while (row < 5) {

		for (int i = 0; i < 5 - row; i++) {
			cout << "#";
		}

		cout << endl;
		row++;
	}

}

void static sideWayPattern()
{
	int row = 1;
	while (row <= 7) {
		//  1 4 - abs(4 - 1) = 1
		//  2 4 - abs(4 - 2) = 2
		//  3 4 - abs(4 - 3) = 3
		//  4 4 - abs(4 - 4) = 0
		//  3 4 - abs(4 - 5) = 3
		//  2 4 - abs(4 - 6) = 2
		//  1 4 - abs(4 - 7) = 1
		int printTime = 4 - abs(4 - row);

		for (int i = 0; i < printTime; i++) {
			cout << "#";
		}

		cout << endl;
		row++;
	}


}

int main() {
	// 1. solve the half of a square problem
	// 	   #####
	// 	   ####
	// 	   ###
	// 	   ##
	// 	   #
	halfOfSquare();

	// 2. solve the sideway pattern problem
	// 	   #
	// 	   ##
	// 	   ###
	// 	   ####
	// 	   ###
	// 	   ##
	// 	   #
	//
	sideWayPattern();


	return 0;
}