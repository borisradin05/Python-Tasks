import os

def extract_untranslated_trans_units(input_file):
    untranslated_units = []
    
    with open(input_file, "r", encoding="utf-8") as f:
        lines = f.readlines()
    
    current_trans_unit = []
    inside_trans_unit = False
    
    for line in lines:
        if "<trans-unit" in line:
            inside_trans_unit = True
            current_trans_unit = [line]
        elif inside_trans_unit:
            current_trans_unit.append(line)
            if "</trans-unit>" in line:
                inside_trans_unit = False
                # Check if the trans-unit contains an untranslated target
                if any("[NAB: NOT TRANSLATED]" in l.upper() for l in current_trans_unit):
                    untranslated_units.append("".join(current_trans_unit))
    
    # Determine output file path in the same folder as input file
    output_file = os.path.join(os.path.dirname(input_file), "untranslated_trans_units.txt")
    
    # Write the extracted trans-units to a new file
    with open(output_file, "w", encoding="utf-8") as f:
        f.write("".join(untranslated_units))
    
    print(f"Extracted {len(untranslated_units)} untranslated trans-units to {output_file}")

# Usage example
input_file = "C:/repos/Foot.Fashion.Manager/Foot Fashion Manager/Translations/Foot Fashion Manager.bg-BG.xlf"  # Replace with your actual file name
extract_untranslated_trans_units(input_file)
