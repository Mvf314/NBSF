#include "NBSF.h"

void NBSF::initGL(GLuint versionMajor, GLuint versionMinor) {
	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, versionMajor);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, versionMinor);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
}

void NBSF::initGLEW() {
	if (glewInit() != GLEW_OK) {
		std::cout << "GLEW initialization failed." << std::endl;
		exit(-1);
	}
}