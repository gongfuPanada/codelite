#include "JSFunction.h"
#include "file_logger.h"
#include <algorithm>

JSFunction::JSFunction() {}

JSFunction::~JSFunction() {}

void JSFunction::Print(int depth)
{
    wxString indent(' ', (size_t)depth);
    CL_DEBUG("%s{[Function] Name: \"%s\", Path: \"%s\", Signature: \"%s\", Doc: \"%s\"",
             indent,
             m_name,
             m_path,
             m_signature,
             m_comment);
    if(!m_properties.empty()) {
        std::for_each(m_properties.begin(), m_properties.end(), [&](const std::pair<wxString, JSObject::Ptr_t>& p) {
            (p.second)->Print(depth + 2);
        });
    }
}
