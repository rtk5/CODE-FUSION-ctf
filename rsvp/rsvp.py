import qrcode

# Function to generate and save QR code for each participant
def generate_qr_codes(dataframe, name_col, email_col, srn_col):
    for idx, row in dataframe.iterrows():
        participant_name = row[name_col]
        participant_email = row[email_col]
        participant_srn = row[srn_col]
        
        # Combine the information into a single string
        qr_data = f"Name: {participant_name}\nEmail: {participant_email}\nSRN: {participant_srn}"
        
        # Generate QR code
        qr_img = qrcode.make(qr_data)
        
        # Save the QR code as an image with participant name in the filename
        qr_img.save(f"/mnt/data/QR_{participant_name}_{participant_srn}.png")

# Generate QR codes for "Participant 1" information
generate_qr_codes(df, 'Name of Participant 1', 'E-Mail of Participant 1', 'SRN of Participant 1')

# Listing the generated files to confirm
import os
generated_files = os.listdir('/mnt/data/')
generated_files
