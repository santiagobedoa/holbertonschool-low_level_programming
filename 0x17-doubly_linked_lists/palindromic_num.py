#!/usr/bin/python3


def is_palidrome(num):
    original_num = (num)
    rev = 0
    if (num < 0):
        return False
    while (num != 0):
        rev = rev * 10 + num % 10
        num = num // 10;
    if (original_num == rev):
        return True
    else:
        return False


def find_palindrome():
    num = 999 * 999
    while (num):
        if (is_palidrome(num)):
            file = open("102-result", "w")
            file.write(str(num))
            break
        num -= 1


if __name__ == "__main__":
    find_palindrome()
