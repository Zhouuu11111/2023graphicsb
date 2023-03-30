#include <GL/glut.h>
float angle = 0;
void myCube()
{
    glPushMatrix();
        glScalef(1,0.3,0.3);
        glutSolidCube(0.5);
    glPopMatrix();
}
void display()
{

    glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);

    glutSolidSphere(0.01,30,30);

    glPushMatrix();
        ///glTranslatef(0.5, 0.5, 0);
        ///glRotatef(angle,0 ,0 ,1);
        ///glTranslatef(0.45, 0, 0);
        myCube();
    glPopMatrix();

    glutSwapBuffers();
    angle++;
}


int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("Week04");
    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutMainLoop();
}