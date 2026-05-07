// Function: FUN_01d4b0a0
// Address: 01d4b0a0
// Size: 915 bytes
// Class: GNGraphicsContextState


/* WARNING: Removing unreachable block (ram,0x01d4b146) */
/* WARNING: Removing unreachable block (ram,0x01d4b14f) */
/* WARNING: Removing unreachable block (ram,0x01d4b326) */
/* WARNING: Removing unreachable block (ram,0x01d4b332) */
/* WARNING: Removing unreachable block (ram,0x01d4b1b5) */
/* WARNING: Removing unreachable block (ram,0x01d4b1be) */

void FUN_01d4b0a0(void)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong unaff_RDI;
  longlong lVar4;
  bool bVar5;
  longlong local_60;
  char local_58;
  int local_48;
  longlong local_40;
  char local_38;
  
  if ((DAT_028b8168 == (longlong *)0x0) || (DAT_028b8171 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b8168 == (longlong *)0x0) {
      plVar3 = (longlong *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar3 + 0x18))();
      if (DAT_028b8168 == plVar3) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
        bVar5 = DAT_028b8168 != (longlong *)0x0;
        DAT_028b8168 = plVar3;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b8170 == '\0') {
        DAT_028b8170 = '\x01';
        FUN_00e8cb90();
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      DAT_028b8171 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b8171 = '\x01';
      FUN_00e8cb70();
    }
  }
  if (DAT_028b8168 != (longlong *)0x0) {
    local_58 = '\0';
    local_60 = 0;
    lVar4 = DAT_028b8168[2];
    local_48 = 0;
    if (0 < *(int *)(lVar4 + 0xc)) {
      do {
        local_60 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + (longlong)local_48 * 8);
        lVar2 = FUN_00dd6dc0();
        if (lVar2 == unaff_RDI) {
          FUN_01d4af20();
          if (local_40 == 0) {
            lVar4 = 0;
            bVar1 = false;
          }
          else {
            bVar1 = true;
            lVar4 = local_40;
            if (local_38 == '\0') {
              FUN_00d50b00();
            }
          }
          goto LAB_01d4b140;
        }
        local_48 = local_48 + 1;
      } while (local_48 < *(int *)(lVar4 + 0xc));
    }
    bVar1 = false;
    lVar4 = 0;
LAB_01d4b140:
    if (lVar4 != 0) goto LAB_01d4b337;
  }
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  FUN_00dd6a00();
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_01d4b6d0();
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  bVar1 = true;
LAB_01d4b337:
  FUN_00dd6a00();
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_01d533c0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d4b780();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (bVar1) {
    FUN_00d50b20();
  }
  return;
}


