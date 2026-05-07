// Function: FUN_0131df10
// Address: 0131df10
// Size: 701 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0131e127) */
/* WARNING: Removing unreachable block (ram,0x0131e130) */
/* WARNING: Removing unreachable block (ram,0x0131e087) */
/* WARNING: Removing unreachable block (ram,0x0131e093) */
/* WARNING: Removing unreachable block (ram,0x0131dff7) */
/* WARNING: Removing unreachable block (ram,0x0131e000) */
/* WARNING: Removing unreachable block (ram,0x0131e1ba) */
/* WARNING: Removing unreachable block (ram,0x0131e1c6) */

void FUN_0131df10(void)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong unaff_RDI;
  int iVar5;
  int iVar6;
  longlong local_80;
  char local_78;
  
  iVar5 = *(int *)(unaff_RDI + 0xf8);
  if (iVar5 < 1) {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    pcVar2 = DAT_02572370;
    (*DAT_02572370)();
    iVar5 = 1 - iVar5;
    iVar6 = iVar5;
    if (iVar5 < 2) {
      iVar5 = 1;
      iVar6 = 1;
    }
    do {
      FUN_0131dbb0();
      if (local_78 == '\0') {
        if (local_80 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_78 = '\0';
      }
      FUN_00d21140();
      if (local_80 != 0) {
        FUN_00d50b20();
      }
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    lVar1 = **(longlong **)(*(longlong *)(unaff_RDI + 0x100) + 0x10);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &DAT_02572358;
    (*pcVar2)();
    do {
      FUN_0131dcc0();
      if (local_78 == '\0') {
        if (local_80 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_78 = '\0';
      }
      FUN_00d21140();
      if (local_80 != 0) {
        FUN_00d50b20();
      }
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x100) + 0x10) + 8);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (puVar4 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (puVar3 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}


