// Function: FUN_01b82620
// Address: 01b82620
// Size: 744 bytes
// Class: MUSpectrumShaper


/* WARNING: Removing unreachable block (ram,0x01b826f4) */
/* WARNING: Removing unreachable block (ram,0x01b82700) */

void FUN_01b82620(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *unaff_RDI;
  longlong lVar3;
  longlong local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  if (unaff_RDI[0x3c] == 0) {
    plVar1 = (longlong *)FUN_01b83030();
    (**(code **)(*plVar1 + 0x18))();
    lVar3 = unaff_RDI[0x3c];
    unaff_RDI[0x3c] = (longlong)plVar1;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0x978))();
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *local_60 + 0x20))();
    local_70 = local_40;
    local_68 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        (**(code **)(*local_40 + 0x10))();
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_68 = '\x01';
    FUN_01aa6800();
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      (**(code **)(*local_70 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      (**(code **)(*local_40 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (unaff_RDI[0x3d] == 0) {
    plVar1 = (longlong *)FUN_01b83030();
    (**(code **)(*plVar1 + 0x18))();
    lVar3 = unaff_RDI[0x3d];
    unaff_RDI[0x3d] = (longlong)plVar1;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0x978))();
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *local_60 + 0x20))();
    local_50 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        (**(code **)(*local_40 + 0x10))();
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    FUN_01aa6800();
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      (**(code **)(*local_50 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      (**(code **)(*local_40 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar3 = 0;
  if (unaff_RDI[0x3e] != 0) {
    FUN_019214e0();
    lVar3 = unaff_RDI[0x3e];
  }
  lVar2 = unaff_RDI[0x3c];
  if ((lVar3 != lVar2) || (lVar2 = unaff_RDI[0x3d], lVar3 != lVar2)) {
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    unaff_RDI[0x3e] = lVar2;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  local_80 = *param_2;
  local_78 = '\0';
  FUN_0191dac0(param_1,&local_80);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  return;
}


