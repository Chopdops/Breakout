#pragma once
#include "Object.h"
#include "Ball.h"

class Block :
    public Object
{
public:
    Block();
    Block(std::shared_ptr<Mesh> mesh, glm::vec3 position, glm::vec3 scale, GLuint modelLocation, GLuint shaderID, glm::vec4 color, bool render);

    void Update(std::shared_ptr<Ball> ball, GLfloat& deltaTime, unsigned int& numOfBlocks);

    bool GetRenderVal() { return m_RenderVal; }
    void SetRenderTrue() { m_RenderVal = true; }

private:
    bool m_RenderVal;
};

