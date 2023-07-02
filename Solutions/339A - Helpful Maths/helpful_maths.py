# This problem can be found here: https://codeforces.com/problemset/problem/339/A.

def main():
    line = input().split("+")

    line.sort()

    res = ""
    for num in line:
        res += num + "+"

    print(res[:-1])


if __name__ == "__main__":
    main()
