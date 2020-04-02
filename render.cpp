#include"snowman.cpp"
#include<math.h>
#include"pyramid.cpp"
#include"cube.cpp"
#include"torus.cpp"
#pragma once
//A variable to store the X position where the mouse is clicked
int xOrigin = -1;
// angle of rotation for the camera direction
float angle = 0.0;
// actual vector representing the camera's direction
float lx = 0.0f,ly = 0.0f, lz = -1.0f;
// XZ position of the camera
float x = 0.0f, z = 5.0f;
float deltaAngle = 0.0f;
float deltaMove = 0;
float zoom = 1.0f;

GLfloat anglePyramid = 0.0f;  // Rotational angle for pyramid 
GLfloat angleCube = 0.0f;     // Rotational angle for cube 
int refreshMills = 15;        // refresh interval in milliseconds 
GLdouble size = 2;
void computePos(float deltaMove) {

	x += deltaMove * lx * 0.1f;
	z += deltaMove * lz * 0.1f;
}

void computeDir(float deltaAngle) {

	angle += deltaAngle;
	lx = sin(angle);
	lz = -cos(angle);
}

void renderScene(void) {
	if (deltaMove)
		computePos(deltaMove);
	if (deltaAngle)
		computeDir(deltaAngle);
	// Clear Color and Depth Buffers

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	// Reset transformations
	glLoadIdentity();
	// Set the camera
	gluLookAt(x, 1.0f, z,
		x + lx, 1.0f, z + lz,
		0.0f, 1.0f, 0.0f);
	//Try for a zoom in
	glScalef(zoom, zoom, zoom);
	// Draw ground
	glColor3f(0.9f, 0.9f, 0.9f);
	glBegin(GL_QUADS);
	glVertex3f(-100.0f, 0.0f, -100.0f);
	glVertex3f(-100.0f, 0.0f, 100.0f);
	glVertex3f(100.0f, 0.0f, 100.0f);
	glVertex3f(100.0f, 0.0f, -100.0f);
	glEnd();
	glTranslatef(-1.5f, 2.0f, -6.0f);  // Move left and into the screen
	//glRotatef(anglePyramid, 1.0f, 0.0f, 0.0f);  // Rotate about the (1,1,0)-axis [NEW]
	pyramid();
	glLoadIdentity(); 
	gluLookAt(x, 1.0f, z,
		x + lx, 1.0f, z + lz,
		0.0f, 1.0f, 0.0f);
	//Try for a zoom in
	glScalef(zoom, zoom, zoom);// Reset the model-view matrix
	glTranslatef(1.5f, 2.0f, -6.0f);  // Move right and into the screen
	//glRotatef(angleCube, 1.0f, 1.0f, 1.0f);  // Rotate about (1,1,1)-axis [NEW]

	cube();
	// Draw 36 SnowMen
	/*for (int i = -3; i < 3; i++)
		for (int j = -3; j < 3; j++) {
			glPushMatrix();
			glTranslatef(i * 10.0, 0, j * 10.0);
			drawSnowMan();
			glPopMatrix();
		}
		*/
	glLoadIdentity();
	gluLookAt(x, 1.0f, z,
		x + lx, 1.0f, z + lz,
		0.0f, 1.0f, 0.0f);
	//Try for a zoom in
	glScalef(zoom, zoom, zoom);// Reset the model-view matrix
	glTranslatef(0.0f, 1.0f, -1.0f);  // Move right and into the screen
	//glRotatef(angleCube, 1.0f, 1.0f, 1.0f);  // Rotate about (1,1,1)-axis [NEW]
	glutWireTorus(iradius, oradius, sides, nrings);
	glLoadIdentity();
	gluLookAt(x, 1.0f, z,
		x + lx, 1.0f, z + lz,
		0.0f, 1.0f, 0.0f);
	//Try for a zoom in
	glScalef(zoom, zoom, zoom);// Reset the model-view matrix
	glTranslatef(0.0f, 1.0f, -10.0f);  // Move right and into the screen
	glutWireTeapot(size); // for drawing utah's teapot
	glLoadIdentity();
	gluLookAt(x, 1.0f, z,
		x + lx, 1.0f, z + lz,
		0.0f, 1.0f, 0.0f);
	//Try for a zoom in
	glScalef(zoom, zoom, zoom);// Reset the model-view matrix
	glTranslatef(0.0f, 1.0f, -30.0f);  // Move right and into the screen
	glutWireIcosahedron();

	anglePyramid += 0.2f;
	angleCube -= 0.15f;
	glutSwapBuffers();
}