// Function: FUN_01d6e6c0
// Address: 01d6e6c0
// Size: 719 bytes
// Class: GNMenuItem


/* WARNING: Removing unreachable block (ram,0x01d6e920) */
/* WARNING: Removing unreachable block (ram,0x01d6e929) */
/* WARNING: Removing unreachable block (ram,0x01d6e801) */

int FUN_01d6e6c0(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int local_5c;
  longlong local_58;
  char local_50;
  longlong local_38;
  
  if (*(longlong *)(unaff_RDI + 0x220) == 0) {
    local_5c = -1;
  }
  else {
    bVar1 = false;
    local_38 = 0;
    bVar2 = false;
    local_5c = 0;
    lVar6 = 0;
    for (iVar5 = 0; iVar4 = FUN_01d5b230(), lVar7 = lVar6, iVar5 < iVar4; iVar5 = iVar5 + 1) {
      FUN_01d5b240();
      if (local_58 == lVar6) {
        if ((bVar1) || (local_58 == 0)) {
joined_r0x01d6e7e9:
          lVar7 = lVar6;
          bVar3 = bVar1;
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar3 = true;
          if (local_50 == '\0') {
            FUN_00d50b00();
            goto LAB_01d6e7d5;
          }
        }
      }
      else {
        lVar7 = local_58;
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
          bVar3 = true;
          if ((bVar1) && (lVar6 != 0)) {
            FUN_00d50b20();
            lVar6 = local_58;
LAB_01d6e7d5:
            bVar1 = true;
            goto joined_r0x01d6e7e9;
          }
        }
        else {
          bVar3 = true;
          if ((bVar1) && (lVar6 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      bVar1 = bVar3;
      if (*unaff_RSI == lVar7) goto joined_r0x01d6e95d;
      FUN_01d64cb0();
      if (local_58 == local_38) {
        lVar8 = local_38;
        bVar3 = bVar2;
        if ((!bVar2) && (local_58 != 0)) {
          if (local_50 != '\0') goto LAB_01d6e885;
          FUN_00d50b00();
          bVar3 = true;
        }
LAB_01d6e8e0:
        bVar2 = bVar3;
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        lVar8 = local_58;
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
          bVar3 = true;
          if ((bVar2) && (local_38 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_01d6e8e0;
        }
        if ((bVar2) && (local_38 != 0)) {
          FUN_00d50b20();
        }
LAB_01d6e885:
        bVar2 = true;
      }
      if (lVar8 == 0) {
        iVar4 = 1;
        lVar8 = 0;
      }
      else {
        iVar4 = FUN_01d5e2e0();
        if (-1 < iVar4) {
          local_5c = local_5c + iVar4;
          local_38 = lVar8;
          if (bVar2) goto LAB_01d6e97d;
          goto LAB_01d6e98d;
        }
        iVar4 = FUN_01d5b230();
      }
      local_5c = local_5c + iVar4;
      lVar6 = lVar7;
      local_38 = lVar8;
    }
    local_5c = -1;
joined_r0x01d6e95d:
    if (bVar2) {
LAB_01d6e97d:
      if (local_38 != 0) {
        FUN_00d50b20();
      }
    }
LAB_01d6e98d:
    if ((bVar1) && (lVar7 != 0)) {
      FUN_00d50b20();
    }
  }
  return local_5c;
}


