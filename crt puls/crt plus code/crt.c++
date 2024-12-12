 1. program for swapping two numbers with the help of a third variable
void swap(int a, int b) {
    int c;
    c = a;
    a = b;
    b = c;
    cout << "After swapping a = " << a << " and b = " << b << endl;
}

int main() {
    int a, b;
    cin >> a >> b;
    swap(a, b);
    return 0;
}

// 2. program for swapping two numbers without a third variable
void swapWithoutThird(int a, int b) {
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After swapping a = " << a << " and b = " << b << endl;
}

int main() {
    int a, b;
    cin >> a >> b;
    swapWithoutThird(a, b);
    return 0;
}

// 3. program for swapping two numbers by using XOR operator
void swapUsingXOR(int a, int b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "After swapping a = " << a << " and b = " << b << endl;
}

int main() {
    int a, b;
    cin >> a >> b;
    swapUsingXOR(a, b);
    return 0;
}

// 4. program for swapping three numbers without a third variable
void swapThree(int a, int b, int c) {
    a = a + b + c;
    b = a - b - c;
    c = a - b - c;
    a = a - b - c;
    cout << "After swapping a = " << a << ", b = " << b << ", and c = " << c << endl;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    swapThree(a, b, c);
    return 0;
}

// 5. program for checking if a year is a leap year or not
void checkYear(int year) {
    if (year % 400 == 0) {
        cout << "Year is a leap year" << endl;
    } else if (year % 4 == 0 && year % 100 != 0) {
        cout << "Leap year" << endl;
    } else {
        cout << "Not a leap year" << endl;
    }
}

int main() {
    int year;
    cin >> year;
    checkYear(year);
    return 0;
}

// 6. program for sum of digits of a number
int sumOfDigit(int num) {
    int b, sum = 0;
    while (num) {
        b = num % 10;
        sum += b;
        num /= 10;
    }
    return sum;
}

int main() {
    int number;
    cin >> number;
    cout << "Sum of digits is " << sumOfDigit(number) << endl;
    return 0;
}

// 7. program for reversing a number
int reverseNum(int num) {
    int b, reversedNumber = 0;
    while (num) {
        b = num % 10;
        reversedNumber = (reversedNumber * 10) + b;
        num /= 10;
    }
    return reversedNumber;
}

int main() {
    int number;
    cin >> number;
    cout << "Reversed number is " << reverseNum(number) << endl;
    return 0;
}

// 8. program for checking if a number is a palindrome or not
bool checkPalindrome(int num) {
    int b, reverseNum = 0, original = num;
    while (num) {
        b = num % 10;
        reverseNum = (reverseNum * 10) + b;
        num /= 10;
    }
    return reverseNum == original;
}

int main() {
    int number;
    cin >> number;
    if (checkPalindrome(number)) {
        cout << number << " is a palindrome" << endl;
    } else {
        cout << number << " is not a palindrome" << endl;
    }
    return 0;
}

// 9. program for calculating the factorial of a number
int fact(int num) {
    if (num == 0) {
        return 1;
    }
    return num * fact(num - 1);
}

int main() {
    int num;
    cin >> num;
    cout << fact(num) << " is the factorial of this number " << num << endl;
    return 0;
}

// 10. program for checking if a number is a strong number
bool checkStrongNum(int n) {
    int b, value = 0, temp = n;
    while (n) {
        b = n % 10;
        value += fact(b);
        n /= 10;
    }
    return value == temp;
}

int main() {
    int number;
    cin >> number;
    if (checkStrongNum(number)) {
        cout << number << " is a strong number" << endl;
    } else {
        cout << number << " is not a strong number" << endl;
    }
    return 0;
}

// 11. program for checking if a number is even or odd
bool checkNum(int n) {
    return n % 2 == 0;
}

int main() {
    int n;
    cin >> n;
    if (checkNum(n)) {
        cout << n << " is even" << endl;
    } else {
        cout << n << " is odd" << endl;
    }
    return 0;
}

// 12. program for calculating the product of digits of a number
int productNum(int n) {
    int b, value = 1;
    while (n) {
        b = n % 10;
        value *= b;
        n /= 10;
    }
    return value;
}

int main() {
    int n;
    cin >> n;
    cout << productNum(n) << " is the product of the digits of " << n << endl;
    return 0;
}

// 13. program for checking if a number is a SPY number or not
bool SpyNum(int n) {
    int b, product = 1, sum = 0;
    while (n) {
        b = n % 10;
        product *= b;
        sum += b;
        n /= 10;
    }
    return product == sum;
}

int main() {
    int n;
    cin >> n;
    if (SpyNum(n)) {
        cout << n << " is a SPY number" << endl;
    } else {
        cout << n << " is not a SPY number" << endl;
    }
    return 0;
}

// 14. program for checking if a number is an Armstrong number
int CalcuCount(int n) {
    int b, count = 0;
    while (n) {
        b = n % 10;
        count++;
        n /= 10;
    }
    return count;
}

bool armstrongNum(int n) {
    int b, value = 0, count = CalcuCount(n), a = n;
    while (n) {
        b = n % 10;
        value += pow(b, count);
        n /= 10;
    }
    return value == a;
}

int main() {
    int n;
    cin >> n;
    if (armstrongNum(n)) {
        cout << n << " is an Armstrong number" << endl;
    } else {
        cout << n << " is not an Armstrong number" << endl;
    }
    return 0;
}

// 15. program for checking if a number is a Disarium number
bool DisariumNum(int n) {
    int b, value = 0, count = CalcuCount(n), a = n;
    while (n) {
        b = n % 10;
        value += pow(b, count);
        n /= 10;
        count--;
    }
    return value == a;
}

int main() {
    int n;
    cin >> n;
    if (DisariumNum(n)) {
        cout << n << " is a Disarium number" << endl;
    } else {
        cout << n << " is not a Disarium number" << endl;
    }
    return 0;
}
