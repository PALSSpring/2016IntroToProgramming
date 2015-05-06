class Shape{
public:

  virtual int getArea() =0;
private:
  int height;
  int width;

}


class Square : Public Shape {
public:
   int getArea() {
     return width * height;
   }

}

class Triange : Public Shape {
public:
   int getArea() {
     return width * height / 2;
   }

}
