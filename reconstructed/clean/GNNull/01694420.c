// Function: FUN_01694420
// Address: 01694420
// Size: 1001 bytes
// Class: GNNull
// String references:
//   "(knownRoles & ARA::kARAPlaybackRendererRole) != 0"
//   "(knownRoles & ARA::kARAEditorRendererRole) != 0"
//   "(knownRoles & ARA::kARAEditorViewRole) != 0"
//   "assignedRoles != 0"
//   "(knownRoles | assignedRoles) == knownRoles"
//   "(_documentController == GNNull) && \"binding must be done only once\""
//   "!GNHasFlag(_araBindingLockFlags, MUAraPlugInReceivedStartProcessing) && \"binding must be done befo...
//   "!GNHasFlag(_araBindingLockFlags, MUAraPlugInReceivedSetParameterState) && \"binding must be done be...
//   "!GNHasFlag(_araBindingLockFlags, MUAraPlugInReceivedCreateController) && \"binding must be done bef...
//   "!hostHoldsOnToUnusedStoppedPlugIns()"
//   "!_isEditorRenderer || !isNotProcessingContinuouslyWhileActive"
//   "provided object ref is invalid"
//   "call required from document main thread"

void* FUN_01694420(uint64_t param_1,uint param_2)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  void*puVar5;
  uint uVar6;
  int64_t arg1;
  int64_t this_ptr;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  
  FUN_00da7190();
  if ((param_2 & 1) == 0) {
    puVar5 = (void*)0x0;
    FUN_016aea20();
    goto LAB_01694559;
  }
  if ((param_2 & 2) == 0) {
    puVar5 = (void*)0x0;
    FUN_016aea20();
    goto LAB_01694559;
  }
  if ((param_2 & 4) == 0) {
    puVar5 = (void*)0x0;
    FUN_016aea20();
    goto LAB_01694559;
  }
  if ((uint)param_1 == 0) {
    puVar5 = (void*)0x0;
    FUN_016aea20();
    goto LAB_01694559;
  }
  if ((~param_2 & (uint)param_1) != 0) {
    puVar5 = (void*)0x0;
    FUN_016aea20();
    goto LAB_01694559;
  }
  if ((arg1 == 0) || (cVar2 = FUN_0168a120(), cVar2 == '\0')) {
    FUN_016aea20();
    puVar5 = (void*)0x0;
    goto LAB_01694559;
  }
  FUN_00d50b00();
  cVar2 = FUN_0168a0d0();
  if (cVar2 == '\0') {
    puVar5 = (void*)0x0;
    FUN_016aea20();
  }
  else if (*(int64_t *)(this_ptr + 0x98) == 0) {
    if ((*(byte *)(this_ptr + 0xa0) & 1) == 0) {
      cVar2 = FUN_016ae5f0();
      uVar6 = *(uint *)(this_ptr + 0xa0);
      if (cVar2 == '\0') {
        if ((uVar6 & 2) != 0) {
          puVar5 = (void*)0x0;
          FUN_016aea20(uVar6,
                       "!GNHasFlag(_araBindingLockFlags, MUAraPlugInReceivedSetParameterState) && \"binding must be done before restoring state\""
                      );
          goto LAB_01694551;
        }
      }
      else if ((uVar6 & 2) != 0) {
        FUN_016aea20(uVar6,
                     "!GNHasFlag(_araBindingLockFlags, MUAraPlugInReceivedSetParameterState) && \"binding must be done before restoring state\""
                    );
        uVar6 = *(uint *)(this_ptr + 0xa0);
      }
      if ((uVar6 & 4) == 0) {
        *(byte *)(this_ptr + 0xa5) = (byte)param_1 & 1;
        *(byte *)(this_ptr + 0xa6) = (byte)((param_1 & 0xffffffff) >> 1) & 1;
        *(byte *)(this_ptr + 0xa7) = (byte)((param_1 & 0xffffffff) >> 2) & 1;
        cVar2 = FUN_016ae5f0();
        if (cVar2 == '\0') {
          cVar2 = FUN_00bd22a0();
          if (cVar2 != '\0') {
            FUN_016aea20();
          }
          iVar3 = (**(code **)(**(int64_t **)(this_ptr + 0x68) + 0xb0))();
          if ((*(char *)(this_ptr + 0xa6) != '\0') && (iVar3 == 1)) {
            FUN_016aea20();
          }
        }
        lVar1 = *(int64_t *)(this_ptr + 0x98);
        if (lVar1 != arg1) {
          FUN_00d50b00();
          *(int64_t *)(this_ptr + 0x98) = arg1;
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b00();
        FUN_01689630();
        if (this_ptr != 0) {
          FUN_00d50b20();
        }
        *(void*)(this_ptr + 0xa4) = 1;
        cVar2 = FUN_016ae5f0();
        if (cVar2 == '\0') {
          FUN_0167ab60();
          pvVar4 = _pthread_getspecific(uVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01537ab0();
          iVar3 = *(int *)(local_60 + 0xc);
          if (local_58 != '\0') {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (iVar3 != 0) {
            FUN_016948c0();
          }
        }
        puVar5 = (void*)FUN_00e83020();
        *puVar5 = 0x48;
        cVar2 = FUN_016ae5f0();
        if (cVar2 != '\0') {
          puVar5[1] = this_ptr;
          puVar5[2] = &g_025f8d98;
        }
        if (*(char *)(this_ptr + 0xa5) != '\0') {
          puVar5[3] = this_ptr;
          puVar5[4] = &g_025f8db0;
        }
        if (*(char *)(this_ptr + 0xa6) != '\0') {
          puVar5[5] = this_ptr;
          puVar5[6] = &g_025f8dc8;
        }
        if (*(char *)(this_ptr + 0xa7) != '\0') {
          puVar5[7] = this_ptr;
          puVar5[8] = &g_025f8df0;
        }
        *(void**)(this_ptr + 0x90) = puVar5;
      }
      else {
        puVar5 = (void*)0x0;
        FUN_016aea20(uVar6,
                     "!GNHasFlag(_araBindingLockFlags, MUAraPlugInReceivedCreateController) && \"binding must be done before creating the UI\""
                    );
      }
    }
    else {
      puVar5 = (void*)0x0;
      FUN_016aea20();
    }
  }
  else {
    puVar5 = (void*)0x0;
    FUN_016aea20();
  }
LAB_01694551:
  FUN_00d50b20();
LAB_01694559:
  FUN_00da71b0();
  return puVar5;
}

