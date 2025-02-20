import os

def remove_untranslated_trans_units(input_file):
    removed_count = 0  # Counter to track the number of removed trans-units
    
    with open(input_file, "r", encoding="utf-8") as f:
        lines = f.readlines()
    
    filtered_lines = []
    current_trans_unit = []
    inside_trans_unit = False
    keep_trans_unit = True
    
    for line in lines:
        if "<trans-unit" in line:
            inside_trans_unit = True
            current_trans_unit = [line]
            keep_trans_unit = True
        elif inside_trans_unit:
            current_trans_unit.append(line)
            # Check if the target is empty or contains "[NAB: NOT TRANSLATED]"
            if "<target></target>" in line or ("<target>" in line and "[NAB: NOT TRANSLATED]" in line.upper()):
                keep_trans_unit = False
            if "</trans-unit>" in line:
                inside_trans_unit = False
                if keep_trans_unit:
                    filtered_lines.extend(current_trans_unit)
                else:
                    removed_count += 1  # Increment counter for removed trans-unit
        else:
            filtered_lines.append(line)
    
    # Write the filtered content back to the file
    with open(input_file, "w", encoding="utf-8") as f:
        f.writelines(filtered_lines)
    
    print(f"Removed {removed_count} untranslated or empty-target trans-units from {input_file}")

# Usage example
input_file = "C:/repos/Foot.Fashion.Manager/Foot Fashion Manager/Translations/Foot Fashion Manager.bg-BG.xlf"  # Replace with your actual file name
remove_untranslated_trans_units(input_file)
