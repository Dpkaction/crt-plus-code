 1. program for swap two numbers with the help of third variable
def swap(a, b):
    c = a
    a = b
    b = c
    print(f"After swapping a = {a} and b = {b}")

a, b = map(int, input().split())
swap(a, b)

# 2. program for swapping two numbers without third variable
def swap(a, b):
    a = a + b
    b = a - b
    a = a - b
    print(f"After swapping a = {a} and b = {b}")

a, b = map(int, input().split())
swap(a, b)

# 3. program for swap two numbers by using XOR operator
def swap(a, b):
    a = a ^ b
    b = a ^ b
    a = a ^ b
    print(f"After swapping numbers a = {a} and b = {b}")

a, b = map(int, input().split())
swap(a, b)

# 4. program for swapping three numbers without third variable
def swap(a, b, c):
    a = a + b + c
    b = a - b - c
    c = a - b - c
    a = a - b - c
    print(f"After swapping a = {a}, b = {b}, and c = {c}")

a, b, c = map(int, input().split())
swap(a, b, c)

# 5. program for checking if a year is a leap year or not
def checkYear(year):
    if year % 400 == 0:
        print("Year is leap year")
    elif year % 4 == 0 and year % 100 != 0:
        print("Leap year")
    else:
        print("Not a leap year")

year = int(input())
checkYear(year)

# 6. program for sum of digits of a number
def sumOfDigit(num):
    b = 0
    sum = 0
    while num:
        b = num % 10
        sum = sum + b
        num = num // 10
    return sum

number = int(input())
ans = sumOfDigit(number)
print(f"Sum of digits is {ans}")

# 7. program for reversing a number
def reverseNum(num):
    b = 0
    reversedNumBer = 0
    while num:
        b = num % 10
        reversedNumBer = (reversedNumBer * 10) + b
        num = num // 10
    return reversedNumBer

number = int(input())
ans = reverseNum(number)
print(f"Reversed number is {ans}")

# 8. program for checking if a number is a palindrome or not
def checkPalindrome(num):
    b = 0
    reversenum = 0
    a = num
    while num:
        b = num % 10
        reversenum = (reversenum * 10) + b
        num = num // 10
    return reversenum == a

number = int(input())
if checkPalindrome(number):
    print(f"{number} is a palindrome")
else:
    print(f"{number} is not a palindrome")

# 9. program for calculating factorial of a number
def fact(num):
    if num == 0:
        return 1
    return num * fact(num - 1)

num = int(input())
factorial = fact(num)
print(f"{factorial} is the factorial of this number {num}")

# 10. program for checking if a number is a strong number
def fact(num):
    if num == 0:
        return 1
    return num * fact(num - 1)

def checkStrongNum(n):
    b = 0
    value = 0
    temp = n
    while n:
        b = n % 10
        value = value + fact(b)
        n = n // 10
    return value == temp

number = int(input())
if checkStrongNum(number):
    print(f"{number} is a strong number")
else:
    print(f"{number} is not a strong number")

# 11. program for checking if a number is even or odd
def checkNum(n):
    return n % 2 == 0

n = int(input())
if checkNum(n):
    print(f"{n} is even")
else:
    print(f"{n} is odd")

# 12. program for calculating the product of digits of a number
def productNum(n):
    b = 1
    value = 1
    while n:
        b = n % 10
        value = value * b
        n = n // 10
    return value

n = int(input())
ans = productNum(n)
print(f"{ans} is the product of the digits of {n}")

# 13. program for checking if a number is a SPY number or not
def SpyNum(n):
    b = 0
    product = 1
    sum = 0
    while n:
        b = n % 10
        product = product * b
        sum = sum + b
        n = n // 10
    return product == sum

n = int(input())
if SpyNum(n):
    print(f"{n} is a SPY number")
else:
    print(f"{n} is not a SPY number")

# 14. program for checking if a number is an Armstrong number
def CalcuCount(n):
    b = 0
    count = 0
    while n:
        b = n % 10
        count += 1
        n = n // 10
    return count

def armstrongNum(n):
    b = 0
    value = 0
    count = CalcuCount(n)
    a = n
    while n:
        b = n % 10
        value = value + (b ** count)
        n = n // 10
    return value == a

n = int(input())
if armstrongNum(n):
    print(f"{n} is an Armstrong number")
else:
    print(f"{n} is not an Armstrong number")

# 15. program for checking if a number is a Disarium number
def CalcuCount(n):
    b = 0
    count = 0
    while n:
        b = n % 10
        count += 1
        n = n // 10
    return count

def DisariumNum(n):
    b = 0
    value = 0
    count = CalcuCount(n)
    a = n
    while n:
        b = n % 10
        value = value + (b ** count)
        n = n // 10
        count -= 1
    return value == a

n = int(input())
if DisariumNum(n):
    print(f"{n} is a Disarium number")
else:
    print(f"{n} is not a Disarium number")
    