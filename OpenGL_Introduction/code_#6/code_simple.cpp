#include <GL/glut.h>  // GLUT, includes glu.h and gl.h
  
int main(int argc, char** argv) {
   glutInit(&argc, argv);                     // Initialize GLUT
   glutCreateWindow("OpenGL Setup Test");     // Create a window with the given title
   glutInitWindowSize(320, 320);              // Set the window's initial width & height
   glutInitWindowPosition(50, 50);            // Position the window's initial top-left corner
   glutMainLoop();           // Enter the infinitely event-processing loop
   return 0;
}