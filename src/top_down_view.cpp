#include "top_down_view.h"
#include <fstream>
#include <iostream>



TopDownView::TopDownView(
        const std::string& map_path,
        int width,
        int height
        ):
    width(width),
    height(height) {

        std::ifstream input_file(map_path);

        if(!input_file.is_open()) 
            throw std::runtime_error("Failed to load " + map_path);


        std::string line;

        while(input_file) {
            std::getline(input_file, line);

            std::cout << line << "\n";

        }

       

}


TopDownView::~TopDownView() {

}

void TopDownView::render() {

}
