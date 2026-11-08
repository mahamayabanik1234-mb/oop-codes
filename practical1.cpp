#include <iostream>
#include <string>
using namespace std;

bool isNumberPalindrome(int num) {
    if (num < 0) return false;
    int originalNum = num;
    int reversedNum = 0;
    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    return originalNum == reversedNum;
}

bool isStringPalindrome(const string& str) {
    int left = 0;
    int right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    int choice;
    cout << "1. Number Palindrome\n2. String Palindrome\nEnter choice: ";
    cin >> choice;
    if (choice == 1) {
        int num;
        cout << "Enter number: ";
        cin >> num;
        if (isNumberPalindrome(num)) cout << "Palindrome" << endl;
        else cout << "Not Palindrome" << endl;
    } else if (choice == 2) {
        string str;
        cout << "Enter string: ";
        cin >> str;
        if (isStringPalindrome(str)) cout << "Palindrome" << endl;
        else cout << "Not Palindrome" << endl;
    }
    return 0;
}
