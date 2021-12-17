#pragma once

#include "Object.h"

#include <memory>

#include "GLFW/glfw3.h"

class Paddle : public Object
{
private:
	GLfloat m_InitialMovementSpeed;
	GLfloat m_MovementSpeed;
	GLfloat m_MaxSpeed;
	GLfloat m_Velocity;

	GLint m_BufferHeight;
	GLint m_BufferWidth;

public:
	Paddle();
	Paddle(std::shared_ptr<Mesh> mesh, glm::vec3 position, glm::vec3 scale, GLuint modelLocation, GLfloat movementSpeed, GLint bufferHeight, GLint bufferWidth, GLuint shaderID, glm::vec4 color, GLfloat maxSpeed);

	void Reset();

	void KeyMove(bool* m_Keys, GLfloat& deltaTime, GLenum& keyUp, GLenum& keyDown);

	void IncrSpeed(float speedIncr);

	~Paddle();
};

