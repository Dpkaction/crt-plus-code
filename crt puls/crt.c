// 1. Program for swapping two numbers with the help of a third variable
void swap(int a, int b) {
    int c;
    c = a;
    a = b;
    b = c;
    printf("After swapping a = %d and b = %d\n", a, b);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    swap(a, b);
    return 0;
}

// 2. Program for swapping two numbers without a third variable
void swapWithoutThird(int a, int b) {
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping a = %d and b = %d\n", a, b);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    swapWithoutThird(a, b);
    return 0;
}

// 3. Program for swapping two numbers by using XOR operator
void swapUsingXOR(int a, int b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After swapping a = %d and b = %d\n", a, b);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    swapUsingXOR(a, b);
    return 0;
}

// 4. Program for swapping three numbers without a third variable
void swapThree(int a, int b, int c) {
    a = a + b + c;
    b = a - b - c;
    c = a - b - c;
    a = a - b - c;
    printf("After swapping a = %d, b = %d, and c = %d\n", a, b, c);
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    swapThree(a, b, c);
    return 0;
}

// 5. Program for checking if a year is a leap year or not
void checkYear(int year) {
    if (year % 400 == 0) {
        printf("Year is a leap year\n");
    } else if (year % 4 == 0 && year % 100 != 0) {
        printf("Leap year\n");
    } else {
        printf("Not a leap year\n");
    }
}

int main() {
    int year;
    scanf("%d", &year);
    checkYear(year);
    return 0;
}

// 6. Program for sum of digits of a number
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
    scanf("%d", &number);
    printf("Sum of digits is %d\n", sumOfDigit(number));
    return 0;
}

// 7. Program for reversing a number
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
    scanf("%d", &number);
    printf("Reversed number is %d\n", reverseNum(number));
    return 0;
}

// 8. Program for checking if a number is a palindrome or not
int checkPalindrome(int num) {
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
    scanf("%d", &number);
    if (checkPalindrome(number)) {
        printf("%d is a palindrome\n", number);
    } else {
        printf("%d is not a palindrome\n", number);
    }
    return 0;
}

// 9. Program for calculating the factorial of a number
int fact(int num) {
    if (num == 0) {
        return 1;
    }
    return num * fact(num - 1);
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%d is the factorial of this number %d\n", fact(num), num);
    return 0;
}

// 10. Program for checking if a number is a strong number
int checkStrongNum(int n) {
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
    scanf("%d", &number);
    if (checkStrongNum(number)) {
        printf("%d is a strong number\n", number);
    } else {
        printf("%d is not a strong number\n", number);
    }
    return 0;
}

// 11. Program for checking if a number is even or odd
int checkNum(int n) {
    return n % 2 == 0;
}

int main() {
    int n;
    scanf("%d", &n);
    if (checkNum(n)) {
        printf("%d is even\n", n);
    } else {
        printf("%d is odd\n", n);
    }
    return 0;
}

// 12. Program for calculating the product of digits of a number
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
    scanf("%d", &n);
    printf("%d is the product of the digits of %d\n", productNum(n), n);
    return 0;
}

// 13. Program for checking if a number is a SPY number or not
int SpyNum(int n) {
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
    scanf("%d", &n);
    if (SpyNum(n)) {
        printf("%d is a SPY number\n", n);
    } else {
        printf("%d is not a SPY number\n", n);
    }
    return 0;
}

#include <math.h>

// 14. Program for checking if a number is an Armstrong number
int CalcuCount(int n) {
    int b, count = 0;
    while (n) {
        b = n % 10;
        count++;
        n /= 10;
    }
    return count;
}

int armstrongNum(int n) {
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
    scanf("%d", &n);
    if (armstrongNum(n)) {
        printf("%d is an Armstrong number\n", n);
    } else {
        printf("%d is not an Armstrong number\n", n);
    }
    return 0;
}

// 15. Program for checking if a number is a Disarium number
int DisariumNum(int n) {
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
    scanf("%d", &n);
    if (DisariumNum(n)) {
        printf("%d is a Disarium number\n", n);
    } else {
        printf("%d is not a Disarium number\n", n);
    }
    return 0;
}