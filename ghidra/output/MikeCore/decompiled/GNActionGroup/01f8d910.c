// Function: FUN_01f8d910
// Address: 01f8d910
// Size: 1346 bytes
// Class: GNActionGroup
// String references:
//   "GNActionGroup"


/* WARNING: Removing unreachable block (ram,0x01f8ddc1) */
/* WARNING: Removing unreachable block (ram,0x01f8dd12) */
/* WARNING: Removing unreachable block (ram,0x01f8dd1b) */
/* WARNING: Removing unreachable block (ram,0x01f8dc0c) */
/* WARNING: Removing unreachable block (ram,0x01f8dc1c) */
/* WARNING: Removing unreachable block (ram,0x01f8dab2) */
/* WARNING: Removing unreachable block (ram,0x01f8dabe) */
/* WARNING: Removing unreachable block (ram,0x01f8dc72) */
/* WARNING: Removing unreachable block (ram,0x01f8dc7b) */
/* WARNING: Removing unreachable block (ram,0x01f8db2e) */
/* WARNING: Removing unreachable block (ram,0x01f8db37) */
/* WARNING: Removing unreachable block (ram,0x01f8dd95) */
/* WARNING: Removing unreachable block (ram,0x01f8dda2) */
/* WARNING: Removing unreachable block (ram,0x01f8db77) */
/* WARNING: Removing unreachable block (ram,0x01f8dba0) */
/* WARNING: Removing unreachable block (ram,0x01f8db79) */
/* WARNING: Removing unreachable block (ram,0x01f8dba2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_01f8d910(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *unaff_RDI;
  longlong local_b8;
  char local_b0;
  longlong local_68;
  char local_60;
  int local_50;
  
  lVar3 = local_68;
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  (*DAT_02572370)();
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_01caf660();
    FUN_01cafb00();
    if ((local_60 == '\0') && (local_68 != 0)) {
      FUN_00d50b00();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 != 0) {
      if (0 < *(int *)(local_68 + 0xc)) {
        iVar5 = 0;
        do {
          cVar4 = FUN_01f8ce40();
          if (cVar4 != '\0') {
            FUN_00d21140();
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(local_68 + 0xc));
      }
      FUN_01cb0380();
      FUN_00d50b20();
    }
    *unaff_RDI = puVar6;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return unaff_RDI;
  }
  if ((DAT_026e73b0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_02801338 = FUN_00d4fe50();
    _DAT_02801320 = "GNActionGroup";
    _DAT_02801328 = 0x38;
    _DAT_02801330 = FUN_001a4a20;
    _DAT_02801340 = 0;
    uRam0000000002801348 = 0;
    _DAT_02801350 = 0;
    uRam0000000002801358 = 0;
    _DAT_02801360 = 0;
    uRam0000000002801368 = 0;
    _DAT_02801370 = 0;
    uRam0000000002801378 = 0;
    _DAT_02801380 = 0;
    uRam0000000002801388 = 0;
    _DAT_02801390 = 0;
    uRam0000000002801398 = 0;
    _DAT_028013a0 = 0;
    uRam00000000028013a8 = 0;
    _DAT_028013b0 = 0;
    uRam00000000028013b8 = 0;
    _DAT_028013c0 = 0;
    uRam00000000028013c8 = 0;
    _DAT_028013d0 = 0;
    uRam00000000028013d8 = 0;
    _DAT_028013e0 = 0;
    ___cxa_guard_release();
  }
  (**(code **)(*plVar1 + 0x360))();
  cVar4 = FUN_00e85ea0();
  if (cVar4 == '\0') {
    param_1 = &DAT_02802688;
  }
  lVar2 = param_1[1];
  if (((char)lVar2 == '\0') || (*param_1 == 0)) {
    if (*param_1 == 0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      if (puVar6 == (undefined8 *)0x0) {
        return unaff_RDI;
      }
      FUN_00d50b20();
      return unaff_RDI;
    }
  }
  else {
    FUN_00d50b00();
  }
  FUN_01caf140();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
      goto LAB_01f8db3c;
    }
  }
  else if (local_68 != 0) {
LAB_01f8db3c:
    local_60 = '\0';
    local_68 = 0;
    local_50 = -1;
    while( true ) {
      lVar7 = (longlong)local_50;
      local_50 = local_50 + 1;
      if (*(int *)(lVar3 + 0xc) <= local_50) break;
      local_68 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + 8 + lVar7 * 8);
      cVar4 = FUN_01f8d150();
      if (cVar4 != '\0') {
        FUN_00d21140();
      }
    }
    FUN_002a0990();
    FUN_00d50b20();
  }
  FUN_01caf110();
  if (local_60 == '\0') {
    if (local_68 == 0) goto LAB_01f8dd37;
    FUN_00d50b00();
  }
  else if (local_68 == 0) goto LAB_01f8dd37;
  if (0 < *(int *)(local_68 + 0xc)) {
    iVar5 = 0;
    do {
      cVar4 = FUN_01f8ce40();
      if (cVar4 != '\0') {
        FUN_00d21140();
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(local_68 + 0xc));
  }
  FUN_01cb0380();
  FUN_00d50b20();
LAB_01f8dd37:
  *unaff_RDI = puVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((char)lVar2 != '\0') {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


