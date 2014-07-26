#ifndef _OBJ_RENDER_H_
#define _OBJ_RENDER_H_
#include "../../tiny_obj_loader.h"

class TextureManager
{
public:
	TextureManager() {}
	virtual ~TextureManager() {}
	virtual unsigned int getTextureId(const tinyobj::shape_t& shape,
									  const tinyobj::material_t& material) = 0;
};

void render_object(const std::vector<tinyobj::shape_t>& shapes,
				   TextureManager *texman);

#endif