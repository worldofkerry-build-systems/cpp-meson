project('tutorial', 'cpp',
    default_options : ['cpp_std=c++2a'])

libfib_proj = subproject('libfib')
libfib_dep = libfib_proj.get_variable('libfib_dep')

executable('main', 'main.cpp', dependencies : [libfib_dep])

e = executable('test', 'tests/test.cpp', dependencies : [libfib_dep])

test('name of test', e)