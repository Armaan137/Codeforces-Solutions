# This problem can be found here: https://codeforces.com/problemset/problem/510/A.

def main():
    n, m = map(int, input().split(" "))
    grid = ""

    for i in range(n):
        if i % 2 == 0:
            grid += "#" * m + "\n"
        else:
            if i % 4 == 1:
                grid += "." * (m - 1) + "#" + "\n"
            else:
                grid += "#" + "." * (m - 1) + "\n"

    print(grid)


if __name__ == "__main__":
    main()
