float starx[SIZE];
float stary[SIZE];
unsigned long nSeed = 52473;
void initRand()
{
	for(int i = 0; i < SIZE; i++)
	{
		nSeed = (8253927L*nSeed+2396403);
        starx[i] = ((nSeed % 1000) / 1000.0) * 20.0;
        nSeed = (8253927L*nSeed+2396403);
        stary[i] = ((nSeed % 1000) / 1000.0) * 20.0;
	}
}

void drawStar()
{
	glPushMatrix();
	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	for (int i = 0; i < SIZE; i++)
	{
		glVertex3f(starx[i]-0.02, stary[i], 0.0f);
        glVertex3f(starx[i]+0.02, stary[i], 0.0f);

        glVertex3f(starx[i], stary[i]-0.02, 0.0f);
        glVertex3f(starx[i], stary[i]+0.02, 0.0f);

        glVertex3f(starx[i]-0.02, stary[i]-0.02, 0.0f);
        glVertex3f(starx[i]+0.02, stary[i]+0.02, 0.0f);

        glVertex3f(starx[i]-0.02, stary[i]+0.02, 0.0f);
        glVertex3f(starx[i]+0.02, stary[i]-0.02, 0.0f);
	}
	glEnd();
	glPopMatrix();
}
