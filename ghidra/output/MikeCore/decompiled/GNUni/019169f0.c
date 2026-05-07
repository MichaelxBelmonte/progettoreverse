// Function: FUN_019169f0
// Address: 019169f0
// Size: 1081 bytes
// Class: GNUni


/* WARNING: Removing unreachable block (ram,0x01916ae6) */
/* WARNING: Removing unreachable block (ram,0x01916e0c) */
/* WARNING: Removing unreachable block (ram,0x01916e18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_019169f0(undefined8 param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  int iVar6;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  int iVar7;
  longlong lVar8;
  float fVar9;
  undefined4 uVar10;
  char local_98;
  undefined7 uStack_97;
  char local_90 [8];
  longlong local_88;
  longlong local_78;
  char local_70;
  float local_64;
  longlong local_60;
  char local_58 [8];
  longlong local_50;
  undefined8 local_48;
  int local_40;
  char local_38 [8];
  
  fVar9 = (float)(**(code **)(**(longlong **)(unaff_RSI + 0x10) + 0x18))();
  if (*(longlong *)(unaff_RSI + 0x18) == 0) {
    plVar2 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar2 + 0x18))();
    lVar3 = *(longlong *)(unaff_RSI + 0x18);
    *(longlong **)(unaff_RSI + 0x18) = plVar2;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c9fe20();
  lVar3 = local_60;
  pcVar5 = &local_98;
  if (local_58[0] != '\0') {
    pcVar5 = local_58;
  }
  local_98 = local_58[0];
  *pcVar5 = '\0';
  if ((local_58[0] != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  if (local_98 == '\0') {
    if (lVar3 == 0) goto LAB_01916b5d;
    FUN_00d50b00();
  }
  else if (lVar3 == 0) goto LAB_01916b5d;
  local_58[0] = '\0';
  local_60 = 0;
  local_50 = lVar3;
  local_48 = 0xffffffff;
  local_40 = 0;
  while( true ) {
    lVar3 = (longlong)(int)local_48;
    iVar7 = (int)local_48 + 1;
    local_48 = CONCAT44(local_48._4_4_,iVar7);
    if (*(int *)(local_50 + 0xc) <= iVar7) break;
    local_60 = *(longlong *)(*(longlong *)(local_50 + 0x10) + 8 + lVar3 * 8);
    iVar7 = FUN_00d45870();
    if (iVar7 == param_2) {
      FUN_00ca1380();
      pcVar5 = local_38;
      if (local_90[0] != '\0') {
        pcVar5 = local_90;
      }
      lVar3 = CONCAT71(uStack_97,local_98);
      local_38[0] = local_90[0];
      *pcVar5 = '\0';
      if ((local_90[0] != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = *(longlong *)
               (*(longlong *)(lVar3 + 0x10) + ((longlong)local_40 + (longlong)(int)local_48) * 8);
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      *unaff_RDI = lVar3;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
      FUN_00136b80();
      FUN_00d50b20();
      return unaff_RDI;
    }
    if (local_48._4_4_ != 0) {
      if (local_48._4_4_ < 1) {
        iVar7 = -local_48._4_4_;
      }
      else {
        local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
        FUN_00d23690();
        local_40 = local_40 + local_48._4_4_;
        iVar7 = 0;
      }
      local_48 = CONCAT44(iVar7,(int)local_48);
    }
  }
  FUN_00136b80();
  FUN_00d50b20();
LAB_01916b5d:
  FUN_01d386e0();
  lVar3 = local_60;
  if ((((local_58[0] == '\0') && (local_60 != 0)) && (FUN_00d50b00(), local_58[0] != '\0')) &&
     (local_60 != 0)) {
    FUN_00d50b20();
  }
  iVar7 = param_2 * 500;
  local_88 = lVar3;
  if (iVar7 + -4 < iVar7 + 0x1f8) {
    iVar6 = -4;
    do {
      if (-1 < iVar7 + iVar6) {
        local_64 = (float)(iVar7 + iVar6);
        if (fVar9 <= local_64) break;
        uVar10 = (**(code **)(**(longlong **)(unaff_RSI + 0x10) + 0x20))();
        FUN_01d38ba0(local_64,uVar10);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0x1f8);
  }
  local_64 = (float)param_2;
  FUN_01d38ea0();
  iVar7 = *(int *)(local_60 + 0x18);
  if (local_58[0] != '\0') {
    FUN_00d50b20();
  }
  lVar4 = (longlong)(iVar7 / 0x1c);
  lVar8 = lVar4 + 1;
  lVar4 = lVar4 * 0x1c + -0x14;
  while (lVar8 = lVar8 + -1, lVar8 != 0) {
    FUN_01d38ea0();
    lVar1 = *(longlong *)(local_60 + 0x10);
    if (local_58[0] != '\0') {
      FUN_00d50b20();
    }
    lVar3 = local_88;
    FUN_01d38ba0(*(undefined4 *)(lVar1 + -4 + lVar4),*(uint *)(lVar1 + lVar4) ^ _DAT_023945e0);
    lVar4 = lVar4 + -0x1c;
  }
  FUN_01d38b10();
  uVar10 = FUN_00d46530();
  local_78 = local_60;
  local_70 = 0;
  if (local_58[0] == '\0') {
    if (local_60 != 0) {
      uVar10 = FUN_00d50b00();
    }
  }
  else {
    local_58[0] = '\0';
  }
  local_70 = '\x01';
  FUN_01916fa0(uVar10,&local_78);
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  *unaff_RDI = lVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


