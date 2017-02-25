#ifndef __NBSFWINDOW__
#define __NBSFWINDOW__

#include <GLFW\glfw3.h>
#include <iostream>

class Window {
public:
	Window(int width = 1280, int height = 720, const char* title = "Window");
private:
	GLFWwindow* window;
};

#endif