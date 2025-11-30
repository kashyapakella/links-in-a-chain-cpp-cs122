#include <iostream>

#include "src/hello.hpp"

int main()
{
  LinkedList l;

  Link *gold = new Link("Gold");
  Link *silver = new Link("Silver");
  Link *bronze = new Link("Bronze");

  l.add(gold);
  l.add(silver);
  l.add(bronze);

  l.print();
}
