import matplotlib.pyplot as plt


x = [0,1,1,2,2,3,3,4,4,5,5,6,6,7]
y = [0,0,1,1,0,0,1,1,0,0,1,1,0,0]

plt.plot(x,y,linewidth=10)
plt.ylim(-1,3)
plt.show()
