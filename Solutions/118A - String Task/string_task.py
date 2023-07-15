# This problem can be found here: https://codeforces.com/problemset/problem/118/A.

def main():
    s = list(input())
    vowels = {"A", "O", "Y", "E", "U", "I"}

    res = ""
    for char in s:
        if char.upper() not in vowels:
            res += "." + char.lower()

    print(res)


if __name__ == '__main__':
    main()
