project(ticket-decoder)

file(GLOB PROJECT_INCLUDES "include/*.h")
file(GLOB PROJECT_ETC "etc/*")

IF (WITH_TICKET_ANALYZER)

  add_executable("ticket-analyzer" "source/analyzer.cpp" ${PROJECT_INCLUDES} ${PROJECT_ETC})
  target_include_directories("ticket-analyzer" PRIVATE)
  target_link_libraries("ticket-analyzer"
    tclap::tclap
    opencv::opencv_core_alias
    easyloggingpp::easyloggingpp
    nlohmann_json::nlohmann_json
    ticket-decoder-io-api
    ticket-decoder-io-pdf
    ticket-decoder-io-image
    ticket-decoder-io-camera
    ticket-decoder-lib-barcode
    ticket-decoder-dip-detection
    ticket-decoder-dip-filtering
    ticket-decoder-dip-utility
    ticket-decoder-lib-uic918
    ticket-decoder-lib-utility
    ticket-decoder-ui)
ENDIF()

add_executable("ticket-decoder" "source/decoder.cpp" ${PROJECT_INCLUDES} ${PROJECT_ETC})
target_include_directories("ticket-decoder" PRIVATE)
target_link_libraries("ticket-decoder"
  tclap::tclap
  opencv::opencv_core_alias
  easyloggingpp::easyloggingpp
  ticket-decoder-io-api
  ticket-decoder-io-pdf
  ticket-decoder-io-image
  ticket-decoder-lib-barcode
  ticket-decoder-dip-detection
  ticket-decoder-dip-filtering
  ticket-decoder-lib-uic918
  ticket-decoder-lib-utility)

add_custom_target(${PROJECT_NAME}.Copy ALL
  COMMAND ${CMAKE_COMMAND} -E copy_directory $<TARGET_FILE_DIR:ticket-decoder-dip-detection>/etc/dip $<TARGET_FILE_DIR:${PROJECT_NAME}>/etc/dip
  DEPENDS ${PROJECT_NAME}
  COMMENT "Copying configuration files")
