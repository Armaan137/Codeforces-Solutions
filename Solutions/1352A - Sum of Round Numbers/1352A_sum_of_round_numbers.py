# This problem can be found here: https://codeforces.com/problemset/problem/1352/A.

def main():
    t = int(input())

    for _ in range(t):
        line = input()
        if len(line) == 1 or int(line) == int(line[0]) * (10 ** (len(line) - 1)):
            print("1")
            print(line)
            continue
        summ = []
        for i, char in enumerate(line):
            if char != "0":
                summ.append(str(int(char) * (10 ** (len(line) - i - 1))))
        print(len(summ))
        print(" ".join(summ))


if __name__ == "__main__":
    main()
