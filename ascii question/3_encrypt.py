import csv

def process_text_to_ascii(text):
    # Split the text into words based on any whitespace
    words = text.split()
    
    # Process each word to convert characters to their ASCII values
    ascii_lines = []
    for word in words:
        ascii_values = [str(ord(char)) for char in word]
        ascii_lines.append(ascii_values)  # List of ASCII values for each word
    
    return ascii_lines

def write_to_csv(filename, data):
    # Write the data to a CSV file
    with open(filename, mode='w', newline='') as file:
        writer = csv.writer(file)
        for line in data:
            writer.writerow(line)  # Write each list of ASCII values as a row

if __name__ == "__main__":
    # Take manual input
    text = input("Enter the text: ")

    # Process the text
    ascii_lines = process_text_to_ascii(text)

    # Write to CSV
    write_to_csv('ascii_values.csv', ascii_lines)
    print("CSV file 'ascii_values.csv' has been created.")
