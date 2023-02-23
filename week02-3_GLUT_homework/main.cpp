#include <GL/glut.h>
void display()
{

    glBegin(GL_POLYGON);
        glColor3f(84/255.0, 37/255.0 , 131/255.0 );
        glVertex2f( (45-100)/100.0, -(17-100)/100.0 );
        glVertex2f( (30-100)/100.0, -(24-100)/100.0 );
        glVertex2f( (98-100)/100.0, -(59-100)/100.0 );
        glVertex2f( (98-100)/100.0, -(35-100)/100.0 );

        glVertex2f( (108-100)/100.0, -(35-100)/100.0 );

    glEnd();
    glutSwapBuffers();
}


int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("Week02");
    glutDisplayFunc(display);
    glutMainLoop();
}
