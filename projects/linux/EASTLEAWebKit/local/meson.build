
project('EASTLEAWebKit', 'cpp', version : 'local')

# EASTL.vcxproj

includes = include_directories(
    '../../../../EAWebKitSupportPackages/EASTLEAWebKit/local/include',
    '../../../../EAWebKitSupportPackages/EASTLEAWebKit/local/source',
    '../../../../EAWebKitSupportPackages/EABaseEAWebKit/local/include/Common',
    '../../../../EAWebKitSupportPackages/EAAssertEAWebKit/local/include',
    '../../../../EAWebKitSupportPackages/coreallocatorEAWebKit/local-1.03.08/include'
)

headers = include_directories(
    '../../../../EAWebKitSupportPackages/EASTLEAWebKit/local/include'
)

sources = [  
    '../../../../EAWebKitSupportPackages/EASTLEAWebKit/local/source/allocator.cpp',
    '../../../../EAWebKitSupportPackages/EASTLEAWebKit/local/source/assert.cpp',
    '../../../../EAWebKitSupportPackages/EASTLEAWebKit/local/source/fixed_pool.cpp',
    '../../../../EAWebKitSupportPackages/EASTLEAWebKit/local/source/hashtable.cpp',
    '../../../../EAWebKitSupportPackages/EASTLEAWebKit/local/source/red_black_tree.cpp',
    '../../../../EAWebKitSupportPackages/EASTLEAWebKit/local/source/string.cpp',
]

cxxflags = [
  '-std=c++17'
]

libn = meson.project_name()

if get_option('buildtype') == 'debug'
  cxxflags += '-D_DEBUG'
  cxxflags += '-DEA_DEBUG'
else
  cxxflags += '-DNDEBUG' 
endif

dependencies = [
]

target = static_library(
  libn,
  sources,
  cpp_args : cxxflags,
  include_directories: includes,
  dependencies: dependencies
)

project_dep = declare_dependency(
  include_directories: headers,
  link_with : target
)

set_variable(meson.project_name() + '_dep', project_dep)

