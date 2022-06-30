#!/usr/bin/env python3

from time import sleep
import matplotlib.pyplot as plot


x = [0,10,50,100,150,200,250,300,350,400,450,500]
y = [0]

best = [0,44,316,700,1132,1612,2140,2716,3340,4012,4732,5500]
worst = [0,82,675,1500,2420,3430,4540,5745,7040,8430,9920,11500]

with open ('./results.txt', 'r') as f:
    while True:
        temp = ""
        line = f.readline()
        if not line:
            break
        for c in line:
            if c.isdigit():
                temp = temp + c
        y.append(int(temp))


# plotting the points
plot.plot(x, y, 'k-')
plot.plot(x, best, 'g-')
plot.plot(x, worst, 'b-')

plot.xlabel('Number Count')
plot.ylabel('Moves')
plot.title('push_swap')
plot.show()