// Function: FUN_01430a30
// Address: 01430a30
// Size: 1034 bytes
// Class: MUSpectrumShaper


/* WARNING: Removing unreachable block (ram,0x01430d97) */
/* WARNING: Removing unreachable block (ram,0x01430da0) */
/* WARNING: Removing unreachable block (ram,0x01430ce8) */
/* WARNING: Removing unreachable block (ram,0x01430cf4) */
/* WARNING: Removing unreachable block (ram,0x01430b07) */
/* WARNING: Removing unreachable block (ram,0x01430b10) */
/* WARNING: Removing unreachable block (ram,0x01430ba9) */
/* WARNING: Removing unreachable block (ram,0x01430bb5) */
/* WARNING: Removing unreachable block (ram,0x01430c57) */
/* WARNING: Removing unreachable block (ram,0x01430c60) */
/* WARNING: Removing unreachable block (ram,0x01430e30) */
/* WARNING: Removing unreachable block (ram,0x01430e3c) */

void FUN_01430a30(void)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong unaff_RDI;
  int iVar7;
  longlong local_68;
  char local_60;
  
  iVar3 = FUN_014308d0();
  iVar7 = iVar3 - *(int *)(unaff_RDI + 0x100);
  if (iVar7 != 0 && *(int *)(unaff_RDI + 0x100) <= iVar3) {
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &DAT_02572358;
    pcVar2 = DAT_02572370;
    (*DAT_02572370)();
    iVar3 = iVar7;
    if (0 < iVar7) {
      do {
        FUN_01430160();
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
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    lVar1 = **(longlong **)(*(longlong *)(unaff_RDI + 0x108) + 0x10);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    puVar5 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &DAT_02572358;
    (*pcVar2)();
    iVar3 = iVar7;
    if (0 < iVar7) {
      do {
        FUN_0142ff00();
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
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x108) + 0x10) + 8);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &DAT_02572358;
    (*pcVar2)();
    if (0 < iVar7) {
      do {
        FUN_014300a0();
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
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x108) + 0x10) + 0x10);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (puVar6 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (puVar5 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (puVar4 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}


