# https://codeforces.com/problemset/problem/1890/A
import math


def main():
    t = int(input())

    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        a_set = set(a)

        # elements in positions of the same parity should have the same value.
        # if there is only a single value element in the array, print yes.
        # if there are 2 different values but one of them appears exactly floor(n / 2) times, print yes.
        # otherwise we cannot make the array good.
        if len(a_set) == 1:
            print("YES")
        elif len(a_set) == 2:
            one, two = a_set
            if a.count(one) == math.floor(n / 2) or a.count(two) == math.floor(n / 2):
                print("YES")
            else:
                print("NO")
        else:
            print("NO")


if __name__ == '__main__':
    main()
