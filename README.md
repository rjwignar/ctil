# ctil

"Today I learned" Markdown authoring command-line tool written in C++

This is a command-line tool that processes .txt files into .html files

# Installation
The latest version of ctil can be installed using the latest GitHub release.
Left-click the latest release on the right-hand side of the repository page:
![image](https://github.com/rjwignar/ctil/assets/78163326/72142ab1-2849-473e-aaf9-cb490439b68c)

Left-click the **ctilvX.Y.Z.zip** to download the program.
![image](https://github.com/rjwignar/ctil/assets/78163326/8ef2a202-64e5-4c0c-8029-c2853563c304)

The zip fie will contain the program executable file (ctil.exe). For convenience, save the zip file to the directory containing your `.txt` and/or `.md` files:
![image](https://github.com/rjwignar/ctil/assets/78163326/dd4191e6-29e8-4af3-87f3-bd1b858efa32)

Once the zip file has been downloaded, navigate to the directory and extract the zip file using your file decompression software of choice (such as WinRAR, gunzip):
![image](https://github.com/rjwignar/ctil/assets/78163326/acf88607-17bc-4155-a535-a547bf10ccf9)

`ctil.exe` will now be available in your directory for use.

Since ctil is a command-line tool, you must have this directory open in a terminal (such as Windows PowerShell) to use it.
For Windows 10 and above: One way to do this is to enter 'powershell' in the search bar of the file explorer with your directory open:
![image](https://github.com/rjwignar/ctil/assets/78163326/5435ee6b-20ac-4a7a-baf1-0b150c9c3665)

Once the terminal is open, you can refer to the Usage Examples below on how to run ctil.
# Usage Examples
Converting one file (.txt or .md):
`.\ctil.exe test.txt`
or
`.\ctil.exe markdown_test.md`


Convert all text files in a directory
`.\ctil.exe testDirectory`

# More Info About Markdown Support

Now, this tool can also accept Markdown files as input. You can use the same method to acquire and run the tool.

Currently, in the most recent version, only Italics formatting is supported. Additional features will be included in future updates.

**WARNING** If you have files with the same name, e.g., `same-name.txt` and `same-name.md` in a single input folder, the output will generate only one HTML file based on the content of the Markdown file.

# Planned Features
Version Flag
`.\ctil.exe -v`, `.\ctil.exe --version`

Help Flag
`.\ctil.exe -h`, `.\ctil.exe --help`

Output Flag (specifies destination folder for HTML files)
`.\ctil.exe -o destination test.txt`, `.\ctil.exe --output destination test.txt`
