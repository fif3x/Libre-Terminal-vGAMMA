#include "FOSS-LT_HEADERSvGAMMA/othrFOSS-LT.h"
#include "FOSS-LT_HEADERSvGAMMA/management.h"
#include <cstdlib>
#include <string>
#include <iostream>
#include <string>
#include <fstream>

bool allowFileManagement = false;

std::string fileName;

void quitToDesktop(){
    exit(0); //execute the command
};
void allowFileManagementTRUE(){
    allowFileManagement = true;
}
void allowFileManagementFALSE(){
    allowFileManagement = false;
}
void parrot(){
    system("curl parrot.live"); //execute the command
};
void changeColor(){
    std::string color; //string color
    std::cout << "Color you want to change to (If you don't know, you can type Help to list commands.): ";
    std::getline(std::cin, color); //get the input
    if (color == "black" || color == "Black"){
        system("color 0");
    }
    else if (color == "blue" || color == "Blue"){
        system("color 1");
    }
    else if (color == "green" || color == "Green"){
        system("color 2");
    }
    else if (color == "aqua" || color == "Aqua"){
        system("color 3");
    }
    else if (color == "red" || color == "Red"){
        system("color 4");
    }
    else if (color == "purple" || color == "Purple"){
        system("color 5");
    }
    else if (color == "yellow" || color == "Yellow"){
        system("color 6");
    }
    else if (color == "white" || color == "White"){
        system("color 7");
    }
    else if (color == "gray" || color == "Gray"){
        system("color 8");
    }
    else if (color == "light_blue" || color == "Light_Blue"){
        system("color 9");
    }
    else if (color == "light_green" || color == "Light_Green"){
        system("color A");
    }
    else if (color == "light_aqua" || color == "Light_Aqua"){
        system("color B");
    }
    else if (color == "light_red" || color == "Light_Red"){
        system("color C");
    }
    else if (color == "light_purple" || color == "Light_Red"){
        system("color D");
    }
    else if (color == "light_yellow" || color == "Light_Yellow"){
        system("color E");
    }
    else if (color == "bright_white" || color == "Bright_White"){
        system("color F");
    }
};
void listCommands(){
    std::cout << "Commands:" << std::endl;
    std::cout << "1.show ip - shows IP (ipconfig)" << std::endl;
    std::cout << "2.exit - Exit program" << std::endl;
    std::cout << "3.parrot - shows a colourful animated parrot (curl parrot.live)" << std::endl;
    std::cout << "4.ping - pings an IP that is chosen" << std::endl;
    std::cout << "5.color - changes the terminal colors" << std::endl;
    std::cout << "-----color options: black, blue, green, aqua, red, purple, yellow, white, gray, light_blue, light_green, light_aqua, light_red, light_purple, light_yellow, bright_white" << std::endl;
    std::cout << "6.traceroute - traces an IP" << std::endl;
    std::cout << "7.systemInfo - shows the information of your system | alternatives to call the command: info, ssi, showSystemInfo, showInfo" << std::endl;
    std::cout << "8.netstats - shows the stats of your network | alternatives to call the command: stats, stat, netStats, netStat" << std::endl;
    std::cout << "9.run - runs a file with a specific path given | alternatives to call the command: file, openFile" << std::endl;
    std::cout << "10.compileCPP - compiles a C++ file with a specific path given | alternatives to call the command: compileC++" << std::endl;
    std::cout << "11.name - shows Hostname" <<  std::endl;
    std::cout << "12.listFiles - shows a list of the files in a current directory" << std::endl;
    std::cout << "13.browseFiles - you browse files with this command" << std::endl;
    std::cout << "14.fileTree - shows you a tree of all the files" << std::endl;
    std::cout << "15. @<SAFEMODE-OFF> - turns off safemode NOTE: IT ALLOWS YOU TO USE COMMANDS THAT MAY HARM FILES/YOUR COMPUTER/ANYTHING! - to revert: @<SAFEMODE-ON>" << std::endl;
    std::cout << "16. removeFile - removes a file | NEEDS SAFEMODE TO BE TURNED OFF | alternatives to call the command: rf" << std::endl;
    std::cout << "17. @<allowFileManagement-FALSE> - sets allowFileManagement to false - to revert: @<allowFileManagement-TRUE>" << std::endl;
    std::cout << "18. manageFile - manages files (writing, reading) | alternatives to call command: fileManagement, mf" << std::endl;
};
void fileManagement(){
    std::string operation;
    std::string text;
    std::cout << "Select operation: 1) Write to/Create a file, 2) Read from a file: ";
    getline(std::cin, operation);
    if (operation == "1"){
        std::cout << "File name (must be in same folder as the .exe file): ";
        std::getline(std::cin, fileName);
        std::ofstream file(fileName);
        std::cout << "Message: ";
        std::string message;
        std::getline(std::cin, message);
        file << message;
    }
    if (operation == "2"){
        std::cout << "File name (must be in same folder as the .exe file): ";
        std::getline(std::cin, fileName);
        std::ifstream file(fileName);
        while (getline(file, text)){
            std::cout << text;
        }
        std::cout << "\n";
    }
    
};