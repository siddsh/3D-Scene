#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <GL/glut.h>
#include"variables.cpp"
#include"planet.cpp"
#include"keyboard.cpp"
#include"resize.cpp"
#include"star.cpp"
#include"render.cpp"
#include"draw.cpp"
using namespace std;

void init(void) {
	glClearColor(0.0, 0.0, 0.0, 1.0);
	setupMaterials();

	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_CULL_FACE);
	glFrontFace(GL_CCW);
	glShadeModel(GL_SMOOTH);
}

int main(int argc, char** argv) {
	//Initialize GLUT
	initPlanets();
	initRand();

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize (800, 600);
    glutCreateWindow (argv[0]);
    init();
	initRendering();

	//Set handler functions
	glutDisplayFunc(drawScene);
	glutKeyboardFunc(handleKeypress);
	glutReshapeFunc(handleResize);
    glutTimerFunc(25, update, 0); //Add a timer

	glutMainLoop();
	return 0;
}

