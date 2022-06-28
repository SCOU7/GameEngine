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

Rambert::Application* Rambert::CreateApplication()
{
   return new Sandbox();
}
