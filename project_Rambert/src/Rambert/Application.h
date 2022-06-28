#pragma once 

namespace Rambert {

    class Application
        {
        public:
            Application();
            virtual ~Application();
            
            void Run();
        };

    // To be defined in the client
    Application* CreateApplication();
}
