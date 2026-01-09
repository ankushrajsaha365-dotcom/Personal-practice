from matplotlib import pyplot as plt

x1=[2,2,8,0,5]
y1=[5,7,5,1,7]

x2=[4,7,7,4,3]
y2=[2,9,1,7,9]

x3=[7,0,3,2,9]
y3=[2,5,8,3,0]

plt.plot(x1,y1)
plt.plot(x2,y2)
plt.plot(x3,y3)

plt.title("Graph")
plt.xlabel("X")
plt.ylabel("Y")
plt.show()