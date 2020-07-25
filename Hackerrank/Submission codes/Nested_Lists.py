data = {}
scores = []
for _ in range(int(raw_input())):
    name = raw_input()
    score = float(raw_input())
    data[name] = score
    scores.append(score)

min2 = sorted(scores)[1]
#print sorted(data, key=lambda l:l[1])

srt_names = []
for k, v in data.items():
    if v == min2:
        srt_names.append(k)

for val in srt_names:
    print val
