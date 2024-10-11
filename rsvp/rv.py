import pandas as pd

# Load the CSV file
file_path = 'final_responses - Form Responses 1.csv'
df = pd.read_csv(file_path)

# Display the first few rows of the file to understand its structure
df.head()
