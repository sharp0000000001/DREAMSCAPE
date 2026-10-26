// Dreamscape.cpp
// VERSION: 1.000.000.000.000
// AUTHOR: James C Williams
// LANGUAGE: C++
// DATE STARTED: 05 - MAY - 2024
// DATE COMPLETED: 
//
// MIT LICENSE

// Copyright <2024> <JAMES C WILLIAMS>

// Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated
// documentation files(the “Software”), to deal in the Software without restriction, including without 
// limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and /or sell copies of 
// the Software, and to permit persons to whom the Software is furnished to do so, subject to the following 
// conditions :

// The above copyright notice and this permission notice shall be included in all copies or substantial portions 
// of the Software.

// THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED 
// TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL 
// THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF 
// CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER 
// DEALINGS IN THE SOFTWARE.





#include <iostream>
#include <cmath>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <D:\Downloads\glew-2.3.1-win32\glew-2.3.1\include\GL\glew.h>
#include <D:\Downloads\glfw-3.5.1.bin.WIN64\include\GLFW\glfw3.h>
#include <gl\GL.h>
#include <C:\Users\plati\source\repos\GRAPHICS\GRAPHICS\GRAPHICS.h>




using namespace std;





// classes





class front_panel
{
    // Front panel for emulation of person:


};

class text_buffer
{
    class text_type
    {

    };
    class text_size
    {

    };
};

class parse
{

};

class setup
{

};

class settings
{

};

class sensors
{
    class mainfold_connect
    {

    };
    class index_of_transference
    {

    };
    class mind_connect
    {

    };
    class Eh_OSC_connect
    {

    };
};

class intellect
{

};

class signals
{
    class analog
    {

    };
    class digital
    {

    };
    class data
    {

    };
    class media
    {

    };
};

class route
{
    class direction
    {

    };
    class frequency
    {

    };
    class logic_gate
    {

    };
    class reroute
    {

    };
};

class nerve
{
    class lobe
    {
        class chord
        {
            class neuron
            {
                class synapse
                {

                };
            };
        };
    };
};

class think
{
    class verity
    {
        class idiom
        {
            class idea
            {
                class thought
                {

                };
            };
        };
    };
};

class EH_OSC
{
    class wave_type
    {

    };
    class analog_frequency
    {

    };
    class digital_frequency
    {

    };
    class external_EH
    {

    };
};

class mind_engine
{
    class thought_thing
    {

    };
    class thought_dimension
    {

    };
    class inter_relationships
    {

    };
    class new_idea
    {

    };
};

class virtues
{
    class list
    {

    };
};

class spirit
{
    class color_spirit
    {

    };
    class type_spirit
    {

    };
};

class person
{
    class body_person
    {

    };
    class soul_person
    {

    };
    class spirit_person
    {

    };
};

class heart
{

};

class manifold
{

};

class IO
{

};






// program:





int main()
{
    char D;
    bool flag = false;
    double pi = 3.14159265359;
    int W = 0;
    std::cout << "Dreamscape\n\n\n\n\n";
    // core
ask:
    std::cout << "Proceed? (Y/N)?: ";
    std::cin >> D;
    std::cout << "\n";
    if (D == 'Y' || D == 'y') goto proceed;
    if (D == 'N' || D == 'n')
    {
        glfwTerminate();
        std::cout << "Program terminated.\n\n";
        return 0;
    }
    goto ask;
proceed:
    // operate program
    std::cout << "Program executed.\n\n";
    goto execute;
execute:
    // program
    glfwInit();
    if (!glfwInit())
    {
        std::cout << "GLFW INIT failure!!!\n\n";
        glfwTerminate();
        std::cout << "Program terminated.\n\n";
        return 0;
    }

    GLFWwindow* window = glfwCreateWindow(800, 600, "Dreamscape", NULL, NULL);
    if (!window)
    {
        std::cout << "no window\n\n";
        glfwDestroyWindow(window);
        glfwTerminate();
        std::cout << "Program terminated.\n\n";
        return 0;
    }
    glfwMakeContextCurrent(window);
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glOrtho(-100.0f, 100.0f, -100.0f, 100.0f, -100.0f, 100.0f);
    double x, y, z, ohm;
    glClear(GL_COLOR_BUFFER_BIT && GL_DEPTH_BUFFER_BIT);
    glBegin(GL_LINE_LOOP);
    glColor3d(0.0, 1.0, 0.0);
    glVertex3d(-50., 50., 0.0);
    glVertex3d(50., 50., 0.0);
    glVertex3d(50., -50., 0.0);
    glVertex3d(-50., -50., 0.0);
    glEnd();
    for (int delta = 1; delta < 101; delta++)
    {
        glBegin(GL_POINTS);
        for (int theta = 0; theta < 628; theta++)
        {
            ohm = (theta - 314.) / 100.;
            x = (50. / delta) * cos(ohm);
            y = (50. / delta) * sin(ohm);
            z = (50. / delta) * sin((y - x) * pi);
            glColor3d((x / (100. / delta)) + 0.5, (z / (100. / delta)), (y / (100. / delta)) + 0.5);
            glVertex3d(x, y, 0.0);
        }
        glEnd();
        glFlush();
    }
    for (W = 0; W < 63; W++)
    {
        glBegin(GL_LINES);
        ohm = (W - 31.) / 10.;
        x = cos(ohm)*25.;
        y = sin(ohm)*25.;
        z = 0.;
        glColor3f(1., 0., 0);
        glVertex3d(0., 0., 0.);
        glVertex3d(x, y, z);
        glEnd();
    }
    glFlush();
    glfwSwapBuffers(window);
    goto ask;
quit:
    // exit program
    glfwDestroyWindow(window);
    glfwTerminate();
    std::cout << "Program terminated.\n\n";
    std::cin >> D;
    return 0;
}





// COPYRIGHT <2024> <JAMES C WILLIAMS>




