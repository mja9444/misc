class Base
{
 public:
  virtual void function1() {};
  virtual void function2() {};
};


class D1: public Base
{
 public:
  void function1() {};
};


class D2: public Base
{
 public:
  virtual void function2() {};
};


int main()
{
  Base cClass;
  Base *pClass = &cClass;
  pClass->function1();
}
