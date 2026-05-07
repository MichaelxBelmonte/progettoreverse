// Function: FUN_01da4e80
// Address: 01da4e80
// Size: 898 bytes
// Class: GNData


/* WARNING: Removing unreachable block (ram,0x01da4ed2) */
/* WARNING: Removing unreachable block (ram,0x01da4edb) */
/* WARNING: Removing unreachable block (ram,0x01da5015) */
/* WARNING: Type propagation algorithm not settling */

void FUN_01da4e80(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  longlong local_a0;
  undefined1 local_98;
  longlong local_88;
  char local_80;
  longlong local_58;
  char local_50;
  longlong local_40;
  longlong local_38;
  
  FUN_01cafe30();
  if (local_80 == '\0') {
    if (local_88 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_88 == 0) {
    return;
  }
  if (*(int *)(local_88 + 0xc) < 1) {
    local_38 = 0;
    bVar2 = false;
    bVar1 = false;
    local_40 = 0;
  }
  else {
    iVar5 = 0;
    local_40 = 0;
    bVar1 = false;
    bVar2 = false;
    local_38 = 0;
    do {
      FUN_01caf4a0();
      if (local_58 == local_40) {
        if ((!bVar1) && (local_58 != 0)) {
          bVar1 = true;
          if (local_50 != '\0') goto LAB_01da502e;
          FUN_00d50b00();
LAB_01da4fe6:
          bVar1 = true;
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      else if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
        if (bVar1) {
          if (local_40 != 0) {
            FUN_00d50b20();
            local_40 = local_58;
            goto LAB_01da4fe6;
          }
          local_40 = local_58;
          bVar1 = true;
        }
        else {
          local_40 = local_58;
          bVar1 = true;
        }
      }
      else if ((bVar1) && (local_40 != 0)) {
        FUN_00d50b20();
        local_40 = local_58;
        bVar1 = true;
      }
      else {
        local_40 = local_58;
        bVar1 = true;
      }
LAB_01da502e:
      FUN_01caf470();
      if (local_58 == local_38) {
        if ((bVar2) || (local_58 == 0)) {
joined_r0x01da5175:
          bVar3 = bVar2;
          lVar4 = local_38;
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar3 = true;
          lVar4 = local_38;
          if (local_50 == '\0') {
            FUN_00d50b00();
            goto LAB_01da50e0;
          }
        }
      }
      else if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
        bVar3 = true;
        lVar4 = local_58;
        if ((bVar2) && (lVar4 = local_58, local_38 != 0)) {
          FUN_00d50b20();
          local_38 = local_58;
LAB_01da50e0:
          bVar2 = true;
          goto joined_r0x01da5175;
        }
      }
      else {
        bVar3 = true;
        lVar4 = local_58;
        if ((bVar2) && (lVar4 = local_58, local_38 != 0)) {
          FUN_00d50b20();
          lVar4 = local_58;
        }
      }
      local_38 = lVar4;
      bVar2 = bVar3;
      if ((local_38 != 0) && (local_40 != 0)) {
        local_98 = 0;
        local_a0 = local_38;
        FUN_01da4c40(local_38,&local_a0);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(local_88 + 0xc));
  }
  FUN_002a0990();
  FUN_00d50b20();
  if ((bVar2) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar1) && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return;
}


