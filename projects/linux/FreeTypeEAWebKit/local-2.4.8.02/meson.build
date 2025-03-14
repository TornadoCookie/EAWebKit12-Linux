
project('FreeTypeEAWebKit', 'c', version : 'local-2.4.8.02')

# FreeType.vcxproj

includes = include_directories(
    '../../../../EAWebKitSupportPackages/FreeTypeEAWebKit/local-2.4.8.02/freetype-2.4.8/include'
)

headers = include_directories(
)

sources = [
   '../../../../EAWebKitSupportPackages/FreeTypeEAWebKit/local-2.4.8.02/freetype-2.4.8/src/autofit/autofit.c',
    '../../../../EAWebKitSupportPackages/FreeTypeEAWebKit/local-2.4.8.02/freetype-2.4.8/src/base/ftbase.c',
    '../../../../EAWebKitSupportPackages/FreeTypeEAWebKit/local-2.4.8.02/freetype-2.4.8/src/base/ftbbox.c',
    '../../../../EAWebKitSupportPackages/FreeTypeEAWebKit/local-2.4.8.02/freetype-2.4.8/src/base/ftbitmap.c',
    '../../../../EAWebKitSupportPackages/FreeTypeEAWebKit/local-2.4.8.02/freetype-2.4.8/src/base/ftdebug.c',
    '../../../../EAWebKitSupportPackages/FreeTypeEAWebKit/local-2.4.8.02/freetype-2.4.8/src/base/ftfstype.c',
    '../../../../EAWebKitSupportPackages/FreeTypeEAWebKit/local-2.4.8.02/freetype-2.4.8/src/base/ftgasp.c',
    '../../../../EAWebKitSupportPackages/FreeTypeEAWebKit/local-2.4.8.02/freetype-2.4.8/src/base/ftglyph.c',
    '../../../../EAWebKitSupportPackages/FreeTypeEAWebKit/local-2.4.8.02/freetype-2.4.8/src/base/ftinit.c',
    '../../../../EAWebKitSupportPackages/FreeTypeEAWebKit/local-2.4.8.02/freetype-2.4.8/src/base/ftmm.c',
    '../../../../EAWebKitSupportPackages/FreeTypeEAWebKit/local-2.4.8.02/freetype-2.4.8/src/base/ftpfr.c',
    '../../../../EAWebKitSupportPackages/FreeTypeEAWebKit/local-2.4.8.02/freetype-2.4.8/src/base/ftstroke.c',
    '../../../../EAWebKitSupportPackages/FreeTypeEAWebKit/local-2.4.8.02/freetype-2.4.8/src/base/ftsynth.c',
    '../../../../EAWebKitSupportPackages/FreeTypeEAWebKit/local-2.4.8.02/freetype-2.4.8/src/base/ftsystem.c',
    '../../../../EAWebKitSupportPackages/FreeTypeEAWebKit/local-2.4.8.02/freetype-2.4.8/src/base/fttype1.c',
    '../../../../EAWebKitSupportPackages/FreeTypeEAWebKit/local-2.4.8.02/freetype-2.4.8/src/base/ftwinfnt.c',
    '../../../../EAWebKitSupportPackages/FreeTypeEAWebKit/local-2.4.8.02/freetype-2.4.8/src/bdf/bdf.c',
    '../../../../EAWebKitSupportPackages/FreeTypeEAWebKit/local-2.4.8.02/freetype-2.4.8/src/cache/ftcache.c',
    '../../../../EAWebKitSupportPackages/FreeTypeEAWebKit/local-2.4.8.02/freetype-2.4.8/src/cff/cff.c',
    '../../../../EAWebKitSupportPackages/FreeTypeEAWebKit/local-2.4.8.02/freetype-2.4.8/src/cid/type1cid.c',
    '../../../../EAWebKitSupportPackages/FreeTypeEAWebKit/local-2.4.8.02/freetype-2.4.8/src/gzip/ftgzip.c',
    '../../../../EAWebKitSupportPackages/FreeTypeEAWebKit/local-2.4.8.02/freetype-2.4.8/src/lzw/ftlzw.c',
    '../../../../EAWebKitSupportPackages/FreeTypeEAWebKit/local-2.4.8.02/freetype-2.4.8/src/pcf/pcf.c',
    '../../../../EAWebKitSupportPackages/FreeTypeEAWebKit/local-2.4.8.02/freetype-2.4.8/src/pfr/pfr.c',
    '../../../../EAWebKitSupportPackages/FreeTypeEAWebKit/local-2.4.8.02/freetype-2.4.8/src/psaux/psaux.c',
    '../../../../EAWebKitSupportPackages/FreeTypeEAWebKit/local-2.4.8.02/freetype-2.4.8/src/pshinter/pshinter.c',
    '../../../../EAWebKitSupportPackages/FreeTypeEAWebKit/local-2.4.8.02/freetype-2.4.8/src/psnames/psnames.c',
    '../../../../EAWebKitSupportPackages/FreeTypeEAWebKit/local-2.4.8.02/freetype-2.4.8/src/raster/raster.c',
    '../../../../EAWebKitSupportPackages/FreeTypeEAWebKit/local-2.4.8.02/freetype-2.4.8/src/sfnt/sfnt.c',
    '../../../../EAWebKitSupportPackages/FreeTypeEAWebKit/local-2.4.8.02/freetype-2.4.8/src/smooth/smooth.c',
    '../../../../EAWebKitSupportPackages/FreeTypeEAWebKit/local-2.4.8.02/freetype-2.4.8/src/truetype/truetype.c',
    '../../../../EAWebKitSupportPackages/FreeTypeEAWebKit/local-2.4.8.02/freetype-2.4.8/src/type1/type1.c',
    '../../../../EAWebKitSupportPackages/FreeTypeEAWebKit/local-2.4.8.02/freetype-2.4.8/src/type42/type42.c',
    '../../../../EAWebKitSupportPackages/FreeTypeEAWebKit/local-2.4.8.02/freetype-2.4.8/src/winfonts/winfnt.c',
]

cflags = [
  '-DFT2_BUILD_LIBRARY'
]

libn = meson.project_name()

if get_option('buildtype') == 'debug'
  cflags += '-D_DEBUG'
  cflags += '-DEA_DEBUG'
  cflags += '-DFT_DEBUG_LEVEL_ERROR'
  cflags += '-DFT_DEBUG_LEVEL_TRACE'
else
  cflags += '-DNDEBUG' 
endif

dependencies = [
]

target = static_library(
  libn,
  sources,
  c_args : cflags,
  include_directories: includes,
  dependencies: dependencies
)

project_dep = declare_dependency(
  include_directories: headers,
  link_with : target
)

set_variable(meson.project_name() + '_dep', project_dep)

