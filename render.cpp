
//Initializes 3D rendering
void initRendering() {
	glEnable(GL_DEPTH_TEST);
}

int flag = 1;
//float _dist1 = -1.8f, _dist2 = 1.8, _dist3 = -1.8, _dist4 = 1.8;
float _cameraAngle = 0.0f;


void update(int value) {
	//drawPlanet(mercury);
    _cameraAngle += 2.0;
    if(_cameraAngle >= 360.0)
    {
        _cameraAngle = 0.0;
    }
	glutPostRedisplay(); //Tell GLUT that the display has changed

	//Tell GLUT to call update again in 25 milliseconds
	glutTimerFunc(25, update, 0);
}
