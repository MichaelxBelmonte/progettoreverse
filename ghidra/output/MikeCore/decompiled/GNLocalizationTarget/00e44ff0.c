// Function: FUN_00e44ff0
// Address: 00e44ff0
// Size: 600 bytes
// Class: GNLocalizationTarget
// String references:
//   "Unknown compressor '%@'"


/* WARNING: Removing unreachable block (ram,0x00e45026) */
/* WARNING: Removing unreachable block (ram,0x00e45032) */

void FUN_00e44ff0(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_a0;
  char local_98;
  longlong *local_40;
  uint local_38;
  longlong *local_30;
  char local_28;
  
  FUN_00c8ced0();
  if (*unaff_RSI == 0) {
    *(undefined4 *)(unaff_RDI + 0x28) = 0;
    return;
  }
  FUN_00d4efa0();
  FUN_00c7e7b0();
  plVar2 = local_40;
  if ((char)local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      if (((char)local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_38 = local_38 & 0xffffff00;
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_02786798;
  if (DAT_02786798 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar2 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027867a0;
  uVar4 = 1;
  if (cVar3 == '\0') {
    if (DAT_027867a0 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*plVar2 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027867a8;
    uVar4 = 2;
    if (cVar3 == '\0') {
      if (DAT_027867a8 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*plVar2 + 0x50))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027816e8;
      uVar4 = 3;
      if (cVar3 == '\0') {
        if (DAT_027816e8 != 0) {
          FUN_00d50b00();
        }
        local_38 = 1;
        local_40 = &DAT_024c5048;
        FUN_00d50b00();
        local_30 = plVar2;
        local_28 = '\x01';
        FUN_00cc7b40(param_1,&local_40);
        local_40 = &DAT_024c5048;
        if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        goto LAB_00e4516b;
      }
    }
  }
  *(undefined4 *)(unaff_RDI + 0x28) = uVar4;
LAB_00e4516b:
  FUN_00d50b20();
  return;
}


