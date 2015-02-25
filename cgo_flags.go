// Package protobuf uses the cgo compilation facilities to build the
// Protobuf C++ library. Note that support for zlib is not compiled
// in.
package protobuf

// #cgo CXXFLAGS: -std=c++11
// #cgo CPPFLAGS: -DHAVE_CONFIG_H -Iinternal/src
import "C"