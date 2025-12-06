#include <iostream>
using namespace std;
                // Source, Aux,   Destination
void towerOfHanoi(char A, char B, char C, int n) {
    // Task is to move disks from A to C

    // Base Condition: If there is single disk move to directly
    if (n == 1) {
        cout << A << " to " << C << endl;
        return;
    }

    towerOfHanoi(A, C, B, n - 1);
    cout << A << " to " << C << endl;
    towerOfHanoi(B, A, C, n - 1);
}


int main() {
    towerOfHanoi('A', 'B', 'C', 5);
	return 0;
}