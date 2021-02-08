#include "glad/glad.h"
#include "GLFW/glfw3.h"
#include <stdio.h>

int main() {
    int ret;
    int width = 400;
    int height = 800;

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

    // ret = gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
    if (!gladLoadGL()) {
        printf("%s\n", "glad init failed");
        return -1;
    }

    glClearColor(.2, .8, .2, 1);
    while (!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT);
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}