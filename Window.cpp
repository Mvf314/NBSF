#include "Window.h"

Window::Window(int width, int height, const char* title) {
	window = glfwCreateWindow(width, height, title, nullptr, nullptr);
	if (window == nullptr) {
		std::cout << "glfwCreateWindow() failed." << std::endl;
		glfwTerminate();
		exit(-1);
	}
	glfwMakeContextCurrent(window);
}

int Window::shouldClose() {
	return glfwWindowShouldClose(window);
}

void Window::swap() {
	glfwSwapBuffers(window);
}