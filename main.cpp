#include "glad/glad.h"
#include "GLFW/glfw3.h"
#include <iostream>

int main() {
    int width = 320;
    int height = 320;

    if (!glfwInit()) {
        printf("%s\n", "glfw init failed");
        return -1;
    }

    GLFWwindow* window = glfwCreateWindow(width, height, "LearnGl", NULL, NULL);
    if (window == 0) {
        printf("%s\n", "window create failed");
        return -1;
    }

    glfwMakeContextCurrent(window);

    // gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
    if (!gladLoadGL()) {
        printf("%s\n", "glad init failed");
        return -1;
    }

    glClearColor(.0, .0, .0, 1);
    while (!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT);
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}
