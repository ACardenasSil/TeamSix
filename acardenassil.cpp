//Author: Alonso Cardenas Sillas
//
//This c++ file is a reflection of my skills
//
#include <iostream>
#include "acardenassil.h"

class Acardsill acs;

Acardsill::Acardsill()
{

}
void Acardsill::name_print()
{
	std::cout << "Alonso Cardenas Sillas" << std::endl;
}
//NEW MIDTERM FUNCTION HERE
int Acardsill::testcameraresolution(
        int winxres, int winyres, int xres, int yres)
{
    if (winxres != xres/2 || winyres != yres/2) {
        std::cout << "RESOLUTION ERROR" << std::endl;
        return -1;
    }
    std::cout << "resolution success" << std::endl;
    return 0;
}


/* OLD CODE from midterm part 1, will delete after midterm week ends

class Acardenassil midterm;

Acardenassil::Acardenassil()
{
    
}
int Acardenassil::testcameraresolution(
        int winxres, int winyres, int xres, int yres)
{
    if (winxres != xres/2 || winyres != yres/2)
        return -1;
    return 0;
}
*/

/*
class Camera camera;

Camera::Camera()
{

}

void Camera::setPosition()
{

}
*/



/* //credits page followed in class no longer needed
void Credits::showPage(int xres, int yres) {
	glColor3ub(255,255,0); //yellow
	glPushMatrix();
	static float rotation = 0.0;
	static float angle = 0.0;
	glRotatef(rot, 0.0f, 0.0f, 1.0f);
	glTranslatef(-xres/2, -yres/2, 0);

	rot = sin(angle) * 20.0;
	angle += 0.05;
	glBegin(GL_TRIANGLES);
		glVertex2f(20.0, 20.0);
		glVertex2f(xres/2.0, yres-20);
		glVertex2f(xres-20, 20.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslate(xres/2, yres/2, 0);
	float w = 20.0;
	glBegin(GL_QUADS);
	glEnd();
		glvertex2f(-w, -h);
		glvertex2f(-w,  h);
		glvertex2f( w,  h);
		glvertex2f( w, -h);
	glPopMatrix();
}
*/


