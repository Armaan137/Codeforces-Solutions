# this problem can be found here: https://codeforces.com/problemset/problem/32/B.

def main():
    s = input()

    res = ""
    i = 0
    while i < len(s):
        if s[i] == ".":
            res += "0"
            i += 1
        elif s[i] == "-" and s[i + 1] == ".":
            res += "1"
            i += 2
        else:
            res += "2"
            i += 2

    print(res)


if __name__ == '__main__':
    main()
