/*

  Shape library

*/

class Shape {
  public:
    String getName() {
      return name;
    }
    virtual int getArea() = 0;
      //Don't know what area it would be, but we want all
      //shapes to be able to do this.

  private:
    String name;
    int height;
    int width;


}
