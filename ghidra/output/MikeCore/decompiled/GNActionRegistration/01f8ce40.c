// Function: FUN_01f8ce40
// Address: 01f8ce40
// Size: 574 bytes
// Class: GNActionRegistration


/* WARNING: Removing unreachable block (ram,0x01f8cf14) */
/* WARNING: Removing unreachable block (ram,0x01f8cedc) */
/* WARNING: Removing unreachable block (ram,0x01f8cee5) */
/* WARNING: Removing unreachable block (ram,0x01f8cfe6) */
/* WARNING: Removing unreachable block (ram,0x01f8cfef) */
/* WARNING: Removing unreachable block (ram,0x01f8cf20) */
/* WARNING: Removing unreachable block (ram,0x01f8cf40) */
/* WARNING: Removing unreachable block (ram,0x01f8cf22) */
/* WARNING: Removing unreachable block (ram,0x01f8cf42) */

ulonglong FUN_01f8ce40(void)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  ulonglong unaff_R13;
  undefined7 uVar5;
  longlong local_88;
  char local_80;
  longlong local_58;
  char local_50;
  int local_40;
  
  lVar1 = local_58;
  FUN_01f8cb70();
  uVar5 = (undefined7)(unaff_R13 >> 8);
  if (local_58 == 0) {
    FUN_01f8bbb0();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (local_88 == 0) {
      unaff_R13 = CONCAT71(uVar5,1);
      goto LAB_01f8d06f;
    }
  }
  else if (local_50 != '\0') {
    FUN_00d50b20();
  }
  FUN_01caf140();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_01f8ceea;
    }
  }
  else if (local_58 != 0) {
LAB_01f8ceea:
    local_50 = '\0';
    local_58 = 0;
    local_40 = -1;
    do {
      lVar3 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_40) {
        FUN_002a0990();
        FUN_00d50b20();
        goto LAB_01f8cf96;
      }
      local_58 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8 + lVar3 * 8);
      cVar2 = FUN_01f8d150();
    } while (cVar2 == '\0');
    FUN_002a0990();
    unaff_R13 = CONCAT71(uVar5,1);
    FUN_00d50b20();
    goto LAB_01f8d06f;
  }
LAB_01f8cf96:
  FUN_01caf110();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_01f8cff4;
    }
  }
  else if (local_58 != 0) {
LAB_01f8cff4:
    iVar4 = 0;
    do {
      unaff_R13 = CONCAT71((int7)(unaff_R13 >> 8),iVar4 < *(int *)(local_58 + 0xc));
      if (*(int *)(local_58 + 0xc) <= iVar4) break;
      cVar2 = FUN_01f8ce40();
      iVar4 = iVar4 + 1;
    } while (cVar2 == '\0');
    FUN_01cb0380();
    FUN_00d50b20();
    goto LAB_01f8d06f;
  }
  unaff_R13 = 0;
LAB_01f8d06f:
  return unaff_R13 & 0xffffffff;
}


