#include <iostream>
#include <cstdlib>
#include <string>
#include "FOSS-LT_HEADERSvGAMMA/systmFOSS-LT.h"
#include "FOSS-LT_HEADERSvGAMMA/management.h"

bool safeMode = true;

std::string fileLocation; //declare fileLocation as a string

void showSystemInfo(){
    system("systeminfo"); //execute the command
};
void openFile(){
    std::cout << "File Location (Enter full path): ";
    std::getline(std::cin, fileLocation); //get fileLocation and store it
    system(fileLocation.c_str()); //execute the command
};
void compileCPP(){
    std::cout << "File Location (Enter full path): ";
    std::getline(std::cin, fileLocation); //get fileLocation and store it
    std::string compileCPPcommand = "g++" + fileLocation; //make the compiling cpp command - IT USES g++, NOT OTHER COMPILER (you can change it if you want ofc)
    system(compileCPPcommand.c_str());
};
void showName(){
    system("hostname"); //execute the command
};
void listFiles(){
    system("dir"); //execute the command
};
void browseFiles(){
    std::cout << "Go to file (Enter Path): "; 
    std::cin >> fileLocation; //get fileLocation
    std::cout << "Saved Location" << std::endl;
    std::string browseFilesCommand = "cd " + fileLocation; //make command
    std::cout << "Made Command" << std::endl;
    system(browseFilesCommand.c_str()); //execute command
    std::cout << "Executed Command" << std::endl;
};
void fileTree(){
    system("tree"); //execute command
}

void safeModeOFF(){
    safeMode = false;
};

void safeModeON(){
    safeMode = true;
};

void removeFile(){
    if (safeMode == true){
        std::cout << "Access Denied: Safe Mode is on!" << std::endl;
    }else{
    std::cout << "File to remove (Path/Name): ";
    std::getline(std::cin, fileLocation); //get fileLocation
    std::string removeFileCommand = "rmdir " + fileLocation; //make command
    system(removeFileCommand.c_str()); //execute command
    }
};