// Function: FUN_00c6e3d0
// Address: 00c6e3d0
// Size: 1015 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00c6e71d) */
/* WARNING: Removing unreachable block (ram,0x00c6e726) */
/* WARNING: Removing unreachable block (ram,0x00c6e6d7) */
/* WARNING: Removing unreachable block (ram,0x00c6e6e3) */
/* WARNING: Removing unreachable block (ram,0x00c6e566) */
/* WARNING: Removing unreachable block (ram,0x00c6e56f) */
/* WARNING: Removing unreachable block (ram,0x00c6e5ec) */
/* WARNING: Removing unreachable block (ram,0x00c6e5f5) */
/* WARNING: Removing unreachable block (ram,0x00c6e685) */
/* WARNING: Removing unreachable block (ram,0x00c6e68e) */
/* WARNING: Removing unreachable block (ram,0x00c6e7a2) */
/* WARNING: Removing unreachable block (ram,0x00c6e7ae) */
/* WARNING: Removing unreachable block (ram,0x00c6e479) */
/* WARNING: Removing unreachable block (ram,0x00c6e482) */
/* WARNING: Removing unreachable block (ram,0x00c6e4cc) */
/* WARNING: Removing unreachable block (ram,0x00c6e4f0) */
/* WARNING: Removing unreachable block (ram,0x00c6e4ce) */
/* WARNING: Removing unreachable block (ram,0x00c6e4f4) */

undefined8 FUN_00c6e3d0(void)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *unaff_RSI;
  undefined8 unaff_RDI;
  longlong local_80;
  char local_78;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  int local_40;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  pcVar2 = DAT_02572370;
  (*DAT_02572370)();
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*pcVar2)();
  (**(code **)(*unaff_RSI + 0x3d8))();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_00c6e5b3;
    FUN_00d50b00();
  }
  else if (local_58 == 0) goto LAB_00c6e5b3;
  local_40 = -1;
  while( true ) {
    lVar5 = (longlong)local_40;
    local_40 = local_40 + 1;
    if (*(int *)(local_58 + 0xc) <= local_40) break;
    plVar1 = *(longlong **)(*(longlong *)(local_58 + 0x10) + 8 + lVar5 * 8);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 400))();
      if (local_78 == '\0') {
        if (local_80 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_78 = '\0';
      }
      local_68 = local_80;
      local_60 = '\0';
      FUN_00d21140();
      if (local_80 != 0) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00c6f7c0();
  FUN_00d50b20();
LAB_00c6e5b3:
  lVar5 = DAT_02772078;
  if (1 < *(int *)((longlong)puVar3 + 0xc)) {
    if (DAT_02772078 != 0) {
      FUN_00d50b00();
    }
    FUN_00d21140();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  lVar5 = DAT_02772080;
  if (DAT_02772080 != 0) {
    FUN_00d50b00();
  }
  FUN_00d95130();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  FUN_00d21140();
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  lVar5 = DAT_02772088;
  if (1 < *(int *)((longlong)puVar3 + 0xc)) {
    if (DAT_02772088 != 0) {
      FUN_00d50b00();
    }
    FUN_00d21140();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  lVar5 = DAT_027259e0;
  if (DAT_027259e0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d95130();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return unaff_RDI;
}


