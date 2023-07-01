# This problem can be found here: https://codeforces.com/problemset/problem/791/A.

def main():
    a, b = map(int, input().split(" "))

    yrs = 0
    while a <= b:
        a *= 3
        b *= 2
        yrs += 1

    print(yrs)


if __name__ == "__main__":
    main()
