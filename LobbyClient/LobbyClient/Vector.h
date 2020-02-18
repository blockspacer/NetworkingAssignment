#pragma once

#include <iostream>

#include "Convertable.h"

struct Vector3CS
{
public:
	Vector3CS(float _x, float _y, float _z);
	Vector3CS(float _x, float _y);
	Vector3CS(float _x);
	Vector3CS();

	friend std::ostream& operator<<(std::ostream& out, const Vector3CS& vec);

	float x, y, z;
};

struct Vector3 : Convertable
{
public:
	Vector3(float _x, float _y, float _z);
	Vector3(float _x, float _y);
	Vector3(float _x);
	Vector3();

	virtual std::string ToString() override;
	virtual void SetValue(std::string toConv) override;

	float x, y, z;

	friend std::ostream& operator<<(std::ostream& out, const Vector3& vec);
};