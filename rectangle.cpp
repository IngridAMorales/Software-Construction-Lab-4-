#include "../header/rectangle.hpp"

Rectangle::Rectangle(int w, int h){
    int width = set_width(w);
    int height = set_height(h); 
}
void Rectangle::set_width(int w) {
    this->width = w;
}

void Rectangle::set_height(int h) {
    this->height = h;
}

int Rectangle::area() {
    return this->width * this->height;
}
int Rectangle::perimeter(){
    return this->width*2 + this->height*2 
}
