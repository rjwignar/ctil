# ctil

"Today I learned" Markdown authoring command-line tool written in C++

This is a command-line tool that processes .txt files into .html files


# How to run (using g++)

After cloning the repository, open the repository directory using your preferred terminal (Windows PowerShell is used in this example):
![image](https://github.com/rjwignar/ctil/assets/78163326/017ad25b-349a-47da-8f69-5717190612e3)

Verify you have g++ installed on your machine using the command `g++ --version`:
![image](https://github.com/rjwignar/ctil/assets/78163326/fb560164-f855-4d03-8446-3a45a104a84a)

Once you have verified g++ is on your system, run the following command to compile the source code files (ctil.cpp, source.cpp) into an executable called "ctil":

`g++ -Wall -std=c++17 -g -o ctil ctil.cpp Process.cpp source.cpp`

You can now run ctil as a command-line tool calling the program with a text file as an argument:

`On PowerShell`: `.\ctil.exe test.txt `

![image](https://github.com/rjwignar/ctil/assets/78163326/3749f641-ebbc-41e7-9b05-e34f6423b066)





# How to run (using Visual Studio 2019)

After cloning the repository, open ctil.sln

This program takes files as command-line arguments.
To convert text files to HTML from the project, you must add them as command-line arguments.
To do so, first right-click the solution in the Solution Explorer, then left-click Properties to open the project's Property Pages:
![image](https://github.com/rjwignar/ctil/assets/78163326/a819e390-c5dc-43bc-b633-110f2c8aaa79)

From the Property Pages, left-click the "Debugging" submenu under "Configuration Properties":
![image](https://github.com/rjwignar/ctil/assets/78163326/a31bac36-ebab-4c65-a88a-3a70f3bf0aca)

Under "Command Arguments", enter the name of the text file you would like to convert to HTML.
The repository contains test.txt to be used for example purposes, feel free to enter that.
When you have entered your desired text file, left-click "OK" to save your changes.
![image](https://github.com/rjwignar/ctil/assets/78163326/231dff5c-acc0-47fe-a8a4-33564bb4f89e)

You can now run the program by left-clicking the green "Play" button in Visual Studio or by entering "Ctrl + F5" on your keyboard:
![image](https://github.com/rjwignar/ctil/assets/78163326/8f8b34d0-d4ef-4d8a-a402-e136ba074800)

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
