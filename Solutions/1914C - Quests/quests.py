# https://codeforces.com/problemset/problem/1914/C

def main():
    t = int(input())

    for _ in range(t):
        n, k = map(int, input().split())
        a = list(map(int, input().split()))
        b = list(map(int, input().split()))

        # keep track of the current best score we can get by completing the first quest and repeating it.
        first = a[0]
        best = b[0]
        curr_max = first + best * (k - 1)

        for i in range(1, min(n, k)):
            # calculate a new potential maximum by getting the highest score giving repeatable quest and
            # adding the score for the first completion.
            best = max(best, b[i])
            first += a[i]
            curr_max = max(curr_max, first + best * (k - i - 1))

        print(curr_max)


if __name__ == '__main__':
    main()
