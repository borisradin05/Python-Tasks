import re
import os
from googletrans import Translator

# Initialize the Google Translator
translator = Translator()

# Function to translate and replace target text
def translate_and_replace_target(text):
    # Regular expression to match <source>...</source> and its corresponding <target>...</target>
    pattern = r'(<source>)(.*?)(</source>)(\s*<target>)(.*?)(</target>)'
    
    def translate_match(match):
        # Extract the source text (the text inside <source>...</source>)
        source_text = match.group(2)
        
        # Translate the source text into Bulgarian
        translated_text = translator.translate(source_text, src='en', dest='bg').text
        
        # Replace the <target> tag with the translated text
        return match.group(1) + source_text + match.group(3) + match.group(4) + translated_text + match.group(6)

    # Use re.sub() to apply the translation to every matching <source>...</source> and <target>...</target> pair
    return re.sub(pattern, translate_match, text)

# Function to process the input file and save the output in the same folder
def process_file(input_file_path):
    # Read the content of the file
    with open(input_file_path, 'r', encoding='utf-8') as file:
        input_text = file.read()
    
    # Translate and update the file content
    translated_text = translate_and_replace_target(input_text)
    
    # Get the directory of the input file
    file_directory = os.path.dirname(input_file_path)
    
    # Generate the output file path (the same name as input but with '_translated' added before the file extension)
    output_file_path = os.path.join(file_directory, 'translated_' + os.path.basename(input_file_path))
    
    # Write the updated content to the output file
    with open(output_file_path, 'w', encoding='utf-8') as file:
        file.write(translated_text)

    print(f"Translation completed. The updated content is saved to {output_file_path}")

# Example file path
input_file = 'C:/repos/Foot.Fashion.Manager/Foot Fashion Manager/Translations/untranslated_trans_units.txt'  # Replace with the path to your input file

# Call the process_file function to update the file
process_file(input_file)
