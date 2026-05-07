// Function: FUN_00debcf0
// Address: 00debcf0
// Size: 559 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00debdf7) */
/* WARNING: Removing unreachable block (ram,0x00debe00) */
/* WARNING: Removing unreachable block (ram,0x00debe92) */
/* WARNING: Removing unreachable block (ram,0x00debeda) */
/* WARNING: Removing unreachable block (ram,0x00debedf) */

void FUN_00debcf0(void)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  pid_t pVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint *puVar7;
  longlong unaff_RDI;
  ulonglong uVar8;
  longlong local_40;
  char local_38;
  
  FUN_00d50100();
  uVar5 = FUN_00e83020();
  *(undefined8 *)(unaff_RDI + 0x10) = uVar5;
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  (*DAT_02572370)();
  puVar2 = *(undefined8 **)(unaff_RDI + 0x28);
  if (puVar2 == puVar6) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x28) = puVar6;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  pVar4 = _getpid();
  **(pid_t **)(unaff_RDI + 0x10) = pVar4;
  puVar7 = (uint *)__NSGetArgc();
  uVar1 = *puVar7;
  __NSGetArgv();
  if (0 < (int)uVar1) {
    uVar8 = 0;
    do {
      FUN_00d91a70();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00d21140();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (uVar8 == 0) {
        FUN_00d91a70();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00cddf30();
        lVar3 = *(longlong *)(unaff_RDI + 0x20);
        if (lVar3 != local_40) {
          if (local_40 == 0) {
            *(undefined8 *)(unaff_RDI + 0x20) = 0;
          }
          else {
            FUN_00d50b00();
            lVar3 = *(longlong *)(unaff_RDI + 0x20);
            *(longlong *)(unaff_RDI + 0x20) = local_40;
          }
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
        }
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar1 != uVar8);
  }
  return;
}


