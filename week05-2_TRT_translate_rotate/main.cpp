#include <GL/glut.h>
float angle = 0;
void myCube()
{
    glPushMatrix();
        glScalef(0.5, 0.2, 0.2);/// STEP1 ���j�p
        glutSolidCube(1);   /// STEP1�����
    glPopMatrix();/// STEP1
}
void display()
{

    glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);
    glColor3f(1,1,1);       /// STEP4�զ⪺
    glutSolidCube(1);       /// STEP4����

    glPushMatrix();
        glTranslatef(0.5, 0.5, 0);/// STEP5 ����u���ʨ�k�W��
        glRotatef(angle,0 ,0 ,1);///��o   STEP2
        glTranslatef(0.25, 0, 0);///step3 ���k����0.25 �����`�b�F����
        glColor3f(0,1,0);   ///step4 ��⪺
        myCube();   /// STEP2
    glPopMatrix();  /// STEP2


     glPushMatrix();
        glTranslatef(-0.5, 0.5, 0);/// STEP5 ����u���ʨ�k�W��
        glRotatef(angle,0 ,0 ,1);///��o   STEP2
        glTranslatef(0.25, 0, 0);///step3 ���k����0.25 �����`�b�F����
        glColor3f(0,1,0);   ///step4 ��⪺
        myCube();     /// STEP2
    glPopMatrix();  /// STEP2

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
