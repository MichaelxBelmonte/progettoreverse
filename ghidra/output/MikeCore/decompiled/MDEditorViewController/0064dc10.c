// Function: FUN_0064dc10
// Address: 0064dc10
// Size: 507 bytes
// Class: MDEditorViewController


/* WARNING: Removing unreachable block (ram,0x0064dd6f) */
/* WARNING: Removing unreachable block (ram,0x0064dd78) */
/* WARNING: Removing unreachable block (ram,0x0064ddd9) */
/* WARNING: Removing unreachable block (ram,0x0064dde2) */

void FUN_0064dc10(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong *unaff_RDI;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0x5f8))();
  plVar2 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (*(int *)((longlong)plVar2 + 0xc) == 1) {
    if (unaff_RDI[0x30] != 0) {
      FUN_00093a30();
      plVar2 = local_40;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 == unaff_RDI) {
        FUN_00094d10();
      }
    }
    FUN_01e56750();
    FUN_01e5eda0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(*unaff_RDI + 0x5d8))();
    plVar2 = local_40;
    if (((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
       ((FUN_00d50b00(), local_38 != '\0' && (local_40 != (longlong *)0x0)))) {
      FUN_00d50b20();
    }
    local_48 = 0;
    lVar1 = unaff_RDI[0x16];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_48 = '\x01';
    local_50 = lVar1;
    cVar3 = (**(code **)(*unaff_RDI + 0x620))(param_1,&local_50);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      local_58 = 0;
      lVar1 = unaff_RDI[0x16];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_58 = '\x01';
      local_60 = lVar1;
      (**(code **)(*unaff_RDI + 0x628))(param_1,&local_60);
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}


