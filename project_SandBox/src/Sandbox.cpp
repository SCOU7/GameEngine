#include "Rambert.h"

class Sandbox : public Rambert::Application
{
public:
   Sandbox()
   {

   };

   ~Sandbox()
   {

   };
};

int main(void)
{
   Sandbox* sandbox = new Sandbox();
   sandbox->Run();
   delete sandbox;
}
