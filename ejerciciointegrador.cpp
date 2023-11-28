#include <vector>
#include <string>
#include <map>
#include "json11.hpp"
#include "jsonlib.hpp"

{
"name": "RapidJSON",
"version": "1.1.0",
"keywords": "json, sax, dom, parser, generator",
"description": "A fast JSON parser/generator for C++ with both SAX/DOM style API",
"export": {
"include": "include"
},
"examples": "example/*/*.cpp",
"repository":
{
"type": "git",
"url": "https://github.com/Tencent/rapidjson"
}
}
enum variant_type { Symbol, Number, List, Proc, Lambda, Cadena };

enum variant_type { Symbol, Number, List, Proc, Lambda, Cadena };

struct Entorno;

class Variant {
public:
    typedef Variant(*proc_type)(const std::vector<Variant> &);

    typedef std::vector<Variant>::const_iterator iter;
    typedef std::map<std::string, Variant> map;

    variant_type type;
    std::string val;
}