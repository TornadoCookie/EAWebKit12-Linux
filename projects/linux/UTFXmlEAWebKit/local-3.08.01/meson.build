
project('UTFXmlEAWebKit', 'cpp', version : 'local-3.08.01')

# PPMalloc.vcxproj

includes = include_directories(
  '../../../../EAWebKitSupportPackages/UTFXmlEAWebKit/local-3.08.01/include',
  '../../../../EAWebKitSupportPackages/coreallocatorEAWebKit/local-1.03.08/include',
  '../../../../EAWebKitSupportPackages/EABaseEAWebKit/local/include/Common',
  '../../../../EAWebKitSupportPackages/EASTLEAWebKit/local/include',
  '../../../../EAWebKitSupportPackages/EAAssertEAWebKit/local/include',
  '../../../../EAWebKitSupportPackages/EAIOEAWebKit/local/include',
)

headers = include_directories(
)

sources = [ 
'../../../../EAWebKitSupportPackages/UTFXmlEAWebKit/local-3.08.01/source/XmlCallbackReader.cpp',
'../../../../EAWebKitSupportPackages/UTFXmlEAWebKit/local-3.08.01/source/XmlDomReader.cpp',
'../../../../EAWebKitSupportPackages/UTFXmlEAWebKit/local-3.08.01/source/XmlEncoding.cpp',
'../../../../EAWebKitSupportPackages/UTFXmlEAWebKit/local-3.08.01/source/XmlReader.cpp',
'../../../../EAWebKitSupportPackages/UTFXmlEAWebKit/local-3.08.01/source/XmlReaderErrors.cpp',
'../../../../EAWebKitSupportPackages/UTFXmlEAWebKit/local-3.08.01/source/XmlTokenBuffer.cpp',
'../../../../EAWebKitSupportPackages/UTFXmlEAWebKit/local-3.08.01/source/XmlWriter.cpp',
'../../../../EAWebKitSupportPackages/UTFXmlEAWebKit/local-3.08.01/source/internal/UTFXmlCoreAllocator.cpp',
]

cxxflags = [
'-DUTF_USE_EAASSERT=1'
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

