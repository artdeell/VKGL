/* VKGL (c) 2018 Dominik Witczak
 *
 * This code is licensed under MIT license (see LICENSE.txt for details)
 */
#include "OpenGL/entrypoints/GL2.0/gl_vertex_attrib_4d.h"
#include "OpenGL/context.h"
#include "OpenGL/globals.h"

static bool validate(VKGL::Context*  in_context_ptr,
                     const GLuint&   in_index,
                     const GLdouble& in_x,
                     const GLdouble& in_y,
                     const GLdouble& in_z,
                     const GLdouble& in_w)
{
    bool result = false;

    // ..

    result = true;
    return result;
}

void VKGL_APIENTRY vkglVertexAttrib4d(GLuint   index,
                                      GLdouble x,
                                      GLdouble y,
                                      GLdouble z,
                                      GLdouble w)
{
    const auto& dispatch_table_ptr = g_dispatch_table_ptr;

    dispatch_table_ptr->pGLVertexAttrib4d(dispatch_table_ptr->bound_context_ptr,
                                          index,
                                          x,
                                          y,
                                          z,
                                          w);
}

void vkglVertexAttrib4d_execute(VKGL::Context*  in_context_ptr,
                                const GLuint&   in_index,
                                const GLdouble& in_x,
                                const GLdouble& in_y,
                                const GLdouble& in_z,
                                const GLdouble& in_w)
{
    const double data[] =
    {
        in_x,
        in_y,
        in_z,
        in_w
    };

    in_context_ptr->set_vertex_attribute(in_index,
                                         VKGL::GetSetArgumentType::Double,
                                         VKGL::GetSetArgumentType::Float,
                                         4,
                                         false, /* in_normalized */
                                         data);
}

void vkglVertexAttrib4d_with_validation(VKGL::Context*  in_context_ptr,
                                        const GLuint&   in_index,
                                        const GLdouble& in_x,
                                        const GLdouble& in_y,
                                        const GLdouble& in_z,
                                        const GLdouble& in_w)
{
    if (validate(in_context_ptr,
                 in_index,
                 in_x,
                 in_y,
                 in_z,
                 in_w) )
    {
        vkglVertexAttrib4d_execute(in_context_ptr,
                                   in_index,
                                   in_x,
                                   in_y,
                                   in_z,
                                   in_w);
    }
}
