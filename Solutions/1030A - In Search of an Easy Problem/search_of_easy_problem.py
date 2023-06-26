# This problem can be found here: https://codeforces.com/problemset/problem/1030/A.

def main():
    _ = int(input())
    line = set(input().split(" "))

    if "1" in line:
        print("HARD")
    else:
        print("EASY")


if __name__ == "__main__":
    main()
