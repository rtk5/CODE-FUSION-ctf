def ascii_to_string(ascii_values):
    # Convert a comma-separated string of ASCII values to a string
    return ''.join(chr(int(value)) for value in ascii_values.split(','))

def atbash_cipher(text):
    # Create a mapping for Atbash cipher
    alphabet = 'abcdefghijklmnopqrstuvwxyz'
    atbash = alphabet[::-1]
    table = str.maketrans(alphabet + alphabet.upper(), atbash + atbash.upper())
    return text.translate(table)

def decode_and_reverse(text):
    # Apply Atbash cipher and reverse the string
    return atbash_cipher(text)[::-1]

def process_encoded_data(encoded_data):
    decoded_messages = []
    for encoded in encoded_data:
        # Convert list of integers to a comma-separated string
        ascii_values = ','.join(map(str, encoded))
        decoded_message = decode_and_reverse(ascii_to_string(ascii_values))
        decoded_messages.append(decoded_message)
    return decoded_messages

# List of encoded sequences as lists of integers
encoded_sequences = [
    [98,107,107,122,83],
    [119,109,122],
    [103,105,122,110,104],
    [104,109,118,118,103],
    [98,111,105,118,116,122,118],
    [109,114,116,118,121],
    [44,116,109,114,103,122,101,108,109,109,114],
    [116,109,114,103,122,116,114,101,122,109],
    [104,118,116,109,118,111,111,122,115,120],
    [117,108],
    [98,103,114,109,105,118,119,108,110,46],
    [116,109,114,105,122,115,72],
    [44,104,118,114,121,121,108,115],
    [44,104,109,108,114,99,114,121,110,122],
    [118,120,109,118,114,111,114,104,118,105],
    [104,118,116,105,118,110,118,46],
    [104,122,118,119,82],
    [44,119,122,118,105,107,104],
    [116,109,114,97,114,116,105,118,109,118],
    [44,104,103,104,118,102,106],
    [116,109,114,119,109,122,107,99,118],
    [44,110,108,119,104,114,100],
    [116,109,114,103,117,114,111,107,102],
    [103,118,114,102,106],
    [109,122,121,105,102],
    [104,105,118,105,108,111,107,99,46],
    [98,111,104,102,108,118,116,122,105,102,108,88],
    [116,109,114,101,111,108,104],
    [119,105,122,115],
    [44,104,110,115,103,114,105,108,116,111,122],
    [116,109,114,109,114,117,118,105],
    [104,110,118,111,121,108,105,107,46]
]

decoded_results = process_encoded_data(encoded_sequences)

# Output results
for result in decoded_results:
    print(result)
