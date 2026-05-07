// Function: FUN_00c861e0
// Address: 00c861e0
// Size: 1909 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00c86623) */
/* WARNING: Removing unreachable block (ram,0x00c86513) */
/* WARNING: Removing unreachable block (ram,0x00c8651c) */
/* WARNING: Removing unreachable block (ram,0x00c8621d) */
/* WARNING: Removing unreachable block (ram,0x00c86229) */
/* WARNING: Removing unreachable block (ram,0x00c86309) */
/* WARNING: Removing unreachable block (ram,0x00c86312) */
/* WARNING: Removing unreachable block (ram,0x00c86402) */
/* WARNING: Removing unreachable block (ram,0x00c8640b) */
/* WARNING: Removing unreachable block (ram,0x00c86367) */
/* WARNING: Removing unreachable block (ram,0x00c86373) */
/* WARNING: Removing unreachable block (ram,0x00c8666c) */
/* WARNING: Removing unreachable block (ram,0x00c86675) */
/* WARNING: Removing unreachable block (ram,0x00c863a4) */
/* WARNING: Removing unreachable block (ram,0x00c864ca) */
/* WARNING: Removing unreachable block (ram,0x00c86561) */
/* WARNING: Removing unreachable block (ram,0x00c8656d) */
/* WARNING: Removing unreachable block (ram,0x00c86827) */
/* WARNING: Removing unreachable block (ram,0x00c86850) */
/* WARNING: Removing unreachable block (ram,0x00c86737) */
/* WARNING: Removing unreachable block (ram,0x00c86760) */
/* WARNING: Removing unreachable block (ram,0x00c86297) */
/* WARNING: Removing unreachable block (ram,0x00c862c0) */
/* WARNING: Removing unreachable block (ram,0x00c86299) */
/* WARNING: Removing unreachable block (ram,0x00c862c2) */
/* WARNING: Removing unreachable block (ram,0x00c866a0) */
/* WARNING: Removing unreachable block (ram,0x00c866ac) */
/* WARNING: Removing unreachable block (ram,0x00c86739) */
/* WARNING: Removing unreachable block (ram,0x00c86762) */
/* WARNING: Removing unreachable block (ram,0x00c86829) */
/* WARNING: Removing unreachable block (ram,0x00c86852) */

void FUN_00c861e0(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong unaff_RDI;
  int iVar8;
  longlong local_68;
  char local_60;
  int local_50;
  
  FUN_00d50f50();
  FUN_00c86ee0();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  lVar1 = *(longlong *)(unaff_RDI + 0x40);
  if (lVar1 != 0) {
    local_50 = -1;
    while( true ) {
      lVar4 = (longlong)local_50;
      local_50 = local_50 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_50) break;
      lVar4 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8 + lVar4 * 8);
      cVar3 = FUN_00d23d70();
      if (cVar3 == '\0') {
        plVar5 = (longlong *)FUN_00e8fc40();
        FUN_0004f1e0();
        (**(code **)(*plVar5 + 0x18))();
        FUN_00e2cf00();
        FUN_00e2cfa0();
        FUN_00c7a080();
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        FUN_00e2d120();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        puVar6 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar6 = &DAT_024c1cd8;
        puVar6[2] = 0;
        puVar6[3] = 0;
        FUN_00d500e0();
        lVar2 = DAT_027edfc8;
        if (DAT_027edfc8 != 0) {
          FUN_00d50b00();
        }
        FUN_00e2de60();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_02772658;
        if (DAT_02772658 != 0) {
          FUN_00d50b00();
        }
        FUN_00c7ace0();
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        FUN_00e2ded0();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        FUN_00e2cff0();
        puVar7 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar7 = &DAT_024c1cd8;
        puVar7[2] = 0;
        puVar7[3] = 0;
        FUN_00d500e0();
        if (puVar6 == puVar7) {
          FUN_00d50b20();
        }
        else {
          FUN_00d50b20();
        }
        lVar2 = DAT_02772660;
        if (DAT_02772660 != 0) {
          FUN_00d50b00();
        }
        FUN_00e2de60();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        FUN_00c7a080();
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        FUN_00e2ded0();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        FUN_00e2cff0();
        FUN_00c87100();
        FUN_00d50b20();
        FUN_00d50b20();
      }
    }
    FUN_00018280();
  }
  lVar1 = *(longlong *)(unaff_RDI + 0x28);
  if (lVar1 != 0) {
    local_50 = -1;
    while (local_50 = local_50 + 1, local_50 < *(int *)(lVar1 + 0xc)) {
      FUN_00d50b00();
      FUN_00d744a0();
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00cc1480();
  }
  lVar1 = *(longlong *)(unaff_RDI + 0x30);
  if (lVar1 != 0) {
    local_50 = -1;
    while (local_50 = local_50 + 1, local_50 < *(int *)(lVar1 + 0xc)) {
      FUN_00d50b00();
      FUN_00d744a0();
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00559a70();
  }
  lVar1 = *(longlong *)(unaff_RDI + 0x38);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar8 = 0;
      do {
        FUN_00d50b00();
        FUN_00e2cfe0();
        if (unaff_RDI != 0) {
          FUN_00d50b20();
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(lVar1 + 0xc));
    }
    FUN_00c89410();
  }
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  return;
}


