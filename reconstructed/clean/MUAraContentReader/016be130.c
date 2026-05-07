// Function: FUN_016be130
// Address: 016be130
// Size: 536 bytes
// Class: MUAraContentReader
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "contentTypes != NULL"
//   "MUAraContentReader::isEventTypeSupported((GNInt)contentTypes[i])"
//   "contentTypes == NULL"
//   "GNClearFlags(transformationFlags, factory->supportedPlaybackTransformationFlags) == 0"
//   "(contentTypesCount > 0) || (transformationFlags != ARA::kARAPlaybackTransformationNoChanges)"
// === MUAraContentReader properties ===
//                   _playbackWrappers
//                   _previewWrappers
//                   _guiWrappers
//                   _isRestoringObjects
//                   _structureProblemFound
//                   _isHostEditingDocument
//                   _resetUndoWhenHostEndsEditing
//                   _documentDataChanged
//                   _didSimulateBeginEditing
//                   _trackSelectionDidChange
//                   _simulatedAra1RegionSequences
//                   _musicalContextData


char FUN_016be130(int64_t param_1,int64_t param_2,uint param_3)

{
  code *pcVar1;
  char cVar2;
  int64_t lVar3;
  int unaff_ESI;
  int64_t this_ptr;
  
  if ((this_ptr == 0) || (cVar2 = FUN_0168a120(), cVar2 == '\0')) {
    if (g_02802f60 == (void*)0x0) {
      return '\0';
    }
    pcVar1 = *g_02802f60;
  }
  else {
    cVar2 = FUN_0168a0d0();
    if (cVar2 == '\0') {
      if (g_02802f60 == (void*)0x0) {
        return '\0';
      }
      pcVar1 = *g_02802f60;
    }
    else {
      if (param_2 == 0) {
        if (param_1 != 0) {
          if (g_02802f60 == (void*)0x0) {
            return '\0';
          }
          pcVar1 = *g_02802f60;
          goto joined_r0x016be1b8;
        }
      }
      else {
        if (param_1 == 0) {
          if (g_02802f60 == (void*)0x0) {
            return '\0';
          }
          pcVar1 = *g_02802f60;
          goto joined_r0x016be1b8;
        }
        lVar3 = 0;
        do {
          cVar2 = FUN_0172c0d0();
          if (cVar2 == '\0') {
            if (g_02802f60 == (void*)0x0) {
              return '\0';
            }
            pcVar1 = *g_02802f60;
            goto joined_r0x016be1b8;
          }
          lVar3 = lVar3 + 1;
        } while (param_2 != lVar3);
      }
      FUN_016ace20();
      if ((~g_028ad950 & param_3) == 0) {
        if ((param_2 != 0) || (param_3 != 0)) {
          if (g_02802f58 == '\0') {
            if (g_027cb0f4 != '\0') {
              return '\x01';
            }
            if (unaff_ESI != 0) {
              if (g_02802f50 == 0x0) {
                return '\0';
              }
              g_02802f58 = 1;
              (*g_02802f50)();
              g_02802f58 = 0;
              return g_027cb0f4;
            }
          }
          return '\0';
        }
        if (g_02802f60 == (void*)0x0) {
          return '\0';
        }
        pcVar1 = *g_02802f60;
      }
      else {
        if (g_02802f60 == (void*)0x0) {
          return '\0';
        }
        pcVar1 = *g_02802f60;
      }
    }
  }
joined_r0x016be1b8:
  if (pcVar1 != 0x0) {
    (*pcVar1)();
  }
  return '\0';
}

