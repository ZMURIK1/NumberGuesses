#include<iostream>

void main() {
	// Create var with count wished nums
	int countNums;
	std::cout << "Input count nums which you want to make a wish: ";
	std::cin >> countNums;

	for (int i = 0; i < countNums; i++) {
		std::cout << "Think of a number and write it somewhere\n";

		// Create var with max num and min
		int minNum = 0;
		int maxNum;
		std::cout << "Input max num (max - 100000): ";
		std::cin >> maxNum;

		// Determine the number of attempts
		int maxNumForCucle = maxNum;
		int degree = 0;
		while (maxNumForCucle > 2) {
			degree++;
			maxNumForCucle = maxNumForCucle / 2;
		}

		std::cout << "I pass in "<< degree<<" attempts";

		int meanNum;
		while (1 != maxNum - minNum != 0) {
			meanNum = (maxNum + minNum) / 2;

			std::cout << "Your num more than " << meanNum << " (0 - false, 1 - true): ";
			int isMore;
			std::cin >> isMore;

			if (isMore == 1) {
				minNum = meanNum;
			}
			else {
				maxNum = meanNum;
			}
		}
		std::cout << "Your num is " << maxNum;
	}
}