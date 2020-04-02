#include"render.cpp"


void processNormalKeys(unsigned char key, int x, int y) {
	float fraction = 0.1f;
	if (key == 27)
		exit(0);
	
}
void walk(int key, int x, int y)                                      //change positions using arrow keys
{
    if (key == GLUT_KEY_UP)    walkY += 1;
    if (key == GLUT_KEY_DOWN)  walkY -= 1;
    if (key == GLUT_KEY_RIGHT) walkX -= 1;
    if (key == GLUT_KEY_LEFT)  walkX += 1;
    if (key == GLUT_KEY_F10)    world = -world;
    if (key == GLUT_KEY_F9)    doll = -doll;

}
