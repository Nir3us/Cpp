#include <iostream>


namespace firstNamespace                    //first namespace that to be useed require firstNamespace::....
{
   void doSomething()
   {

       std::cout << "Something 1!\n";
   }


}

namespace secondNamespace               //second namespace with same function as the first namespace
{
   void doSomething()
   {

       std::cout << "Something 2!\n";
   }


}
namespace thirdNamespace
{
    namespace forthNamespace            //namespace inside other namespace
    {

       void doSomething()
       {
           std::cout << "Something 4!\n";
       }
    }

}

int main()
{
    firstNamespace::doSomething();
    secondNamespace::doSomething();
    namespace threeAndFour = thirdNamespace::forthNamespace;
    threeAndFour::doSomething();
    return 0;
}
