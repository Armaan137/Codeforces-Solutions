# This problem can be found here: https://codeforces.com/problemset/problem/1095/A.

def main():
    n = int(input())
    t = input()

    s = ""
    i, j = 0, 2
    while i < n:
        s += t[i]
        i += j
        j += 1

    print(s)


if __name__ == '__main__':
    main()
