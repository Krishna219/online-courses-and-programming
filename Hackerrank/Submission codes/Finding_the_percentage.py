if __name__ == '__main__':
    n = int(raw_input())
    student_marks = {}
    for _ in range(n):
        line = raw_input().split()
        name, scores = line[0], line[1:]
        scores = map(float, scores)

        avg_score = round(float(sum(scores))/len(scores), 2)
        student_marks[name] = [scores, avg_score]
    query_name = raw_input()

    print "%.2f" % student_marks[query_name][1]
