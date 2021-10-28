#include "../header/rectangle.hpp"
#include <cmath>

Rectangle::Rectangle(int w, int h){
    width = std::abs (w);
    height = std::abs (h);
}


int Rectangle::area() {
    return this->width * this->height;
}
int Rectangle::perimeter(){
    return this->width*2 + this->height*2;
}
int Rectangle::get_width(){
    return this->height;
}
int Rectangle::get_height(){
    return this->height;
}
