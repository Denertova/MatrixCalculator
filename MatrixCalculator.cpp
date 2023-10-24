#include <iostream>
#include <iomanip>

using namespace std;

void adding() {
    int matrix_1[3][3];
	int matrix_2[3][3];
	int adding[3][3];

	cout << "Enter the values in the first matrix:" << endl;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> matrix_1[i][j];
		}
	}

	cout << "Enter the values in the second matrix:" << endl;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> matrix_2[i][j];
			adding[i][j] = matrix_1[i][j] + matrix_2[i][j];
		}
	}

	cout << "First matrix:" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << setw(6) << matrix_1[i][j];
		}
		
        cout << endl;
	}
	
    cout << "Second matrix:" << endl;
	
    for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << setw(6) << matrix_2[i][j];
		}
		
        cout << endl;
	}

	cout << "Resulting matrix:" << endl;
	
    for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << setw(6) << adding[i][j];
		}
		
        cout << endl;
	}
}

void subtraction() {
	int matrix_1[3][3];
	int matrix_2[3][3];
	int subtraction[3][3];

	cout << "Enter the values in the first matrix:" << endl;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> matrix_1[i][j];
		}
	}

	cout << "Enter the values in the second matrix:" << endl;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> matrix_2[i][j];
			subtraction[i][j] = matrix_1[i][j] - matrix_2[i][j];
		}
	}

	cout << "First matrix:" << endl;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << setw(6) << matrix_1[i][j];
		}
		
        cout << endl;
	}

	cout << "Second matrix:" << endl;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << setw(6) << matrix_2[i][j];
		}
		
        cout << endl;
	}

	cout << "Resulting matrix:" << endl;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << setw(6) << subtraction[i][j];
		}
		
        cout << endl;
	}
}

void multiplication() {
	int matrix_1[3][3];
	int matrix_2[3][3];
	int multiplication[3][3] = { {0, 0, 0}, {0, 0, 0}, {0, 0, 0} };

	cout << "Enter the values in the first matrix:" << endl;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> matrix_1[i][j];
		}
	}

	cout << "Enter the values in the second matrix:" << endl;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> matrix_2[i][j];
		}
	}

	cout << "First matrix:" << endl;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << setw(6) << matrix_1[i][j];
		}

		cout << endl;
	}

	cout << "Second matrix:" << endl;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << setw(6) << matrix_2[i][j];
		}

		cout << endl;
	}

	cout << "Resulting matrix:" << endl;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			for (int n = 0; n < 3; n++) {
				multiplication[i][j] += matrix_1[i][n] * matrix_2[n][j];
			}

			cout << setw(6) << multiplication[i][j];
		}

		cout << endl;
	}
}

void transposition() {
	int matrix_1[3][3];
	int matrix_2[3][3];

	cout << "Enter the values in the first matrix:" << endl;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> matrix_1[i][j];
		}
	}

	cout << "Enter the values in the second matrix:" << endl;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> matrix_2[i][j];
		}
	}

	cout << "First matrix:" << endl;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << setw(6) << matrix_1[i][j];
		}

		cout << endl;
	}

	cout << "Resulting matrix:" << endl;
    
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << setw(6) << matrix_1[j][i];
		}

		cout << endl;
	}

	cout << "Second matrix:" << endl;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << setw(6) << matrix_2[i][j];
		}

		cout << endl;
	}

	cout << "Resulting matrix:" << endl;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << setw(6) << matrix_2[j][i];
		}

		cout << endl;
	}
}

int main() {

	cout << "MENU" << endl;
	cout << "1. Addition of matrices" << endl;
    cout << "2. Subtraction of matrices" << endl;
    cout << "3. Matrix multiplication" << endl;
    cout << "4. Matrix transposition" << endl;

	int operation;

	cout << "Enter a number from 1 to 4" << endl;
    cout << "Each number corresponds to an operation to be performed" << endl;
	cin >> operation;

	switch (operation) {
	case 1:
		cout << "Addition of matrices" << endl;
		adding();

		break;
	case 2:
		cout << "Subtraction of matrices" << endl;
		subtraction();
		break;
	case 3:
		cout << "Matrix multiplication" << endl;
		multiplication();
		break;
	case 4:
		cout << "Matrix transposition" << endl;
		transposition();
		break;
	default:
		cout << "You have chosen a number outside the range" << endl;
	}
	
    return 0;
}