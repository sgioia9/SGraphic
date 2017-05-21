#ifndef MESH_HPP
#define MESH_HPP

#include <glm/glm.hpp>
#include <glad/glad.h>

#include <string>
#include <vector>

#include "shader.hpp"

namespace Core {
  struct Vertex {
    glm::vec3 position;
    glm::vec3 normals;
    glm::vec2 TexCoords;
  };

  struct Texture{
    GLuint id;
    std::string type;
  };

class Mesh {
  using Vertices = std::vector<Vertex>;
  using Textures = std::vector<Texture>;
  using Indices = std::vector<GLuint>;

public:
  Mesh(const Vertices& vertices,
       const Textures& textures,
       const Indices& indices);

  void draw(const Shader& shader) const;
  const Vertices& _vertices;
  const Textures& _textures;
  const Indices& _indices;
private:
  GLuint _VAO, _VBO, _EBO;
};
}

#endif // MESH_HPP
