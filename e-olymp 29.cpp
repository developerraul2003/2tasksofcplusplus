#include <iostream>
using namespace std;

bool is_palindrome(long long n) {
    long long rev = 0, temp = n;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return (n == rev);
}

long long reverse_number(long long n) {
    long long rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int palindromic_degree(long long n) {
    int degree = 0;
    while (!is_palindrome(n)) {
        n += reverse_number(n);
        ++degree;
    }
    return degree;
}

int main() {
    long long m;
    cin >> m;

    int degree = palindromic_degree(m);

    cout << degree << endl;

    return 0;
}
