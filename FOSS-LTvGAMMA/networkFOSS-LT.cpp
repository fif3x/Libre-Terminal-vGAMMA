#include "FOSS-LT_HEADERSvGAMMA/networkFOSS-LT.h"
#include <cstdlib>
#include <string>
#include <iostream>

void show_ip(){
    system("ipconfig"); //execute command
};
void ping(){
    std::string ip; //declare ip
    std::cout << "IP to ping: ";
    std::getline(std::cin, ip);
    std::string pingCommand = "ping " + ip;
    system(pingCommand.c_str()); // Execute the command
};
void traceRoute(){
    std::string ip; //declare ip
    std::cout << "Enter ip to traceroute: ";
    std::getline(std::cin, ip);
    std::string traceRouteCommand = "tracert " + ip + " 4";
    system(traceRouteCommand.c_str()); //execute the command
};
void stats(){
    system("netstat"); //execute command
};