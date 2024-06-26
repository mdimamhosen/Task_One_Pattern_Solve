#include <iostream>
using namespace std;

void printNumericPattern(int N) {
    for (int i = 1; i <= N; ++i) {
        cout << i;
    }
    cout << endl;

    for (int i = 2; i <= N; ++i) {
        cout << i;
        for (int j = 1; j <= N - 2; ++j) {
            cout << " ";
        }
        cout << N - i + 1 << endl;
    }

    for (int i = N; i >= 1; --i) {
        cout << i;
    }
    cout << endl;
}

void printAlphabeticPattern(int N) {
    for (char c = 'a'; c < 'a' + N; ++c) {
        cout << c;
    }
    cout << endl;

    for (int i = 1; i < N - 1; ++i) {
        cout << char('a' + i);
        for (int j = 1; j <= N - 2; ++j) {
            cout << " ";
        }
        cout << char('a' + N - 1 - i) << endl;
    }

    for (int i = N - 1; i >= 0; --i) {
        cout << char('a' + i);
    }
    cout << endl;
}

int main() {
    int N;
    char T;
    cout << "Enter the value of N (1 <= N <= 26): ";
    cin >> N;
    cout << "Enter the value of T ('a' or '1'): ";
    cin >> T;

    if (T == 'a') {
        printAlphabeticPattern(N);
    } else {
        printNumericPattern(N);
    }

    return 0;
}
