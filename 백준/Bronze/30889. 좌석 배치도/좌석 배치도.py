N = int(input())
reserved_seats = [input().strip() for _ in range(N)]

seating_chart = [['.' for _ in range(20)] for _ in range(10)]

for seat in reserved_seats:
    row = ord(seat[0]) - ord('A')
    col = int(seat[1:]) - 1
    seating_chart[row][col] = 'o'

for row in seating_chart:
    print(''.join(row))
