import matplotlib.pyplot as plt

x = [1, 2, 3, 4, 5]
y1 = [i for i in x]         # linear
y2 = [i**2 for i in x]      # quadratic

plt.subplot(1, 2, 1)   # 1 row, 2 cols, first plot
plt.plot(x, y1)
plt.title("Linear")

plt.subplot(1, 2, 2)   # 1 row, 2 cols, second plot
plt.plot(x, y2)
plt.title("Quadratic")

plt.show()
