{
  'includes': [
    'common.gypi'
  ],
  'targets': [
    {
      'target_name': 'lib2048',
      'type': 'static_library',
      'sources': [
        'djinni/twenty_forty_eight.djinni',
        '<!@(python scripts/glob.py include/ *.cpp *.hpp)',
        '<!@(python scripts/glob.py src/ *.hpp *.cpp)',
      ],
      'include_dirs': [
        'include',
      ],
      'all_dependent_settings': {
        'include_dirs': [
          'include/',
        ]
      },
    },
    {
      'target_name': 'lib2048_ios',
      'type': 'static_library',
      'dependencies': [
        'third_party/djinni/support-lib/support_lib.gyp:djinni_objc',
        'lib2048'
      ],
      'sources': [
        '<!@(python scripts/glob.py third_party/djinni/support-lib/objc/ *.h *.mm)',
        '<!@(python scripts/glob.py ios/Twenty48/Djinni *.h *.m *.mm)',
      ],
      'include_dirs': [
        'ios/Twenty48/Djinni'
      ],
      'all_dependent_settings': {
        'include_dirs': [
          'ios/Twenty48/Djinni'
        ],
      },
    },
    {
      'target_name': 'lib2048_jni',
      'type': 'shared_library',
      'dependencies': [
        'third_party/djinni/support-lib/support_lib.gyp:djinni_jni',
        'lib2048'
      ],
      'ldflags': [
        '-llog',
        '-Wl,--build-id,--gc-sections,--exclude-libs,ALL'
      ],
      'sources': [
        '<!@(python scripts/glob.py android/jni-src/ *.hpp *.cpp)',
        '<!@(python scripts/glob.py third_party/djinni/support-lib/jni/ *.hpp *.cpp)',
      ],
      'include_dirs': [
        'include'
      ],
    },
    {
      'target_name': 'test',
      'type': 'executable',
      'dependencies': [
        'lib2048',
        'third_party/gtest.gyp:gtest'
      ],
      'cflags_cc!': [
        '-Werror',
        '-Wextra'
      ],
      'xcode_settings': {
        'OTHER_CPLUSPLUSFLAGS!': [
          '-Werror',
          '-Wextra'
        ]
      },
      'include_dirs': [
        'test',
      ],
      'sources': [
        '<!@(python scripts/glob.py test/ *.cpp)'
      ],
    },
    {
      'target_name': 'xctest_runner',
      'type': 'loadable_module',
      'mac_xctest_bundle': 1,
      'cflags_cc!': [ '-Werror', '-Wextra' ],
      'xcode_settings': {
        'OTHER_CPLUSPLUSFLAGS!' : ['-Werror', '-Wextra'],
      },
      'dependencies': [
        'lib2048',
        'third_party/gtest.gyp:gtest',
      ],
      'include_dirs': [
        'test',
      ],
      'sources': [
        '<!@(python scripts/glob.py test *.cpp *.hpp)',
        'third_party/xcode-googletest/Bundle/GoogleTests.mm',
      ]
    },
  ],
}
