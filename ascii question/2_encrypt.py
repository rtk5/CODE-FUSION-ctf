# Function to apply the Atbash cipher to a sentence
def atbash_cipher(sentence):
    # Define the Atbash cipher mapping for lowercase and uppercase letters
    atbash_dict = {chr(i): chr(219 - i) for i in range(97, 123)}  # for 'a' to 'z'
    atbash_dict.update({chr(i): chr(155 - i) for i in range(65, 91)})  # for 'A' to 'Z'
    
    # Apply the cipher
    encrypted_sentence = ''.join([atbash_dict[char] if char in atbash_dict else char for char in sentence])
    return encrypted_sentence

# Example usage
if __name__ == "__main__":
    # Assuming you have the output from 1_encrypt.py saved to a variable or passed as input
    # For this example, let's assume it's passed as input from the previous output
    reversed_sentence = input("Enter the reversed sentence: ")

    # Apply Atbash cipher
    atbash_encrypted_sentence = atbash_cipher(reversed_sentence)
    print(atbash_encrypted_sentence)


