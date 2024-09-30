def reverse_words(sentence):
    # Split the sentence into words based on spaces
    words = sentence.split(' ')
    
    # Reverse each word individually, keeping slashes and dots as is
    reversed_words = []
    for word in words:
        # Check if the word contains slashes or dots
        if '/' in word or '.' in word:
            # Handle cases with slashes
            if '/' in word:
                parts = word.split('/')
                reversed_parts = [part[::-1] for part in parts]
                reversed_word = '/'.join(reversed_parts)
            # Handle cases with dots
            elif '.' in word:
                parts = word.split('.')
                reversed_parts = [part[::-1] for part in parts]
                reversed_word = '.'.join(reversed_parts)
        else:
            # Reverse the entire word if no special characters
            reversed_word = word[::-1]

        reversed_words.append(reversed_word)

    # Join the reversed words back into a sentence
    return ' '.join(reversed_words)


# Example usage
sentence = "Happy adventurers search through experiences, building ideas naturally.Curiosity opens minds.Smart humans always reach elevated xcellence, inventing great unique zealous objectives.Confidence shapes hard actions, reviving potential."
#Include dot and slash where required.
reversed_sentence = reverse_words(sentence)
print(reversed_sentence)
