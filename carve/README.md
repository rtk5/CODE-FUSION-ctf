# carve


<br/>


## Challenge Description :

My friend sent me this file in an attempt to communicate secretly. Wonder what the message is?


<br/>


## Flag :

`IEEE{C0d4_M4ch-*ln}`


<br/>


## Solution :

- Upon Googling the given code or using ChatGPT, we realize that the given file is `G-Code`.
- Search online for `G-Code` simulators and simulate the given code to get the flag : https://nraynaud.github.io/webgcode/




## G code generation:
gcode -->>>> type in inkscape,With the text still selected, convert it to a path by going to Path > Object to Path or pressing Shift + Ctrl + C.
Save the file as a DXF (Drawing Exchange Format), which is commonly used for G-code generation. Go to File > Save As and choose Desktop Cutting Plotter (AutoCAD DXF R14) (*.dxf) from the file type dropdown.
https://cnc-apps.com/en/app/dxf2gcode#google_vignette
https://nraynaud.github.io/webgcode/