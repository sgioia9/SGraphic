#ifndef OGLWINDOW_HPP
#define OGLWINDOW_HPP

#include <QOpenGLWindow>
#include <QOpenGLExtraFunctions>
#include <QTimer>

class OglWindow : public QOpenGLWindow,
                  protected QOpenGLExtraFunctions {
Q_OBJECT

public:
  virtual void initializeGL();
  virtual void resizeGL(int width, int height);
  virtual void paintGL();
protected slots:
  virtual void teardownGL();
private:
  QTimer* loopTimer;
};
                

#endif
