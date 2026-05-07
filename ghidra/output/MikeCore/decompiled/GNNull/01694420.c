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


undefined8 * FUN_01694420(ulonglong param_1,uint param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  
  FUN_00da7190();
  if ((param_2 & 1) == 0) {
    puVar5 = (undefined8 *)0x0;
    FUN_016aea20();
    goto LAB_01694559;
  }
  if ((param_2 & 2) == 0) {
    puVar5 = (undefined8 *)0x0;
    FUN_016aea20();
    goto LAB_01694559;
  }
  if ((param_2 & 4) == 0) {
    puVar5 = (undefined8 *)0x0;
    FUN_016aea20();
    goto LAB_01694559;
  }
  if ((uint)param_1 == 0) {
    puVar5 = (undefined8 *)0x0;
    FUN_016aea20();
    goto LAB_01694559;
  }
  if ((~param_2 & (uint)param_1) != 0) {
    puVar5 = (undefined8 *)0x0;
    FUN_016aea20();
    goto LAB_01694559;
  }
  if ((unaff_RSI == 0) || (cVar2 = FUN_0168a120(), cVar2 == '\0')) {
    FUN_016aea20();
    puVar5 = (undefined8 *)0x0;
    goto LAB_01694559;
  }
  FUN_00d50b00();
  cVar2 = FUN_0168a0d0();
  if (cVar2 == '\0') {
    puVar5 = (undefined8 *)0x0;
    FUN_016aea20();
  }
  else if (*(longlong *)(unaff_RDI + 0x98) == 0) {
    if ((*(byte *)(unaff_RDI + 0xa0) & 1) == 0) {
      cVar2 = FUN_016ae5f0();
      uVar6 = *(uint *)(unaff_RDI + 0xa0);
      if (cVar2 == '\0') {
        if ((uVar6 & 2) != 0) {
          puVar5 = (undefined8 *)0x0;
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
        uVar6 = *(uint *)(unaff_RDI + 0xa0);
      }
      if ((uVar6 & 4) == 0) {
        *(byte *)(unaff_RDI + 0xa5) = (byte)param_1 & 1;
        *(byte *)(unaff_RDI + 0xa6) = (byte)((param_1 & 0xffffffff) >> 1) & 1;
        *(byte *)(unaff_RDI + 0xa7) = (byte)((param_1 & 0xffffffff) >> 2) & 1;
        cVar2 = FUN_016ae5f0();
        if (cVar2 == '\0') {
          cVar2 = FUN_00bd22a0();
          if (cVar2 != '\0') {
            FUN_016aea20();
          }
          iVar3 = (**(code **)(**(longlong **)(unaff_RDI + 0x68) + 0xb0))();
          if ((*(char *)(unaff_RDI + 0xa6) != '\0') && (iVar3 == 1)) {
            FUN_016aea20();
          }
        }
        lVar1 = *(longlong *)(unaff_RDI + 0x98);
        if (lVar1 != unaff_RSI) {
          FUN_00d50b00();
          *(longlong *)(unaff_RDI + 0x98) = unaff_RSI;
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b00();
        FUN_01689630();
        if (unaff_RDI != 0) {
          FUN_00d50b20();
        }
        *(undefined1 *)(unaff_RDI + 0xa4) = 1;
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
        puVar5 = (undefined8 *)FUN_00e83020();
        *puVar5 = 0x48;
        cVar2 = FUN_016ae5f0();
        if (cVar2 != '\0') {
          puVar5[1] = unaff_RDI;
          puVar5[2] = &DAT_025f8d98;
        }
        if (*(char *)(unaff_RDI + 0xa5) != '\0') {
          puVar5[3] = unaff_RDI;
          puVar5[4] = &DAT_025f8db0;
        }
        if (*(char *)(unaff_RDI + 0xa6) != '\0') {
          puVar5[5] = unaff_RDI;
          puVar5[6] = &DAT_025f8dc8;
        }
        if (*(char *)(unaff_RDI + 0xa7) != '\0') {
          puVar5[7] = unaff_RDI;
          puVar5[8] = &DAT_025f8df0;
        }
        *(undefined8 **)(unaff_RDI + 0x90) = puVar5;
      }
      else {
        puVar5 = (undefined8 *)0x0;
        FUN_016aea20(uVar6,
                     "!GNHasFlag(_araBindingLockFlags, MUAraPlugInReceivedCreateController) && \"binding must be done before creating the UI\""
                    );
      }
    }
    else {
      puVar5 = (undefined8 *)0x0;
      FUN_016aea20();
    }
  }
  else {
    puVar5 = (undefined8 *)0x0;
    FUN_016aea20();
  }
LAB_01694551:
  FUN_00d50b20();
LAB_01694559:
  FUN_00da71b0();
  return puVar5;
}


