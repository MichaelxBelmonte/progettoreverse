// Function: FUN_004b5d70
// Address: 004b5d70
// Size: 932 bytes
// Class: MDToolbarLayouter
// === MDToolbarLayouter properties ===
//   MDLayoutAlign   _align
//                   _centerLayout
//                   _rightLayout
//                   _showsEditorBar
//                   _toolbarEditMixCtrl
//                   _toolbarEditModeCtrl
//                   _toolbarQuantizeMacrosCtrl
//                   _toolbarUndoCtrl
//                   _toolbarToolCtrl
//                   _toolbarEditorViewCtrl
//                   _toolbarVersionCtrl
//                   _toolbarTrackMemoryUsageCtrl


int64_t * FUN_004b5d70(void*param_1,void*param_2)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  char *pcVar4;
  void* pVar5;
  int64_t *this_ptr;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t local_90;
  char local_88 [8];
  int64_t local_68;
  char local_60;
  int local_50;
  char local_38 [8];
  
  pvVar3 = _pthread_getspecific((void*)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7210();
  if (local_60 == '\0') {
    if (local_68 == 0) goto LAB_004b5fed;
    FUN_00d50b00();
  }
  else if (local_68 == 0) goto LAB_004b5fed;
  local_50 = -1;
  bVar1 = false;
  lVar6 = 0;
  while (local_50 = local_50 + 1, local_50 < *(int *)(local_68 + 0xc)) {
    pvVar3 = _pthread_getspecific((void*)*(void*)(local_68 + 0x10));
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264240();
    local_38[0] = local_88[0];
    pcVar4 = local_88;
    if (local_88[0] == '\0') {
      pcVar4 = local_38;
    }
    *pcVar4 = '\0';
    if ((local_88[0] != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if (local_90 == lVar6) {
      if ((local_38[0] != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (lVar6 != 0) {
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
        if ((local_38[0] != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        FUN_001159b0();
        FUN_00d50b20();
        if (!bVar1) {
          return this_ptr;
        }
        goto LAB_004b6109;
      }
      if ((local_38[0] == '\0') && (local_90 != 0)) {
        FUN_00d50b00();
      }
      bVar1 = true;
      lVar6 = local_90;
    }
  }
  FUN_001159b0();
  pVar5 = (void*)local_68;
  FUN_00d50b20();
  if (lVar6 != 0) {
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar2 = FUN_01326de0();
    if (iVar2 != 0) {
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar7 = FUN_012ebfe0();
      *param_2 = uVar7;
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar7 = FUN_012ebd30();
      *param_1 = uVar7;
      *(void*)(this_ptr + 1) = 0;
      if (!bVar1) {
        FUN_00d50b00();
      }
      *this_ptr = lVar6;
      *(void*)(this_ptr + 1) = 1;
      return this_ptr;
    }
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    if (!bVar1) {
      return this_ptr;
    }
LAB_004b6109:
    FUN_00d50b20();
    return this_ptr;
  }
LAB_004b5fed:
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return this_ptr;
}

