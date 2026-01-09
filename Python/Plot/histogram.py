import matplotlib.pyplot as plt

data = [1,1,2,2,2,3,3,3,3,4,4,4,5,5,5,5,5,6,7,8,9]

plt.hist(data, bins=5, color="skyblue",  edgecolor="black")
# plt.hist(data, bins=10, color="skyblue",  edgecolor="black")
plt.title("Histogram Example")
plt.show()
