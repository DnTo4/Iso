file(REMOVE_RECURSE
  "libdirector.a"
  "libdirector.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/director.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
