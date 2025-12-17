# Housing Price Prediction Project for 'Practical Exam Machine Learning Lab'

This project predicts house prices (SalePrice) using the Ames Housing dataset. It moves from a simple baseline model to more advanced techniques like log-transformation and automated feature selection.

## Tasks & Methodology

1. Easy: Baseline Linear Regression: Predict price using 5 key numeric features: `OverallQual`, `GrLivArea`, `GarageCars`, `GarageArea`, and `TotalBsmtSF`.
	Reasoning : These features were chosen because they have the highest correlation with house prices.
	Metric : Reported RMSE (Root Mean Squared Error) to measure the average error in dollar amounts.

2. Moderate: Log-Transformation: Improve the model by applying a Natural Log (`np.log`) to the `SalePrice`.
	Reasoning : House prices are "right-skewed" (a few very expensive houses pull the average up). Log-transformation pulls these outliers closer, making the data more "Normal," which helps Linear Regression perform better.
	Result: RMSE decreased to  $32,297.27 from $39,979.43 after this transformation.

3. Hard: Feature Engineering & Lasso: Create new features and use Lasso Regression for selection.
	Engineered Features:
		- TotalSF: Sum of basement and living area.
		- TotalBath: Total count of all bathroom types.
		- HouseAge : How old the house was when sold.
	
	Lasso Reasoning : Lasso (L1 regularization) was used to automatically drop redundant features. It kept 'TotalSF' and 'HouseAge' but dropped 'TotalBath' because its information was already captured by other variables.

## Key Findings
	Size and Quality remain the most important predictors.
	Log-transformation is one of the easiest ways to boost model accuracy in real estate data.
	Lasso is effective at simplifying models by removing features that don't add value.