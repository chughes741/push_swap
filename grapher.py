#!/usr/bin/env python3

from time import sleep
import matplotlib.pyplot as plot


x = [0,10,50,100,150,200,250,300,350,400,450,500]
y = []

with open ('./push_swap_tester/results.txt', 'r') as f:
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
plot.plot(x, y)
# naming the x axis
plot.xlabel('Number Count')
# naming the y axis
plot.ylabel('Moves')
# giving a title to my graph
plot.title('push_swap')
# function to show the plot
plot.show()