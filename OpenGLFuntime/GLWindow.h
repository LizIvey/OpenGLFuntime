#ifndef ME_GL_WINDOW
#define ME_GL_WINDOW
#include <QtOpenGL\qglwidget>

class GLWindow : public QGLWidget
{
protected:
	void initializeGL();
	void paintGL();
};

#endif

