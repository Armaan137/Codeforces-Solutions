# https://codeforces.com/contest/1808/problem/B

def main():
    t = int(input())

    for _ in range(t):
        total_chips = 0
        n, m = map(int, input().split())

        cards = []
        for _ in range(n):
            cards.append(list(map(int, input().split())))

        cols = list(map(list, zip(*cards)))

        for column in cols:
            sorted_col = sorted(column)
            curr_sum = 0
            for i in range(n):
                total_chips += sorted_col[i] * i - curr_sum
                curr_sum += sorted_col[i]

        print(total_chips)


if __name__ == '__main__':
    main()
