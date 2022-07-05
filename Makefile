CC = clang++ 
CFLAGS = -std=c++17 -arch arm64 -g -Wall -O3 ${INCLUDEPATH}
CFLAGS2 = -std=c++17 -arch arm64 -g -Wall -O0 ${INCLUDEPATH}
INCLUDEPATH = -I./project_Rambert/src -I./project_Rambert/vendor/spdlog/include

run : 
	./bin/Release-x64/Sandbox/sandboxApp

app : 
	${CC} ${CFLAGS} -L./bin-int -lapplib ./project_SandBox/src/SandboxApp.cpp -o ./bin/Release-x64/Sandbox/sandboxApp

# At least one optimization level breaks the dynamic library
lib : 
	${CC} ${CFLAGS2} -dynamiclib -o ./bin-int/libapplib.dylib /Users/Dev/workspace_Rambert/project_Rambert/src/Rambert/*.cpp

%.o : %.cpp
	${CC} ${CFLAGS} -c $< -o ./bin-int/$@

clean:
	rm -r ./bin/Release-x64/Sandbox/sandboxApp* ./bin-int/libapplib.dylib*

# Dependencies
SandboxApp.cpp : /Users/Dev/workspace_Rambert/project_Rambert/src/Rambert.h
Application.cpp : /Users/Dev/workspace_Rambert/project_Rambert/src/Rambert/Application.h


