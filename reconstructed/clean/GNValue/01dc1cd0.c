// Function: FUN_01dc1cd0
// Address: 01dc1cd0
// Size: 850 bytes
// Class: GNValue

void FUN_01dc1cd0(void)

{
  int64_t lVar1;
  uint8_t auVar2 [16];
  char cVar3;
  int iVar4;
  int iVar5;
  int64_t lVar6;
  int64_t this_ptr;
  bool bVar7;
  uint64_t uVar8;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar9;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  float fStack_b4;
  uint64_t local_98;
  uint64_t uStack_90;
  int64_t local_80;
  char local_78;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x140) != 0) {
    *(void*)(this_ptr + 0x140) = 0;
    FUN_00d50b20();
  }
  FUN_01d3a560();
  iVar4 = FUN_01d3b630();
  if (iVar4 == 2) {
    FUN_01dc0d60();
    bVar7 = local_80 != 0;
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    bVar7 = false;
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar7) {
LAB_01dc1e78:
    FUN_01e459c0();
    return;
  }
  FUN_01d3abf0();
  FUN_01e466c0();
  iVar4 = 0;
LAB_01dc1da4:
  FUN_01dc0d60();
  iVar5 = FUN_01dca080();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (iVar5 <= iVar4) goto LAB_01dc1e78;
  local_98 = FUN_01dc1b40();
  uStack_90 = extraout_XMM0_Qb;
  uVar8 = FUN_01dc1b40();
  auVar11._8_4_ = (int)extraout_XMM0_Qb_00;
  auVar11._0_8_ = uVar8;
  auVar11._12_4_ = (int)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
  auVar12._4_12_ = local_98._4_12_;
  auVar12._0_4_ = (float)local_98 - (float)uVar8;
  FUN_01e3f820();
  blendps(auVar11,auVar12,1);
  auVar10._8_8_ = extraout_XMM0_Qb_00;
  auVar10._0_8_ = uVar8;
  blendps(ZEXT816(0),auVar10,1);
  cVar3 = FUN_00d05410();
  if (cVar3 == '\0') {
LAB_01dc1da0:
    iVar4 = iVar4 + 1;
    goto LAB_01dc1da4;
  }
  FUN_01dc2170(extraout_XMM0_Qa,iVar4);
  if (local_38 != '\0') {
    if (local_40 != 0) goto LAB_01dc1ebc;
    goto LAB_01dc1da0;
  }
  if (local_40 == 0) goto LAB_01dc1da0;
  FUN_00d50b00();
LAB_01dc1ebc:
  iVar5 = FUN_01d5b230();
  if (iVar5 == 0) goto LAB_01dc2001;
  uVar9 = FUN_01dc0d60();
  FUN_01dcc290(uVar9,iVar4);
  lVar1 = *(int64_t *)(this_ptr + 0x140);
  lVar6 = lVar1;
  if (lVar1 != local_40) {
    lVar6 = local_40;
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar6 = 0;
        goto LAB_01dc1f06;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x140);
      *(int64_t *)(this_ptr + 0x140) = local_40;
    }
    else {
      local_38 = '\0';
LAB_01dc1f06:
      *(int64_t *)(this_ptr + 0x140) = lVar6;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar6 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  fStack_b4 = auVar11._4_4_;
  auVar2._8_8_ = extraout_XMM0_Qb_00;
  auVar2._0_8_ = uVar8;
  auVar10 = insertps(auVar2,ZEXT416((uint)(fStack_b4 + 0.0)),0x10);
  auVar12 = blendps(auVar12,g_023907b0,0xe);
  FUN_01d5ef60(auVar10._0_8_,auVar12._0_8_);
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
LAB_01dc2001:
  FUN_00d50b20();
  return;
}

