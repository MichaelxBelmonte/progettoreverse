// Function: FUN_002be670
// Address: 002be670
// Size: 516 bytes
// Class: MDEditorScrollView


void FUN_002be670(void)

{
  longlong *plVar1;
  char cVar2;
  char *pcVar3;
  longlong *unaff_RDI;
  longlong *plVar4;
  longlong local_60;
  longlong *local_58;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (unaff_RDI[0x17] == 0) {
    return;
  }
  FUN_01e40eb0();
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 == (longlong *)0x0) {
    return;
  }
  plVar4 = unaff_RDI + 0x17;
  plVar1 = (longlong *)*plVar4;
  FUN_000f5df0();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_002be6fa;
  }
  plVar4 = &DAT_02802688;
LAB_002be6fa:
  local_58 = (longlong *)*plVar4;
  if (local_58 != (longlong *)0x0) {
    FUN_00d50b00();
    FUN_00d50b00();
    local_38[0] = '\0';
    do {
      (**(code **)(*unaff_RDI + 0x370))();
      if (local_48 == unaff_RDI) {
        if (((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) && (local_40[0] != '\0'))
        goto LAB_002be787;
      }
      else {
        unaff_RDI = local_48;
        if (local_40[0] == '\0') {
          if (local_38[0] == '\0') {
            pcVar3 = local_38;
          }
          else {
            FUN_00d50b20();
            pcVar3 = local_38;
          }
        }
        else {
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
LAB_002be787:
          local_38[0] = '\x01';
          pcVar3 = local_40;
        }
        *pcVar3 = '\0';
      }
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00082eb0();
      plVar4 = &DAT_02802688;
      if (unaff_RDI != (longlong *)0x0) {
        (**(code **)(*unaff_RDI + 0x360))();
        cVar2 = FUN_00e85ea0();
        plVar4 = &local_60;
        if (cVar2 == '\0') {
          plVar4 = &DAT_02802688;
        }
      }
      if (*plVar4 != 0) {
        if ((local_38[0] == '\0') && (unaff_RDI != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        break;
      }
    } while (unaff_RDI != (longlong *)0x0);
    FUN_00d50b20();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00791130();
      (**(code **)(*local_58 + 0x918))();
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}


