#ifndef __NBSF__
#define __NBSF__

#include <GL\glew.h>
#include <GLFW\glfw3.h>

#include <iostream>

class NBSF {
public:
	static void initGL(GLuint versionMajor = 3, GLuint versionMinor = 3);
	static void initGLEW();
	static void clear();
};
#endif