<!-- omit in toc -->
# Contributing to ctil
First off, thanks for taking the time to contribute! ❤️

All types of contributions are encouraged and valued. See the [Table of Contents](#table-of-contents) for different ways to help and details about how this project handles them. Please make sure to read the relevant section before making your contribution. It will make it a lot easier for us maintainers and smooth out the experience for all involved. The community looks forward to your contributions. 🎉

> And if you like the project, but just don't have time to contribute, that's fine. There are other easy ways to support the project and show your appreciation, which we would also be very happy about:
> - Star the project
> - Tweet about it
> - Refer this project in your project's readme
> - Mention the project at local meetups and tell your friends/colleagues

<!-- omit in toc -->
## Table of Contents

- [I Have a Question](#i-have-a-question)
- [I Want To Contribute](#i-want-to-contribute)
- [Reporting Bugs](#reporting-bugs)
- [Suggesting Enhancements](#suggesting-enhancements)
- [Environment Setup](#environment-setup)
- [Attribution](#attribution)




## I Have a Question

> If you want to ask a question, we assume that you have read the available [Documentation]().

Before you ask a question, it is best to search for existing [Issues](https://github.com/rjwignar/ctil/issues) that might help you. In case you have found a suitable issue and still need clarification, you can write your question in this issue. It is also advisable to search the internet for answers first.

If you then still feel the need to ask a question and need clarification, we recommend the following:

- Open an [Issue](https://github.com/rjwignar/ctil/issues/new).
- Provide as much context as you can about what you're running into.
- Provide project and platform versions (nodejs, npm, etc), depending on what seems relevant.

We will then take care of the issue as soon as possible.

<!--
You might want to create a separate issue tag for questions and include it in this description. People should then tag their issues accordingly.

Depending on how large the project is, you may want to outsource the questioning, e.g. to Stack Overflow or Gitter. You may add additional contact and information possibilities:
- IRC
- Slack
- Gitter
- Stack Overflow tag
- Blog
- FAQ
- Roadmap
- E-Mail List
- Forum
-->

## I Want To Contribute

> ### Legal Notice <!-- omit in toc -->
> When contributing to this project, you must agree that you have authored 100% of the content, that you have the necessary rights to the content and that the content you contribute may be provided under the project license.

### Reporting Bugs

<!-- omit in toc -->
#### Before Submitting a Bug Report

A good bug report shouldn't leave others needing to chase you up for more information. Therefore, we ask you to investigate carefully, collect information and describe the issue in detail in your report. Please complete the following steps in advance to help us fix any potential bug as fast as possible.

- Make sure that you are using the latest version.
- Determine if your bug is really a bug and not an error on your side e.g. using incompatible environment components/versions (Make sure that you have read the [documentation](https://rjwignar.github.io/docusaurus-test.github.io/). If you are looking for support, you might want to check [this section](#i-have-a-question)).
- To see if other users have experienced (and potentially already solved) the same issue you are having, check if there is not already a bug report existing for your bug or error in the [bug tracker](https://github.com/rjwignar/ctilissues?q=label%3Abug).
- Also make sure to search the internet (including Stack Overflow) to see if users outside of the GitHub community have discussed the issue.
- Collect information about the bug:
- Stack trace (Traceback)
- OS, Platform and Version (Windows, Linux, macOS, x86, ARM)
- Version of the interpreter, compiler, SDK, runtime environment, package manager, depending on what seems relevant.
- Possibly your input and the output
- Can you reliably reproduce the issue? And can you also reproduce it with older versions?

<!-- omit in toc -->
#### How Do I Submit a Good Bug Report?

> You must never report security related issues, vulnerabilities or bugs including sensitive information to the issue tracker, or elsewhere in public. Instead sensitive bugs must be sent by email to .
<!-- You may add a PGP key to allow the messages to be sent encrypted as well. -->

We use GitHub issues to track bugs and errors. If you run into an issue with the project:

- Open an [Issue](https://github.com/rjwignar/ctil/issues/new). (Since we can't be sure at this point whether it is a bug or not, we ask you not to talk about a bug yet and not to label the issue.)
- Explain the behavior you would expect and the actual behavior.
- Please provide as much context as possible and describe the *reproduction steps* that someone else can follow to recreate the issue on their own. This usually includes your code. For good bug reports you should isolate the problem and create a reduced test case.
- Provide the information you collected in the previous section.

Once it's filed:

- The project team will label the issue accordingly.
- A team member will try to reproduce the issue with your provided steps. If there are no reproduction steps or no obvious way to reproduce the issue, the team will ask you for those steps and mark the issue as `needs-repro`. Bugs with the `needs-repro` tag will not be addressed until they are reproduced.
- If the team is able to reproduce the issue, it will be marked `needs-fix`, as well as possibly other tags (such as `critical`), and the issue will be left to be implemented by someone.

<!-- You might want to create an issue template for bugs and errors that can be used as a guide and that defines the structure of the information to be included. If you do so, reference it here in the description. -->


### Suggesting Enhancements

This section guides you through submitting an enhancement suggestion for ctil, **including completely new features and minor improvements to existing functionality**. Following these guidelines will help maintainers and the community to understand your suggestion and find related suggestions.

<!-- omit in toc -->
#### Before Submitting an Enhancement

- Make sure that you are using the latest version.
- Read the [documentation]() carefully and find out if the functionality is already covered, maybe by an individual configuration.
- Perform a [search](https://github.com/rjwignar/ctil/issues) to see if the enhancement has already been suggested. If it has, add a comment to the existing issue instead of opening a new one.
- Find out whether your idea fits with the scope and aims of the project. It's up to you to make a strong case to convince the project's developers of the merits of this feature. Keep in mind that we want features that will be useful to the majority of our users and not just a small subset. If you're just targeting a minority of users, consider writing an add-on/plugin library.

<!-- omit in toc -->
#### How Do I Submit a Good Enhancement Suggestion?

Enhancement suggestions are tracked as [GitHub issues](https://github.com/rjwignar/ctil/issues).

- Use a **clear and descriptive title** for the issue to identify the suggestion.
- Provide a **step-by-step description of the suggested enhancement** in as many details as possible.
- **Describe the current behavior** and **explain which behavior you expected to see instead** and why. At this point you can also tell which alternatives do not work for you.
- You may want to **include screenshots and animated GIFs** which help you demonstrate the steps or point out the part which the suggestion is related to. You can use [this tool](https://www.cockos.com/licecap/) to record GIFs on macOS and Windows, and [this tool](https://github.com/colinkeenan/silentcast) or [this tool](https://github.com/GNOME/byzanz) on Linux. <!-- this should only be included if the project has a GUI -->
- **Explain why this enhancement would be useful** to most ctil users. You may also want to point out the other projects that solved it better and which could serve as inspiration.

<!-- You might want to create an issue template for enhancement suggestions that can be used as a guide and that defines the structure of the information to be included. If you do so, reference it here in the description. -->

### Environment Setup
<!--TODO
include Setup of env, IDE, and typical getting started instructions?

-->

#### How to run (using g++)

After cloning the repository, open the repository directory using your preferred terminal (Windows PowerShell is used in this example):
![image](https://github.com/rjwignar/ctil/assets/78163326/017ad25b-349a-47da-8f69-5717190612e3)

Verify you have g++ installed on your machine using the command `g++ --version`:
![image](https://github.com/rjwignar/ctil/assets/78163326/fb560164-f855-4d03-8446-3a45a104a84a)

Once you have verified g++ is on your system, run the following command to compile the source code files (ctil.cpp, source.cpp) into an executable called "ctil":

`g++ -Wall -std=c++17 -g -o ctil ctil.cpp Process.cpp source.cpp fileHandler.cpp`

You can now run ctil as a command-line tool calling the program with a text file as an argument:

`On PowerShell`: `.\ctil.exe test.txt `

![image](https://github.com/rjwignar/ctil/assets/78163326/3749f641-ebbc-41e7-9b05-e34f6423b066)




#### Visual Studio 2019 Setup

##### Clang Tools Setup
ctil is currently developed using Visual Studio 2019 Community Edition Version 16.11.
[clang-format]([ClangFormat — Clang 18.0.0git documentation (llvm.org)](https://clang.llvm.org/docs/ClangFormat.html)) is used as the project code formatter, and [clang-tidy]([Clang-Tidy — Extra Clang Tools 18.0.0git documentation (llvm.org)](https://clang.llvm.org/extra/clang-tidy/)) is used as the code linter. **Both clang-format and clang-tidy** can be installed in your Visual Studio 2019 build. To do this, inlclude the  `C++ Clang tools for Windows (12.0.0.0)` component of the `Desktop development with C++`  workload in your Visual Studio 2019 installation using the `Visual Studio Installer`:
![image](https://github.com/rjwignar/ctil/assets/78163326/449967a8-5adb-43fc-9100-dabd478f2f34)

#### Integrating Clang Tools into Visual Studio 2019 with the Clang Power Tools Extension
Both clang-format and clang-tidy can be integrated into Visual Studio 2019 with the Clang Power Tools Extension. To install Clang Power Tools, from the Visual Studio window left-click Extensions-> Manage Extensions:
![image](https://github.com/rjwignar/ctil/assets/78163326/15145ea0-179e-449e-b284-17cba284247e)

Then search for "Clang Power Tools" in the Extensions search box and Download "Clang Power Tools":
![image](https://github.com/rjwignar/ctil/assets/78163326/55ed2f07-e5c7-46d6-aca4-5cac6efa7c6a)

Installing Clang Power Tools allows you to run `clang-format` and `clang-tidy` from the Visual Studio IDE. To run these tools from the command line, you may need to first [add the clang tools to your PATH]([Add to the PATH on Windows 10 and Windows 11 | Architect Ryan](https://www.architectryan.com/2018/03/17/add-to-the-path-on-windows-10/)) :
`clang-format`, `clang-tidy` and other clang tools should be available in the following path:
`C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\Llvm\bin`.

NOTE: If you receive the following error:
![[Pasted image 20231104175415.png]]
you will have to follow Solution 1 of [this Stackoverflow answer](https://stackoverflow.com/a/34491667) to be able to add the bin folder to your System PATH variable.

Adding the above directory path (or similar) to your System PATH variable will allow you to run `clang-format` and `clang-tidy` from the command line.

##### Formatting with clang-format
To format the source code files, run the following command from the project directory:
`clang-format.exe -style=file -i *.cpp *.h`

##### Linting with clang-tidy
To lint the source code files, run the following command from the project directory:
`clang-tidy --config-file=".clang-tidy" *.cpp *.h`

### Testing Guidelines

#### Testing Environment  (Using Google Test)
[Google Test]([Google Test]([url](https://github.com/google/googletest)) is the testing environemnt. The Google Test documentation provides a [primer]([url](https://google.github.io/googletest/primer.html)) to familiarize first-time users.
Specifically, Google Test v140 is used and can be directly added to your Visual Studio installation. Please follow [this step]([Use Google Test for C++ - Visual Studio (Windows) | Microsoft Learn](https://learn.microsoft.com/en-us/visualstudio/test/how-to-use-google-test-for-cpp?view=vs-2022#add-a-google-test-project-in-visual-studio-2022)) to ensure the "Test Adapter for Google Test" component is added to your Visual Studio installation. Please note this step will work and add Google Test support to Visual Studio 2017 and later.) is the testing environemnt. Specifically, Google Test v140 is used and can be directly added to your Visual Studio installation. Please follow [this step]([Use Google Test for C++ - Visual Studio (Windows) | Microsoft Learn](https://learn.microsoft.com/en-us/visualstudio/test/how-to-use-google-test-for-cpp?view=vs-2022#add-a-google-test-project-in-visual-studio-2022)) to ensure the "Test Adapter for Google Test" component is added to your Visual Studio installation. Please note this step will work and add Google Test support to Visual Studio 2017 and later.

Google Test is already integrated into the solution file. After opening ctil.sln, you will see two projects: ctil and testLibrary (Google Test).
![image](https://github.com/rjwignar/ctil/assets/78163326/8874dbba-b36b-4a93-8fd6-37024f4a0c12)


Running the `ctil` project will run the main program. Running the `testLibrary` project will run unit tests.
To select between the two, right-click either project and left-click "Set as Startup Project"
![image](https://github.com/rjwignar/ctil/assets/78163326/7ce49980-a8f8-4431-94e7-b49d4aebd4b6)


#### Adding Tests
Unit Tests currently exist in `test.cpp`.
Unit Tests for each module will have a TestSuiteName of `ModuleTest`:
For example, unit tests on the `ctil` module will use the `CtilTest` TestSuiteName


If `ctil` source code is being modified as part of test-driven development (need to check if new code satisfies test), you will need to rebuild both solutions so the Google Test `testLibrary` project will be aware of the new changes:
![image](https://github.com/rjwignar/ctil/assets/78163326/8512fcaa-1a94-49d8-a4aa-f1f283ac66c8)



#### Test Environment Caveats
- Google Tests currently has no native support for a coverage report, at least as far as I'm aware.
- There are currently no plans to add external libraries that provide test coverage reports

#### How to run ctil (using Visual Studio 2019)

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

## Attribution
This guide is based on the **contributing-gen**. [Make your own](https://github.com/bttger/contributing-gen)!
