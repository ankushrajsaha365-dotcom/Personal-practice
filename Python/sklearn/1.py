import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn.metrics import mean_squared_error
data = {
    "hours_studied": [1,2,3,4,5,6,7,8,9,10],
    "marks": [10,20,30,35,50,60,65,70,85,95]
}

df = pd.DataFrame(data)
X = df[["hours_studied"]]   # Features
y = df["marks"]             # Target
X_train, X_test, y_train, y_test = train_test_split(
    X, y, test_size=0.2, random_state=42)
model = LinearRegression()
model.fit(X_train, y_train)
predictions = model.predict(X_test)
print(predictions)
mse = mean_squared_error(y_test, predictions)
print("Mean Squared Error:", mse)
