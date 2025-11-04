#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            cout << "Skipping number " << i << endl;
            continue; // skip the rest of this iteration
        }
        cout << "Number: " << i << endl;
    }
    return 0;
}
/*
Flow Explanation
Loop runs from i = 1 to 5.

When i == 3:

continue; tells the loop to skip the remaining code in that iteration.

It jumps to the next iteration (i = 4) without printing "Number: 3".

Output:

Number: 1
Number: 2
Skipping number 3
Number: 4
Number: 5






*/