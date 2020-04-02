//#include"render.cpp"
void eyeright()
{
    //function for the right eye
    glPushMatrix();
    glTranslatef(.17, 1.1, .75);     //Specify the coordinates for the right eye
    glRotatef(-45, 0, 0, 1);
    glScalef(.9, .7, .7);            //Specify the size of the right eye
    glColor3f(1.0, 1.0, 1.0);       //Specify the color of the eye
    gluSphere(gluNewQuadric(), .3, 100, 100);
    glPopMatrix();
}
void eyeleft()
{
    glPushMatrix();
    glTranslatef(-.17, 1.1, .75);     //Specify the position for the left eye
    glRotatef(45, 0, 0, 1);
    glScalef(.9, .7, .7);
    glColor3f(1.0, 1.0, 1.0);
    gluSphere(gluNewQuadric(), .3, 100, 100);
    glPopMatrix();
}

void legleft()
{
    glPushMatrix();
    glTranslatef(.3, -.5, 0);     //Specify the position for the left leg
    glRotatef(-90.0, 1, 0, 0);
    glScalef(.8, .8, .8);
    gluCylinder(gluNewQuadric(), .5, .5, .5, 30, 6);
    glPopMatrix();
}

void legright()
{
    glPushMatrix();
    glTranslatef(-.3, -.5, 0);     //Specify the position for the right leg
    glRotatef(-90.0, 1, 0, 0);
    glScalef(.8, .8, .8);
    gluCylinder(gluNewQuadric(), .5, .5, .5, 30, 6);
    glPopMatrix();
}

void armleft()
{
    glPushMatrix();
    glTranslatef(-.82, 0, .1);     //Specify the position for the left arm
    glRotatef(90, 0, 1, 0);
    glRotatef(-50, 1, 0, 0);
    gluCylinder(gluNewQuadric(), .15, .15, .48, 30, 6);
    glPopMatrix();
}

void armright()
{
    glPushMatrix();
    glTranslatef(.82, 0, .1);      //Specify the position for the right arm
    glRotatef(90, 0, 1, 0);
    glRotatef(-130, 1, 0, 0);
    gluCylinder(gluNewQuadric(), .15, .15, .48, 30, 6);
    glPopMatrix();
}

void handleft()
{
    glPushMatrix();
    glTranslatef(.82, 0, .1);     //Specify the position for the left hand
    glScalef(.4, .3, .3);
    gluSphere(gluNewQuadric(), .4, 100, 100);
    glPopMatrix();
}
void handright()
{
    glPushMatrix();
    glTranslatef(-.82, 0, .1);    //Specify the position for the right hand
    glScalef(.4, .3, .3);
    gluSphere(gluNewQuadric(), .4, 100, 100);
    glPopMatrix();
}

void mouth()
{
    glPushMatrix();
    glTranslatef(0, .78, .74);
    glScalef(.4, .4, .1);
    glColor3f(0.0, 0.0, 0.0);
    gluSphere(gluNewQuadric(), .4, 100, 100);
    glPopMatrix();
}

void teeth()
{
    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glTranslatef(-.08, .72, .76);
    glTranslatef(.055, 0, .005);
    glutSolidCube(.035);
    glTranslatef(.055, 0, 0);
    glutSolidCube(.035);
    glPopMatrix();
}
void eyebrowleft()
{
    glPushMatrix();
    glTranslatef(-.3, 1.5, .97);;
    glRotatef(90, 0, 1, 0);
    glRotatef(45, 1, 0, 0);
    glColor3f(0.0, 0.0, 0.0);
    gluCylinder(gluNewQuadric(), .05, .01, .3, 4, 6);
    glPopMatrix();
}

void eyebrowright()
{
    glPushMatrix();
    glTranslatef(.3, 1.5, .97);
    glRotatef(270, 0, 1, 0);
    glRotatef(45, 1, 0, 0);
    gluCylinder(gluNewQuadric(), .05, .01, .3, 4, 6);
    glPopMatrix();
}

void neckring()
{
    glPushMatrix();
    glTranslatef(0, .5, 0);
    glScalef(.59, .59, .59);
    glRotatef(90.0, 1, 0, 0);
    glutSolidTorus(.1, 1.0, 20, 20);
    glPopMatrix();
}


void head()
{
    glPushMatrix();
    glTranslatef(0, 1.2, 0);
    glScalef(.9, .9, .9);
    glColor3f(1.0, 0.8, 0.6);
    gluSphere(gluNewQuadric(), 1, 100, 100);
    glPopMatrix();
}

void maintopball()
{
    glPushMatrix();
    glTranslatef(0, 2.2, 0);
    glScalef(.9, .9, .9);
    gluSphere(gluNewQuadric(), .18, 100, 100);
    glPopMatrix();
}

void hatring()
{
    glPushMatrix();
    glTranslatef(0, 1.4, 0);
    glScalef(.84, .84, .84);
    glRotatef(90.0, 1, 0, 0);
    glutSolidTorus(.1, 1.0, 20, 20);
    glPopMatrix();
}

void footleft()
{
    glPushMatrix();
    glTranslatef(-.3, -.5, 0);
    glScalef(1.5, .3, 1.5);
    glColor3f(0.0, 0.0, 0.0);
    gluSphere(gluNewQuadric(), .3, 100, 100);
    glPopMatrix();
}

void footright()
{
    glPushMatrix();
    glTranslatef(.3, -.5, 0);
    glScalef(1.5, .3, 1.5);
    glColor3f(0.0, 0.0, 0.0);
    gluSphere(gluNewQuadric(), .3, 100, 100);
    glPopMatrix();
}

void bellyCoatbottom()
{
    glPushMatrix();
    glTranslatef(0, -.2, 0);
    glScalef(1, .7, 1);
    glRotatef(90.0, 1, 0, 0);
    gluDisk(gluNewQuadric(), 0, .8, 30, 30);
    glPopMatrix();
}

void BellyCoat()
{
    glPushMatrix();
    glTranslatef(0, .5, 0);
    glScalef(1, .7, 1);
    glRotatef(90.0, 1, 0, 0);
    gluCylinder(gluNewQuadric(), .6, .8, 1, 100, 100);
    glPopMatrix();
}

void pupilleft()
{
    glPushMatrix();
    glTranslatef(-.17, 1.1, .88);
    glScalef(.9, .9, .9);
    gluSphere(gluNewQuadric(), .1, 100, 100);
    glPopMatrix();
}

void pupilright()
{
    glPushMatrix();
    glTranslatef(.17, 1.1, .88);
    glScalef(.9, .9, .9);
    gluSphere(gluNewQuadric(), .1, 100, 100);
    glPopMatrix();
}

void topbutton()
{
    glPushMatrix();
    glTranslatef(-.1, .4, .85);
    glScalef(1.9, 1.9, 1.9);
    gluSphere(gluNewQuadric(), .04, 100, 100);
    glPopMatrix();
}
void middlebutton()
{
    glPushMatrix();
    glTranslatef(-.1, .15, .98);
    glScalef(1.9, 1.9, 1.9);
    gluSphere(gluNewQuadric(), .04, 100, 100);
    glPopMatrix();
}
void bottombutton()
{
    glPushMatrix();
    glTranslatef(-.1, -.1, .92);
    glScalef(1.9, 1.9, 1.9);
    glColor3f(0.0, 0.0, 0.0);
    gluSphere(gluNewQuadric(), .04, 100, 100);
    glPopMatrix();
}