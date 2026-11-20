#include <iostream>

using namespace std;

int main() {
    long long n;
    cout << "Enter a natural number: ";
    cin >> n;

    if (n <= 0) {
        cout << "Error: number must be natural (> 0)." << endl;
        return 1;
    }

    int sum = 0;
    long long temp = n;

    while (temp > 0) {
        int digit = temp % 10;
        if (digit > 2 && digit % 2 != 0) {
            sum += digit;
        }
        temp /= 10;
    }

    cout << "Sum of odd digits > 2: " << sum << endl;

    return 0;
}
