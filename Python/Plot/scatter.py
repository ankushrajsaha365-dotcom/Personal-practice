import matplotlib.pyplot as plt

x = [5, 7, 8, 7, 2, 17, 2, 9]
y = [99, 86, 87, 88, 100, 86, 103, 87]

#plt.scatter(x, y)
plt.scatter(x, y, color="green", marker="^", s=100, alpha=0.7)

plt.xlabel("X values")
plt.ylabel("Y values")
plt.title("Scatter Plot")
plt.show()
