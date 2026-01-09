import matplotlib.pyplot as plt

x = [1, 2, 3, 4, 5]

y1 = [1, 2, 3, 4, 5]
y2 = [1, 4, 9, 16, 25]
y3=[]
for i in x:
    j=i**3
    y3.append(j)
    

plt.plot(x, y1, label="y = x")
plt.plot(x, y2, label="y = x²")
plt.plot(x, y3, label="y = x3")

plt.xlabel("X-axis")
plt.ylabel("Y-axis")
plt.grid("true")
plt.title("Multiple Lines Example")
plt.legend()
plt.show()
