import matplotlib.pyplot as plt

x = [1, 2, 3, 4, 5]
y1 = [i for i in x]         # linear
y2 = [i**2 for i in x]      # quadratic
y3 = [i**3 for i in x]
y4 = [i**4 for i in x]


plt.subplot(2, 2, 1)   
plt.plot(x, y1)
plt.title("Linear")

plt.subplot(2, 2, 2)   
plt.plot(x, y2)
plt.title("Quadratic")

plt.subplot(2, 2, 3)   
plt.plot(x, y2)
plt.title("Cubic")

plt.subplot(2, 2, 4)   
plt.plot(x, y2)
plt.title("Biquadratic")

plt.show()
