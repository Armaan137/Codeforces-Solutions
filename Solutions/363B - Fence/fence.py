def main():
    n, k = map(int, input().split())
    planks = list(map(int, input().split()))

    # calculate the sum of the first window.
    total = sum(planks[:k])  
    minimum = total
    index = 0

    # slide the window over, updating the sum by subtracting what has left and adding what has entered the window.
    for i in range(1, n - k + 1):
        total = total - planks[i - 1] + planks[i + k - 1]

        # keep track of the minimum and the index.
        if total < minimum:
            minimum = total
            index = i

    print(index + 1) 

if __name__ == '__main__':
    main()

