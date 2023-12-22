file(REMOVE_RECURSE
  "libadmin.a"
  "libadmin.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/admin.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
