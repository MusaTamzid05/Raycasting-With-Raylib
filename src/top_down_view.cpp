#include "top_down_view.h"
#include "consts.h"
#include <fstream>
#include <iostream>
#include <raylib.h>



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

        int pos_x = 0;
        int pos_y = 0;

        int rect_width = width / RECT_COUNT_PER_ROW;
        int rect_height = height / RECT_COUNT_PER_ROW;

        std::cout << "rect width " << rect_width << " height " << rect_height << "\n";

        while(input_file) {
            std::getline(input_file, line);

            if(line.size() == 0)
                continue;


            if(line.size() != RECT_COUNT_PER_ROW)
                throw std::runtime_error("Row data count not valid");

            for(char ch : line) {
                rect_list.push_back(MapRectData(
                            pos_x,
                            pos_y,
                            rect_width,
                            rect_height,
                            ch
                            ));

                pos_x += rect_width;

            }

            pos_y += rect_height;
            pos_x = 0;
            



        }

       

}


TopDownView::~TopDownView() {

}

void TopDownView::render() const {
    for(MapRectData rect_data : rect_list) {
        if(!rect_data.active)
            continue;

        DrawRectangle(
                rect_data.x,
                rect_data.y,
                rect_data.width,
                rect_data.height,
                RAYWHITE
                );


    }

}


