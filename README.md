# c-Learning
This is my path to learn C++


### How to run C++ code in mac:

macOS: Xcode
If you’re running macOS, you should install the Xcode development environment.
1. Open the App Store.
2. Search for and install the Xcode IDE. Installation might take more than an hour depending on the speed of your machine and internet connection. When installation is complete, open Terminal and navigate to the directory where you’ve saved main.cpp.
3. Enter clang++ main.cpp -o hello in the Terminal to compile your program. The -o option tells the tool chain where to write the output. (If any compiler errors appear, check that you’ve entered the program correctly.)
4. Enter ./hello in the Terminal to run your program. The text Hello, world! should appear onscreen.

To compile and run your program, open the Xcode IDE and follow these steps:

1. Select File ▸ New ▸ Project.
2. Select macOS ▸ Command Line Tool and click Next. In the next dialog, you can modify where to create the project’s file directory. For now, accept the defaults and click Create.
3. Name your project hello and set its Type to C++. See Figure 1-3.
4. You now need to import your code from Listing 1-1 into your project. An easy way to do this is to copy and paste the contents of main.cpp into your project’s main.cpp. Another way is to use Finder to replace your main.cpp into your project’s main.cpp. (Normally you won’t have to handle this when creating new projects. It’s just an artifact of this tutorial having to handle multiple operating environments.)
5. Click Run.
