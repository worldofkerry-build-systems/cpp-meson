project('tutorial', 'c')

cpp_meson_lib_proj = subproject('cpp_meson_lib')
cpp_meson_lib_dep = cpp_meson_lib_proj.get_variable('cpp_meson_lib_dep')

executable('demo', 'main.c', dependencies : [cpp_meson_lib_dep])