# https://codeforces.com/problemset/problem/1900/A

def main():
    t = int(input())

    for _ in range(t):
        n = int(input())
        s = input()

        # if we have 3 consecutive cells available, we only need to perform task 1 twice.
        # then we can just do task 2 however many times needed.
        # if we don't have 2 consecutive cells, that means we must fill all of them individually.
        if "..." in s:
            print(2)
        else:
            print(s.count("."))


if __name__ == '__main__':
    main()
