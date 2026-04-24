#include <iostream>
#include "downloader.h"

// Simple Anime Downloader Entry Point
int main() {
    std::cout << "Starting Anime Downloader..." << std::endl;
    
    Downloader app;
    app.Initialize();
    
    std::cout << "Ready to download your anime!" << std::endl;
    return 0;
}