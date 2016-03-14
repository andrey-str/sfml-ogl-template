//
// Created by Andrey Streltsov on 14/03/16.
//

#include "Renderer.h"
#include <SFML/OpenGL.hpp>

void Renderer::draw() {

    glClearColor(1.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
}

