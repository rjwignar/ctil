# ctil

"Today I learned" Markdown authoring command-line tool written in C++

This is a command-line tool that processes .txt files into .html files


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
