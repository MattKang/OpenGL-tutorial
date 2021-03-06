///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2011 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2008-08-31
// Updated : 2008-08-31
// Licence : This source is under MIT License
// File    : test/core/type_mat3x2.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <glm/glm.hpp>

static bool test_operators()
{
	glm::mat3x2 m(1.0f);
	glm::vec3 u(1.0f);
	glm::vec2 v(1.0f);
	float x = 1.0f;
	glm::vec2 a = m * u;
	glm::vec3 b = v * m;
	glm::mat3x2 n = x / m;
	glm::mat3x2 o = m / x;
	glm::mat3x2 p = x * m;
	glm::mat3x2 q = m * x;
	bool R = m != q;
	bool S = m == m;

	return true;
}

int main()
{
	bool Result = true;

	Result = Result && test_operators();

	assert(Result);
	return Result;
}

