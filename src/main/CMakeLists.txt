aux_source_directory(. MAIN_SORCE)
add_executable(hello ${MAIN_SORCE})


INSTALL(TARGETS hello
        LIBRARY DESTINATION lib
        RUNTIME DESTINATION bin
)
