#include <iostream>

// Objective: Use if statements to assign grades based on a score.

std::string runNumberToLetterGradeMethod() {
	int enteredGrade = 0;

	std::cout << "Enter a grade between 0-100: ";
	std::cin >> enteredGrade;

	if (enteredGrade >= 80) {
		return "A*";
	}

	if (enteredGrade >= 70) {
		return "A";
	}

	if (enteredGrade >= 60) {
		return "B";
	}

	if (enteredGrade >= 50) {
		return "C";
	}

	if (enteredGrade >= 40) {
		return "D";
	}

	if (enteredGrade >= 1) {
		return "F";
	}

	return "U";
}

int main() {
	std::cout << "Welcome to the Grading Program" << std::endl << std::endl;
	
	char userInput = 'y';

	while (userInput == 'y' || userInput == 'Y') {
		std::string letterGrade = runNumberToLetterGradeMethod();

		std::cout << "The letter value of the grade entered is: " << letterGrade << std::endl << std::endl;

		std::cout << "Do you want to run again (y/n): ";
		std::cin >> userInput;
		std::cout << std::endl;
	}
	
	std::cout << "Exiting loop." << std::endl << std::endl;
	return 0;
}