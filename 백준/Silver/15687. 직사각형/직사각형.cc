class Rectangle {
    private:
        int width, height;
    public:
        Rectangle(int width, int height) : width(width), height(height){
        }
        int get_width() const {
            return width;
        }
        int get_height() const {
            return height;
        }
        void set_width(int width) {
            if(width > 1000 || width <= 0) return;
            this -> width = width;
        }
        void set_height(int height) {
            if(height > 2000 || height <= 0) return;
            this -> height = height;
        }
        int area() const {
            return width * height;
        }
        int perimeter() const {
            return 2 * (width + height);
        }
        bool is_square() const {
            if(width == height){
                return true;
            }else{
                return false;
            }
        }
};
