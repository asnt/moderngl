#pragma once

#include <Python.h>

#include "VertexArrayMember.hpp"

struct MGLVertexArrayListAttribute : public MGLVertexArrayMember {
	PyObject * content;
	int location;
};

extern PyTypeObject MGLVertexArrayListAttribute_Type;

MGLVertexArrayListAttribute * MGLVertexArrayListAttribute_New();
