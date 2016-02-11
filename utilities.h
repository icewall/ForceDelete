#include <wchar.h>
#include <ntddk.h>
#include <ntifs.h>

long ForceDelete(wchar_t* path);
void hook_it(DEVICE_OBJECT *device_object,wchar_t* path);
void r0_fileToDelete(wchar_t* filePath);