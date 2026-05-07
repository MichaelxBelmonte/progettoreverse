// Function: FUN_01d827c0
// Address: 01d827c0
// Size: 934 bytes
// Class: GNResponder


/* WARNING: Removing unreachable block (ram,0x01d82b2a) */
/* WARNING: Removing unreachable block (ram,0x01d82b36) */

ulonglong FUN_01d827c0(undefined8 param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar6;
  longlong *local_70;
  undefined4 local_68;
  longlong local_60;
  char local_58;
  undefined1 local_50;
  longlong *local_48;
  char local_40;
  char local_31;
  
  FUN_00d4efa0();
  FUN_01cae990();
  plVar6 = local_48;
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  cVar3 = FUN_00c86130();
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    FUN_01cae990();
    uVar5 = FUN_00d8b910();
    if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b00();
    }
    lVar1 = *unaff_RSI;
    local_68 = 2;
    local_70 = &DAT_024c5048;
    local_58 = 0;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_58 = '\x01';
    local_70 = (longlong *)&DAT_0268b698;
    local_60 = lVar1;
    local_50 = param_2;
    FUN_00d3af80(&DAT_027f1320,uVar5,&local_70);
    plVar6 = local_48;
    if (local_40 == '\0') {
      if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
         (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
    }
    local_70 = &DAT_024c5048;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    cVar3 = (**(code **)(*plVar6 + 0x368))();
    local_31 = '\0';
    FUN_00d3aaa0();
    if (cVar3 == '\0') {
      FUN_00d4efa0();
      plVar6 = local_70;
      FUN_01cae990();
      plVar2 = local_48;
      if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_00c85fb0();
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      plVar6 = (longlong *)CONCAT71((int7)((ulonglong)uVar5 >> 8),local_31 != '\0');
    }
    FUN_00d50b20();
    if (cVar3 != '\0') goto LAB_01d82b4d;
  }
  (**(code **)(*unaff_RDI + 0x370))();
  plVar6 = local_70;
  if ((char)local_68 == '\0') {
    if (local_70 != (longlong *)0x0) {
      FUN_00d50b00();
      if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01d82ae1;
    }
  }
  else if (local_70 != (longlong *)0x0) {
LAB_01d82ae1:
    cVar3 = FUN_00d50c10();
    if (cVar3 == '\0') {
      plVar6 = (longlong *)0x0;
    }
    else {
      uVar4 = (**(code **)(*plVar6 + 0x3b8))();
      plVar6 = (longlong *)(ulonglong)uVar4;
    }
    FUN_00d50b20();
    goto LAB_01d82b4d;
  }
  plVar6 = (longlong *)0x0;
LAB_01d82b4d:
  return (ulonglong)plVar6 & 0xffffff01;
}


