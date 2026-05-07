// Function: FUN_012380b0
// Address: 012380b0
// Size: 1377 bytes
// Class: MUAudioEffectRenderProcessorIdentifier
// === MUAudioEffectRenderProcessorIdentifier properties ===
//                   _parameterChangeCounter
//                   _renderProcessor
//                   _inputRecorder
//                   _outputRecorder
//                   _parameterIdentifier
//                   _distribution
//                   _lowercaseModeTitle
//                   _lowercaseLocalizedModeTitle
//                   _score


void FUN_012380b0(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char *pcVar4;
  int64_t this_ptr;
  int64_t *local_58;
  int64_t *local_50;
  char local_48 [8];
  int64_t *local_40;
  char local_38 [8];
  
  if (*(int64_t **)(this_ptr + 0xf8) == (int64_t *)0x0) goto LAB_0123860e;
  (**(code **)(**(int64_t **)(this_ptr + 0xf8) + 0x5c0))();
  plVar1 = local_40;
  local_50 = local_40;
  if (local_38[0] == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0123811e;
    }
LAB_01238180:
    (**(code **)(**(int64_t **)(this_ptr + 0xf8) + 0x370))();
  }
  else {
    if (local_40 == (int64_t *)0x0) goto LAB_01238180;
LAB_0123811e:
    FUN_00d50b00();
    FUN_012364a0();
    plVar2 = local_40;
    if (plVar1 == local_40) {
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (local_38[0] == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar2;
      FUN_00d50b20();
    }
    else {
      FUN_00d50b20();
      local_50 = plVar2;
    }
    FUN_00d50b20();
    (**(code **)(*g_028ac258 + 0x368))();
    FUN_01237080();
    plVar1 = local_40;
    if (local_38[0] == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38[0] = '\0';
    }
    if (plVar1 == (int64_t *)0x0) {
      FUN_01238a00();
      local_58 = local_40;
      if (local_40 == (int64_t *)0x0) {
        local_58 = plVar1;
      }
      else if (((local_38[0] == '\0') && (FUN_00d50b00(), local_38[0] != '\0')) &&
              (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01238aa0();
      FUN_00d21140();
    }
    else {
      FUN_00d24140();
      local_58 = plVar1;
    }
    (**(code **)(**(int64_t **)(this_ptr + 0xf8) + 0x388))();
    plVar1 = *(int64_t **)(this_ptr + 0xf8);
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    local_40 = plVar1;
    FUN_00e323f0();
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (0x1e0 < *(int *)(g_028ac248 + 0xc)) {
LAB_01238434:
      FUN_00d23310();
      plVar1 = local_40;
      local_48[0] = local_38[0];
      pcVar4 = local_38;
      if (local_38[0] == '\0') {
        pcVar4 = local_48;
      }
      *pcVar4 = '\0';
      if ((local_38[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48[0] == '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      FUN_01237080();
      plVar2 = local_40;
      if (local_38[0] == '\0') {
        if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
           (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38[0] = '\0';
      }
      do {
        FUN_01237130();
        plVar3 = local_40;
        if (local_38[0] == '\0') {
          if (local_40 == (int64_t *)0x0) goto LAB_01238530;
          FUN_00d50b00();
          if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else if (local_40 == (int64_t *)0x0) goto LAB_01238530;
        (**(code **)(*plVar3 + 0x370))();
        FUN_00d50b20();
      } while( true );
    }
LAB_012385c2:
    (**(code **)(*g_028ac258 + 0x378))();
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t *)(this_ptr + 0xf8) != 0) {
    *(void*)(this_ptr + 0xf8) = 0;
    FUN_00d50b20();
  }
LAB_0123860e:
  FUN_00b342a0();
  return;
LAB_01238530:
  local_38[0] = '\0';
  local_40 = plVar1;
  FUN_00e383c0();
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d23620();
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (*(int *)(g_028ac248 + 0xc) < 0x1e1) goto LAB_012385c2;
  goto LAB_01238434;
}

