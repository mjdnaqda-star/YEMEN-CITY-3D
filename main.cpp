
#include <iostream>
#include <GLFW/glfw3.h>

int main()
{
    if (!glfwInit())
        return -1;

    GLFWwindow* window = glfwCreateWindow(
        800, 600, "OpenGL - GL_TRIANGLES", NULL, NULL
    );

    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    while (!glfwWindowShouldClose(window))
    {
        glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        glColor3f(1.0f, 1.0f, 0.0f);

        glBegin(GL_TRIANGLES);
            glVertex2f(0.0f, 0.7f);
            glVertex2f(-0.7f, -0.5f);
            glVertex2f(0.7f, -0.5f);
        glEnd();

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}

