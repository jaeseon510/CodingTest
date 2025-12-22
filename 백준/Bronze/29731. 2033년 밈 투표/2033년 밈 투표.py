rick_astley_pledges = [
    "Never gonna give you up",
    "Never gonna let you down",
    "Never gonna run around and desert you",
    "Never gonna make you cry",
    "Never gonna say goodbye",
    "Never gonna tell a lie and hurt you",
    "Never gonna stop"
]

N = int(input())
pledges = [input().strip() for _ in range(N)]

is_hacked = any(pledge not in rick_astley_pledges for pledge in pledges)

if is_hacked:
    print("Yes")
else:
    print("No")
