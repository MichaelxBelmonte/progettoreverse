// Function: FUN_01e85f80
// Address: 01e85f80
// Size: 632 bytes
// Class: GNLocaleExportController
// String references:
//   "GNLocaleExportController"
// === GNLocaleExportController properties ===
//                   _destDir
//                   _oldDir
//                   _oldDir2
//                   _destResourceDir
//                   _oldResourceDir2
//                   _oldResourceDir
//                   _buildFromScratch
//                   _removeUnsedKeys


void FUN_01e85f80(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_0005aa20();
  *this_ptr = &g_026bf360;
  FUN_01e862d0();
  FUN_01e86550();
  FUN_01e867d0();
  FUN_01e86a50();
  FUN_01e86d40();
  FUN_01e87030();
  *(void*)(this_ptr + 0x14) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f8143 == '\0') {
    FUN_01e87320();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xa1) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f8143 == '\0') {
    FUN_01e87490();
    FUN_00e87980();
  }
  return;
}

