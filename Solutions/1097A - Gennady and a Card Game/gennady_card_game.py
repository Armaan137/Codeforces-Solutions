# This problem can be found here: https://codeforces.com/problemset/problem/1097/A.

def main():
    card = input()
    hand = input().split(" ")

    ranks = set()
    suits = set()
    for c in hand:
        ranks.add(c[0])
        suits.add(c[1])

    if card[0] in ranks or card[1] in suits:
        print("YES")
    else:
        print("NO")


if __name__ == '__main__':
    main()
