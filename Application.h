//
// Created by Krzysztof Sychla on 2019-05-24.
//

#ifndef OPENGLSETUP_APPLICATION_H
#define OPENGLSETUP_APPLICATION_H

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include "ShaderProgram.h"
#include "Camera.h"
#include "OnKeyRotationCamera.h"

class Application {
    friend void key_callback(GLFWwindow*, int, int, int, int);
    friend void window_focus_callback(GLFWwindow*, int);
    friend void window_size_callback(GLFWwindow*, int, int);
    friend void cursor_position_callback(GLFWwindow*, double, double);
    friend void mouse_button_callback(GLFWwindow*, int, int, int);
public:
    Application(GLFWwindow *window);

    ~Application();
    void mainLoop();

private:
    void setRenderBehaviour();

    Camera camera;
    OnKeyRotationCamera onKeyRotationCamera;
    Camera* currentCamera;

    ShaderProgram simpleColor;

    GLFWwindow* window;
};


#endif //OPENGLSETUP_APPLICATION_H