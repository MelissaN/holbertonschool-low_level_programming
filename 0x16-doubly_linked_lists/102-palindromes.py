#!/usr/bin/python3

def isPalindrome(mul):
    return(str(mul) == str(mul)[::-1])

def find_biggest_palindrome():
    biggestPal = 0
    for i in range(999, 100, -1):
        for j in range (999, 100, -1):
            mul = i * j
            if (isPalindrome(mul)):
                if mul > biggestPal:
                    biggestPal = mul
    return(biggestPal)

print(find_biggest_palindrome())
