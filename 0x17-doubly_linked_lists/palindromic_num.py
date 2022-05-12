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
    for i in range(999, 99, -1):
        for j in range(i, 99, -1):
            if is_palidrome(i * j):
                file = open("102-result", "w")
                file.write(str(i * j))
                return


if __name__ == "__main__":
    find_palindrome()
