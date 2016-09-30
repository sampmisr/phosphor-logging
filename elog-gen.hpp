// this file was autogenerated.  do not edit.
#pragma once

#include <tuple>
#include <type_traits>
#include "log.hpp"

namespace phosphor
{

namespace logging
{

namespace _file_not_found
{
struct errnum
{
    static constexpr auto str = "ERRNO=%d";
    using type = std::tuple<std::decay_t<decltype(str)>,int>;
    explicit constexpr errnum(int a) : _entry(entry(str, a)) {};
    type _entry;
};

struct file_path
{
    static constexpr auto str = "FILE_PATH=%s";
    using type = std::tuple<std::decay_t<decltype(str)>,const char*>;
    explicit constexpr file_path(const char *a) : _entry(entry(str,a)) {};
    type _entry;
};

struct file_name
{
   static constexpr auto str = "FILE_NAME=%s";
   using type = std::tuple<std::decay_t<decltype(str)>,const char*>;
   explicit constexpr file_name(const char *a) : _entry(entry(str,a)) {};
   type _entry;
};

} // namespace _file_not_found

struct file_not_found
{
    static constexpr auto err_code = "xyz.openbmc_project.logging.FILE_NOT_FOUND_ERROR";
    static constexpr auto err_msg = "A required file was not found";
    static constexpr auto L = level::INFO;

    using errnum = _file_not_found::errnum;
    using file_path = _file_not_found::file_path;
    using file_name = _file_not_found::file_name;

    using metadata_types = std::tuple<errnum, file_path, file_name>;
};



} // namespace logging

} // namespace phosphor