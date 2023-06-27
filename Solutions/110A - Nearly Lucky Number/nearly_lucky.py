# This problem can be found here: https://codeforces.com/problemset/problem/110/A.

def main():
    n = input()

    lucky = 0
    for num in n:
        if num == "4" or num == "7":
            lucky += 1

    if set(str(lucky)).issubset(set("47")):
        print("YES")
    else:
        print("NO")


if __name__ == "__main__":
    main()
