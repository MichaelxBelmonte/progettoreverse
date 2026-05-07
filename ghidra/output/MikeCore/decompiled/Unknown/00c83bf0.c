// Function: FUN_00c83bf0
// Address: 00c83bf0
// Size: 813 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00c83db8) */
/* WARNING: Removing unreachable block (ram,0x00c83dc8) */
/* WARNING: Removing unreachable block (ram,0x00c83f0d) */
/* WARNING: Removing unreachable block (ram,0x00c83f1d) */
/* WARNING: Removing unreachable block (ram,0x00c83cc7) */
/* WARNING: Removing unreachable block (ram,0x00c83cf0) */
/* WARNING: Removing unreachable block (ram,0x00c83cc9) */
/* WARNING: Removing unreachable block (ram,0x00c83cf2) */

void FUN_00c83bf0(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong unaff_RDI;
  int iVar5;
  longlong local_68;
  char local_60;
  int local_50;
  longlong local_40;
  char local_38;
  
  lVar2 = local_68;
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_0258a670;
  (*DAT_0258a688)();
  puVar1 = *(undefined8 **)(unaff_RDI + 0x90);
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x90) = puVar3;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00c81830();
  if (local_60 == '\0') {
    if (local_68 == 0) goto LAB_00c83de7;
    FUN_00d50b00();
  }
  else if (local_68 == 0) goto LAB_00c83de7;
  local_60 = '\0';
  local_68 = 0;
  local_50 = -1;
  while( true ) {
    lVar4 = (longlong)local_50;
    local_50 = local_50 + 1;
    if (*(int *)(lVar2 + 0xc) <= local_50) break;
    local_68 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 8 + lVar4 * 8);
    FUN_00d74120();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00c88b00();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00cc1480();
  FUN_00d50b20();
LAB_00c83de7:
  FUN_00c81c90();
  if (local_60 == '\0') {
    if (local_68 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_68 == 0) {
    return;
  }
  if (0 < *(int *)(local_68 + 0xc)) {
    iVar5 = 0;
    do {
      FUN_00d74120();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00c88b00();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(local_68 + 0xc));
  }
  FUN_00559a70();
  FUN_00d50b20();
  return;
}


