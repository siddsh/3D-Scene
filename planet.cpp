#include"variables.cpp"
struct PLANET
{
	float radius;
	float speed;
	float xpos;
	float ypos;
	float zpos;
	float orbitradius;
	float orbitpos;
	float color[3];
};

struct PLANET mercury, venus, earth, mars, jupiter, saturn, urenus, neptune, pluto;


void initPlanets()
{
	//mercury
	mercury.radius = 0.1;
	mercury.speed = 0.00025;
	mercury.xpos = 0.0;
	mercury.ypos = 0.0;
	mercury.zpos = 0.0;
	mercury.orbitradius = 0.8;
	mercury.orbitpos = 0;
	mercury.color[0] = 0.8;
	mercury.color[1] = 0.4;
	mercury.color[2] = 0.2;

	//venus
	venus.radius = 0.12;
	venus.speed = 0.00023;
	venus.xpos = 0.0;
	venus.ypos = 0.0;
	venus.zpos = 0.0;
	venus.orbitradius = 1.0;
	venus.orbitpos = 180.0;
	venus.color[0] = 0.8;
	venus.color[1] = 0.8;
	venus.color[2] = 0.8;

	//earth
	earth.radius = 0.14;
	earth.speed = 0.00019;
	earth.xpos = 0.0;
	earth.ypos = 0.0;
	earth.zpos = 0.0;
	earth.orbitradius = 1.2;
	earth.orbitpos = 90.0;
	earth.color[0] = 0.4;
	earth.color[1] = 0.6;
	earth.color[2] = 0.8;

	//mars
	mars.radius = 0.13;
	mars.speed = 0.00017;
	mars.xpos = 0.0;
	mars.ypos = 0.0;
	mars.zpos = 0.0;
	mars.orbitradius = 1.4;
	mars.orbitpos = 270.0;
	mars.color[0] = 0.8;
	mars.color[1] = 0.2;
	mars.color[2] = 0.2;

	//jupiter
	jupiter.radius = 0.3;
	jupiter.speed = 0.00012;
	jupiter.xpos = 0.0;
	jupiter.ypos = 0.0;
	jupiter.zpos = 0.0;
	jupiter.orbitradius = 1.7;
	jupiter.orbitpos = 45.0;
	jupiter.color[0] = 0.8;
	jupiter.color[1] = 0.4;
	jupiter.color[2] = 0.3;

	//saturn
	saturn.radius = 0.26;
	saturn.speed = 0.00009;
	saturn.xpos = 0.0;
	saturn.ypos = 0.0;
	saturn.zpos = 0.0;
	saturn.orbitradius = 2.0;
	saturn.orbitpos = 135.0;
	saturn.color[0] = 0.8;
	saturn.color[1] = 0.4;
	saturn.color[2] = 0.8;

	//urenus
	urenus.radius = 0.12;
	urenus.speed = 0.00007;
	urenus.xpos = 0.0;
	urenus.ypos = 0.0;
	urenus.zpos = 0.0;
	urenus.orbitradius = 2.2;
	urenus.orbitpos = 315.0;
	urenus.color[0] = 0.8;
	urenus.color[1] = 0.2;
	urenus.color[2] = 0.4;

	//neptune
	neptune.radius = 0.12;
	neptune.speed = 0.00005;
	neptune.xpos = 0.0;
	neptune.ypos = 0.0;
	neptune.zpos = 0.0;
	neptune.orbitradius = 2.4;
	neptune.orbitpos = 225.0;
	neptune.color[0] = 0.8;
	neptune.color[1] = 0.4;
	neptune.color[2] = 0.2;

	//pluto
	pluto.radius = 0.1;
	pluto.speed = 0.00002;
	pluto.xpos = 0.0;
	pluto.ypos = 0.0;
	pluto.zpos = 0.0;
	pluto.orbitradius = 2.6;
	pluto.orbitpos = 0.0;
	pluto.color[0] = 0.2;
	pluto.color[1] = 0.2;
	pluto.color[2] = 0.2;
}

void drawPlanet(struct PLANET &p)
{
	p.xpos = p.orbitradius*p.orbitradius*cos(p.orbitpos*RAD);
	p.ypos = p.orbitradius*p.orbitradius*sin(p.orbitpos*RAD);

    //glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glPushMatrix();
	changeColour(p.color[0], p.color[1], p.color[2], 1.0);
	glTranslatef(p.xpos, p.ypos, p.zpos);
	glBegin(GL_LINES);
    //glColor3fv(p.color);
	/*for(int i = 0; i < 360; i++)
	{
		glVertex3f(p.radius*cos(i*RAD), p.radius*sin(i*RAD),0.0f);
	}*/
	glutSolidSphere(p.radius,30,30);
	glEnd();
	glPopMatrix();

	p.orbitpos += p.speed;
	if(p.orbitpos >= 360.0)
	{
		p.orbitpos = 0.0;
	}
}

