# CTF Challenge: Hidden Treasures

### Challenge Description:
During a digital forensics investigation, an image was discovered on a suspect's device. The investigators believe that crucial information is hidden within the file, but it’s not immediately visible. Can you extract the hidden data?

The flag is hidden inside the image, but a password is required to extract it. A clue is buried in the image metadata itself. Use your forensic and steganography skills to find the password and retrieve the flag!

### Requirements:
- Linux-based OS or any system with `ExifTool` and `Steghide` installed.

### Tools:
- **ExifTool**: To inspect and manipulate metadata.
- **Steghide**: To hide and extract data from images using steganography.

### Instructions:

#### Step 1: Analyze the Image Metadata
Start by inspecting the metadata of the image to look for clues. Use **ExifTool** to find the hidden password.

```bash
exiftool ctf_challenge_image.jpg
