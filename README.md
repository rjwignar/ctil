# ctil

"Today I learned" Markdown authoring command-line tool written in C++

This is a command-line tool that processes .txt files into .html files

# How to run (using g++)

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
