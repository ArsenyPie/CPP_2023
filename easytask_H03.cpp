#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

bool has_same_digits(int num) {
    vector<int> digits(10, 0);

    while (num > 0) {
        int digit = num % 10;
        if (digits[digit] > 0) {
            return true;
        }
        digits[digit]++;
        num /= 10;
    }

    return false;
}

int same_digits(int from, int to = -1) {
    if (to == -1) {
        to = from;
        from = 0;
    }

    if (from > to) {
        return 0;
    }

    int count = 0;

    for (int i = from; i <= to; i++) {
        if (has_same_digits(i)) {
            cout << i << " ";
            count++;
        }
    }
    
    cout << endl;

    cout << "Amount: " << count << endl;

    return count;
}

int main() {
    int x, y;
    
    cout << "Enter 1 number or 2 numbers separated by space:" <<endl;
    cin >> x;
    if (getchar() == '\n') y=-1;
    else cin >> y;
    
    same_digits(x, y);

    return 0;
}