#include <iostream>

class Match1 {

  protected:
    int match1int;

  public:
    void set_match1int(int val) {
      match1int = val;
    }
};


class Match2 {

  protected:
    int match2int;

  public:
    void set_match2int(int val) {
      match2int = val;
    }
};


class Match3 {

  protected:
    int match3int;

  public:
    void set_match3int(int val) {
      match3int = val;
    }
};



// Deep class inheritance
class Score : public Match1, public Match2, public Match3 {

  public:
    void show() {
      std::cout << "The score of match1 is " << match1int << std::endl;
      std::cout << "The score of match2 is " << match2int << std::endl;
      std::cout << "The score of match3 is " << match3int << std::endl;

      std::cout << "Total score: " << match1int + match2int + match3int << std::endl;
    }
};



int main() {

  Score myObj;
  myObj.set_match1int(3);
  myObj.set_match2int(11);
  myObj.set_match3int(9);

  myObj.show();

  return 0;
}


