// Name: Habeeb Abiodun Oyelakin
// Matric N0:  2585877
// Question N0: 1

// Assumption made in this solution

//1. The user will input integer values for `waveSize` and `waveCount` when prompted.
//2. The user will enter a character('B' or 'S') for `increaseSize` when prompted.
//3. The user will not input invalid characters or non - integer values for `waveSize` and `waveCount`.
//4. The user will not enter an empty string for `increaseSize`.
//5. The user will choose either 'B' or 'S' to determine whether the wave should increase in size or remain the same.
//6. The user will not input values that lead to program errors, such as extremely large wave sizes or negative wave counts.




#include <iostream>
#include <time.h>
using namespace std;

const int MILLISECONDS = 100; // time-delay in milliseconds

// Declaring the function 
void drawWave(int waveSize, int waveCount, char increaseSize);

int main() {

	int waveSize, waveCount;
	char increaseSize;

	cout << "This program allows you to design or draw wave(s)." << endl;
	cout << endl;

	cout << "Please input the size of the wave you desire: ";
	cin >> waveSize;

	cout << "Please enter the number of waves you want: ";
	cin >> waveCount;

	cout << "Kindly press the button 'B' if you want the wave to get bigger or press 'S' to remain the same: ";
	cin >> increaseSize;
	cout << endl;

	cout << "There you have your beautifully designed wave: " << endl;
	drawWave(waveSize, waveCount, increaseSize);

	//	Adding a time delay
	clock_t goal = MILLISECONDS + clock();
	while (goal > clock());

	return 0;
}

void drawWave(int waveSize, int waveCount, char increaseSize) {
	for (int wave = 1; wave <= waveCount; wave++) {
		// Print the descending triangles side
		for (int row = 1; row <= waveSize; row++) {
			for (int i = 1; i <= row; i++) {
				cout << "#";
			}
			cout << endl;
		}
		//Print ascendiing triangle side
		for (int row = waveSize - 1; row >= 1; row--) {
			for (int i = 1; i <= row; i++) {
				cout << "#";
			}
			cout << endl;
		}
		// This part accounts for the increment in the number of wave
		if ((increaseSize == 'B' || increaseSize == 'b') && wave < waveCount) {
			waveSize++;
		}
		else if ((increaseSize == 'S' || increaseSize == 's') && (wave < waveCount)) {
			waveSize;
		}
	}
}