PROJECT(ticket-decoder-dip-detection)

AUX_SOURCE_DIRECTORY("api/source" PROJECT_SOURCE)
AUX_SOURCE_DIRECTORY("detail/source" PROJECT_SOURCE)
file(GLOB PROJECT_INCLUDES
   "api/include/*.h"
   "detail/include/*.h")

ADD_LIBRARY(${PROJECT_NAME} STATIC ${PROJECT_SOURCE} ${PROJECT_INCLUDES})
target_include_directories(${PROJECT_NAME} PRIVATE)
target_link_libraries(${PROJECT_NAME} PRIVATE
   opencv::opencv_core_alias
   opencv::opencv_imgproc_alias
   opencv::opencv_objdetect_alias
   easyloggingpp::easyloggingpp)

add_custom_target(${PROJECT_NAME}.Copy ALL
   COMMAND ${CMAKE_COMMAND} -E copy_directory ${PROJECT_SOURCE_DIR}/etc $<TARGET_FILE_DIR:${PROJECT_NAME}>/etc/dip
   DEPENDS ${PROJECT_NAME}
   COMMENT "Copying configuration files")
