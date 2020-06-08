if(IDF_VERSION_MAJOR GREATER_EQUAL 4)
    idf_component_register(
        INCLUDE_DIRS "."
        )
else()
    set(COMPONENT_ADD_INCLUDEDIRS src)
    register_component()
endif()
