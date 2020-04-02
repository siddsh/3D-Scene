void pyramid() {
    glBegin(GL_TRIANGLES);           // Begin drawing the pyramid with 4 triangles
          // Front
    glColor3f(1.0f, 0.0f, 0.0f);     // Red
    glVertex3f(0.0f, 1.0f, 0.0f);
    glColor3f(1.0f, 0.0f, 0.0f);     
    glVertex3f(-1.0f, -1.0f, 1.0f);
    glColor3f(1.0f, 0.0f, 0.0f);     
    glVertex3f(1.0f, -1.0f, 1.0f);

    // Right
    glColor3f(0.0f, 1.0f, 0.0f);     
    glVertex3f(0.0f, 1.0f, 0.0f);
    glColor3f(0.0f, 1.0f, 0.0f);    
    glVertex3f(1.0f, -1.0f, 1.0f);
    glColor3f(0.0f, 1.0f, 0.0f);     // Green
    glVertex3f(1.0f, -1.0f, -1.0f);

    // Back
    glColor3f(0.0f, 0.0f, 1.0f);     
    glVertex3f(0.0f, 1.0f, 0.0f);
    glColor3f(0.0f, 0.0f, 1.0f);    
    glVertex3f(1.0f, -1.0f, -1.0f);
    glColor3f(0.0f, 0.0f, 1.0f);     // Blue
    glVertex3f(-1.0f, -1.0f, -1.0f);

    // Left
    glColor3f(1.0f, 1.0f, 0.0f);       
    glVertex3f(0.0f, 1.0f, 0.0f);
    glColor3f(1.0f, 1.0f, 0.0f);       
    glVertex3f(-1.0f, -1.0f, -1.0f);
    glColor3f(1.0f, 1.0f, 0.0f);       // Yellow
    glVertex3f(-1.0f, -1.0f, 1.0f);
    glEnd();
    glBegin(GL_QUADS);
    //bottom
    glColor3f(1.0f, 0.55f, 0.0f);
    glVertex3f(-1.0f, -1.0f, 1.0f);
    glColor3f(1.0f, 0.55f, 0.0f);
    glVertex3f(1.0f, -1.0f, 1.0f);
    glColor3f(1.0f, 0.55f, 0.0f);
    glVertex3f(1.0f, -1.0f, -1.0f);
    glColor3f(1.0f, 0.55f, 0.0f);
    glVertex3f(-1.0f, -1.0f, -1.0f);
    glColor3f(1.0f, 0.55f, 0.0f);
    glVertex3f(-1.0f, -1.0f, 1.0f);
    glEnd();

    // Done drawing the pyramid
}