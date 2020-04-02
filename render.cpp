#include"snowman.cpp"
#include<math.h>
#include"pyramid.cpp"
#include"cube.cpp"
#include"torus.cpp"
#pragma once
/*//A variable to store the X position where the mouse is clicked
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
		/*
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
}*/
#define INIT_VIEW_X 0.0    //Define initial camera position and viewing window values
#define INIT_VIEW_Y 0.0
#define INIT_VIEW_Z -4.5
#define VIEW_LEFT -2.0
#define VIEW_RIGHT 2.0
#define VIEW_BOTTOM -2.0
#define VIEW_TOP 2.0
#define VIEW_NEAR 1.0
#define VIEW_FAR 200.0
GLfloat AmbientLight[] = { 0.3,0.3,0.3,1.0 };                  //Initialization values for lighting
GLfloat DiffuseLight[] = { 0.8,0.8,0.8,1.0 };
GLfloat SpecularLight[] = { 1.0,1.0,1.0,1.0 };
GLfloat SpecRef[] = { 0.7,0.7,0.7,1.0 };
GLfloat LightPos[] = { -50.0,50.0,100.0,1.0 };
GLint Shine = 128;
GLint walkX = 0, walkY = 0, lookX = 0, lookY = 0;
GLint world = 1, oldX = -1, oldY = -1;
GLint doll = -1;

#include"human.cpp"
#include"resize.cpp"

void SetupRend()
{
	glClearColor(0.7, 0.7, 1.0, 1.0);
	glEnable(GL_DEPTH_TEST);         //Enable depth testing
	glEnable(GL_LIGHTING);             //Enable lighting
	glLightfv(GL_LIGHT0, GL_AMBIENT, AmbientLight);//Set up and enable light zero
	glLightfv(GL_LIGHT0, GL_DIFFUSE, DiffuseLight);
	glLightfv(GL_LIGHT0, GL_SPECULAR, SpecularLight);
	glEnable(GL_LIGHT0);
	glEnable(GL_COLOR_MATERIAL);                   //Enable color tracking
	glColorMaterial(GL_FRONT, GL_AMBIENT_AND_DIFFUSE);//Set material to follow
	glMaterialfv(GL_FRONT, GL_SPECULAR, SpecRef);//Set specular reflectivity and shine
	glMateriali(GL_FRONT, GL_SHININESS, Shine);
}

void renderScene() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//Clear the window
	glPushMatrix();//Save viewing matrix state
	if (world == 1)
	{
		glTranslatef(walkX, -1, walkY);
		glRotatef(lookY, 0, 1, 0);
		glRotatef(lookX, 1, 0, 0);
	}
	if (doll == 1)
	{
		glTranslatef(walkX, -1, walkY);
		glRotatef(lookY, 0, 1, 0);
		glRotatef(lookX, 1, 0, 0);
	}
	for (int i = -3; i < 3; i++) {
		for (int j = -3; j < 3; j++) {
			glColor3ub(50, 50, 150);//Change the draw color to slate blue
			glPushMatrix();
			glTranslatef(-1*10*i, 0, -6*2*j);
			eyeright();
			eyeleft();
			eyebrowleft();
			eyebrowright();
			glColor3f(0.0, 1.0, 0.0);
			neckring();
			glColor3ub(50, 40, 60);
			legright();
			legleft();
			glColor3ub(255, 90, 0);
			armleft();
			armright();
			BellyCoat();
			bellyCoatbottom();
			glColor3ub(0, 185, 0);
			handleft();
			handright();
			mouth();
			teeth();
			glColor3ub(255, 222, 173);
			head();
			glColor3f(0.0, 0.0, 0.0);
			footleft();
			footright();
			topbutton();
			middlebutton();
			bottombutton();
			pupilleft();
			pupilright();
			glPopMatrix();

		}
	}
	
	glPopMatrix();                                     //****Restore matrix state****
	glutSwapBuffers();                             //****Flush drawing commands****
}