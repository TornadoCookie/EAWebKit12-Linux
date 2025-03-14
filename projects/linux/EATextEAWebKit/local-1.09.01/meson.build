
project('EATextEAWebKit', 'cpp', version : 'local-1.09.01')

# EAText.vcxproj

includes = include_directories(
   '../../../../EAWebKitSupportPackages/EATextEAWebKit/local-1.09.01/include',
   '../../../../EAWebKitSupportPackages/EATextEAWebKit/local-1.09.01/source',
   '../../../../EAWebKitSupportPackages/EABaseEAWebKit/local/include/Common',
   '../../../../EAWebKitSupportPackages/coreallocatorEAWebKit/local-1.03.08/include',
   '../../../../EAWebKitSupportPackages/EASTLEAWebKit/local/include',
   '../../../../EAWebKitSupportPackages/PPMallocEAWebKit/local/include',
   '../../../../EAWebKitSupportPackages/EAAssertEAWebKit/local/include',
   '../../../../EAWebKitSupportPackages/EAIOEAWebKit/local/include',
   '../../../../EAWebKitSupportPackages/FreeTypeEAWebKit/local-2.4.8.02/freetype-2.4.8/include',
)

headers = include_directories(
)

sources = [  
    '../../../../EAWebKitSupportPackages/EATextEAWebKit/local-1.09.01/source/EAText.cpp',
    '../../../../EAWebKitSupportPackages/EATextEAWebKit/local-1.09.01/source/EATextBaseline.cpp',
    '../../../../EAWebKitSupportPackages/EATextEAWebKit/local-1.09.01/source/EATextBmpFont.cpp',
    '../../../../EAWebKitSupportPackages/EATextEAWebKit/local-1.09.01/source/EATextBreak.cpp',
    '../../../../EAWebKitSupportPackages/EATextEAWebKit/local-1.09.01/source/EATextCache.cpp',
    '../../../../EAWebKitSupportPackages/EATextEAWebKit/local-1.09.01/source/EATextCollation.cpp',
    '../../../../EAWebKitSupportPackages/EATextEAWebKit/local-1.09.01/source/EATextCompression.cpp',
    '../../../../EAWebKitSupportPackages/EATextEAWebKit/local-1.09.01/source/EATextDebugFont.cpp',
    '../../../../EAWebKitSupportPackages/EATextEAWebKit/local-1.09.01/source/EATextEffects.cpp',
    '../../../../EAWebKitSupportPackages/EATextEAWebKit/local-1.09.01/source/EATextFont.cpp',
    '../../../../EAWebKitSupportPackages/EATextEAWebKit/local-1.09.01/source/EATextFontServer.cpp',
    '../../../../EAWebKitSupportPackages/EATextEAWebKit/local-1.09.01/source/EATextLayout.cpp',
    '../../../../EAWebKitSupportPackages/EATextEAWebKit/local-1.09.01/source/EATextOutlineFont.cpp',
    '../../../../EAWebKitSupportPackages/EATextEAWebKit/local-1.09.01/source/EATextPolygonFont.cpp',
    '../../../../EAWebKitSupportPackages/EATextEAWebKit/local-1.09.01/source/EATextScript.cpp',
    '../../../../EAWebKitSupportPackages/EATextEAWebKit/local-1.09.01/source/EATextStyle.cpp',
    '../../../../EAWebKitSupportPackages/EATextEAWebKit/local-1.09.01/source/EATextStyleReader.cpp',
    '../../../../EAWebKitSupportPackages/EATextEAWebKit/local-1.09.01/source/EATextTypesetter.cpp',
    '../../../../EAWebKitSupportPackages/EATextEAWebKit/local-1.09.01/source/EATextUnicode.cpp',
    '../../../../EAWebKitSupportPackages/EATextEAWebKit/local-1.09.01/source/internal/EATextBidi.cpp',
    '../../../../EAWebKitSupportPackages/EATextEAWebKit/local-1.09.01/source/internal/EATextBitmap.cpp',
    '../../../../EAWebKitSupportPackages/EATextEAWebKit/local-1.09.01/source/internal/EATextOpenType.cpp',
    '../../../../EAWebKitSupportPackages/EATextEAWebKit/local-1.09.01/source/internal/EATextShapeArabic.cpp',
    '../../../../EAWebKitSupportPackages/EATextEAWebKit/local-1.09.01/source/internal/EATextShapeGeneral.cpp',
    '../../../../EAWebKitSupportPackages/EATextEAWebKit/local-1.09.01/source/internal/EATextShapeHangul.cpp',
    '../../../../EAWebKitSupportPackages/EATextEAWebKit/local-1.09.01/source/internal/EATextShapeHebrew.cpp',
    '../../../../EAWebKitSupportPackages/EATextEAWebKit/local-1.09.01/source/internal/EATextShapeIndic.cpp',
    '../../../../EAWebKitSupportPackages/EATextEAWebKit/local-1.09.01/source/internal/EATextShapeThai.cpp',
    '../../../../EAWebKitSupportPackages/EATextEAWebKit/local-1.09.01/source/internal/EATextSquish.cpp',
    '../../../../EAWebKitSupportPackages/EATextEAWebKit/local-1.09.01/source/internal/EATextStream.cpp',
    '../../../../EAWebKitSupportPackages/EATextEAWebKit/local-1.09.01/source/internal/StdC.cpp'

]

cxxflags = [
  '-DEATEXT_BITMAP_USE_EAGIMEX=0',
  '-DEATEXT_USE_FREETYPE=1',
  '-DENABLE_NON_RAM_STREAM=1',
  '-DUTF_USE_EAASSERT=1',
  '-std=c++17',
  
]

libn = meson.project_name()

if get_option('buildtype') == 'debug'
  cxxflags += '-D_DEBUG'
  cxxflags += '-DEA_DEBUG=1'
#  cxxflags += [
#    '-fsanitize=address',
#    '-O1',
#    '-fno-omit-frame-pointer'
#  ]
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

