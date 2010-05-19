///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Overload Copyright (c) 2010 - 2010 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2010-03-05
// Updated : 2010-03-05
// Licence : This source is under MIT License
// File    : glo/core/core110.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

// OpenGL 1.1 pointers
PFNGLDRAWARRAYSPROC gloDrawArrays = 0;

// OpenGL 1.1 functions
inline void glDrawArrays(GLenum mode, GLint first, GLsizei count)
{
#ifdef GLO_DEBUG
	if(!gloDrawArray)
		OutputDebugString("glDrawArrays implementation not found");
#endif//GLO_DEBUG

	assert(gloDrawArrays);
	gloDrawArrays(mode, first, count);

#ifdef GLO_DEBUG
	gloCheckError("glDrawArrays");
#endif//GLO_DEBUG
}