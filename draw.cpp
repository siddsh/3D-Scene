
//Draws the 3D scene
void drawScene() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW); //Switch to the drawing perspective
	glLoadIdentity(); //Reset the drawing perspective
	glRotatef(10.0, 1.0f, 0.0f, 0.0f); //Rotate the camera
	glTranslatef(0.0f, -1.0f, -14.0f); //Move forward 5 units

	//Sender
	glPushMatrix(); //Save the transformations performed thus far
	//glTranslatef(-1.8f, 1.8f, 0.0f); //Move to the center of the trapezoid
    glRotatef(-60.0, 1.0f, 0.0f,0.0f);
    //draw the SUN
	glPushMatrix();
	changeColour(0.9, 0.4, 0.2, 1.0);
	glBegin(GL_LINES);
	glutSolidSphere(0.4f, 30, 30);
	glEnd();
	glPopMatrix();

    changeColour(1.0, 1.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(-8.0f, -8.0f, 0.0f);
	drawStar();
	glPopMatrix();


	drawPlanet(mercury);
	drawPlanet(venus);
	drawPlanet(earth);
	drawPlanet(mars);
	drawPlanet(jupiter);
	drawPlanet(saturn);
	drawPlanet(urenus);
	drawPlanet(neptune);
	drawPlanet(pluto);
    glPopMatrix();
	glutSwapBuffers();
}