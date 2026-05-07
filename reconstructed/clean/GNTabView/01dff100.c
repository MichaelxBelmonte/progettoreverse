// Function: FUN_01dff100
// Address: 01dff100
// Size: 730 bytes
// Class: GNTabView
// === GNTabView properties ===
//   GNTabViewControlMode _controlMode


void FUN_01dff100(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  bool bVar3;
  int iVar4;
  int64_t lVar5;
  int64_t *this_ptr;
  int64_t lVar6;
  uint8_t in_XMM0 [16];
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  int64_t local_78;
  char local_70;
  int64_t *local_48;
  uint8_t auVar10 [12];
  uint64_t extraout_XMM0_Qb_00;
  
  auVar10 = in_XMM0._4_12_;
  lVar1 = this_ptr[0x2c];
  if (lVar1 == 0) {
    iVar4 = (int)this_ptr[0x2a];
joined_r0x01dff16b:
    bVar3 = true;
    local_48 = (int64_t *)0x0;
    if (iVar4 != 2) goto LAB_01dff171;
LAB_01dff2a9:
    if (lVar1 != 0) {
      FUN_01d6f8d0();
      lVar6 = this_ptr[0x27];
      if (0 < *(int *)(lVar6 + 0xc)) {
        lVar5 = 0;
        do {
          lVar6 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + lVar5 * 8);
          if (lVar6 != 0) {
            FUN_00d50b00();
          }
          lVar6 = *(int64_t *)(lVar6 + 0x28);
          if (lVar6 != 0) {
            FUN_00d50b00();
          }
          FUN_01d6f990();
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          lVar5 = lVar5 + 1;
          lVar6 = this_ptr[0x27];
        } while (lVar5 < *(int *)(lVar6 + 0xc));
      }
      if (((*(uint *)(this_ptr + 0x2a) & 0xfffffffe) == 2) &&
         (plVar2 = (int64_t *)this_ptr[0x2c], plVar2 != (int64_t *)0x0)) {
        FUN_01dfe5d0();
        (**(code **)(*plVar2 + 0x918))();
      }
    }
  }
  else {
    auVar9._0_8_ = FUN_00d50b00();
    auVar9._8_8_ = extraout_XMM0_Qb;
    auVar10 = auVar9._4_12_;
    local_48 = (int64_t *)this_ptr[0x2c];
    if (local_48 == (int64_t *)0x0) {
      iVar4 = (int)this_ptr[0x2a];
      goto joined_r0x01dff16b;
    }
    auVar7._0_8_ = FUN_00d50b00();
    auVar7._8_8_ = extraout_XMM0_Qb_00;
    auVar10 = auVar7._4_12_;
    bVar3 = false;
    iVar4 = (int)this_ptr[0x2a];
    if (iVar4 == 2) goto LAB_01dff2a9;
LAB_01dff171:
    if (iVar4 == 3) {
      if (bVar3) goto LAB_01dff3c0;
      auVar8._0_4_ = (float)*(int *)(this_ptr[0x27] + 0xc);
      auVar8._4_12_ = auVar10;
      auVar9 = blendps(auVar8,g_023b1620,0xe);
      (**(code **)(*local_48 + 0xad8))(auVar9._0_8_);
      if (0 < *(int *)(this_ptr[0x27] + 0xc)) {
        lVar6 = 0;
        do {
          (**(code **)(*local_48 + 0x4a0))();
          plVar2 = *(int64_t **)(*(int64_t *)(local_78 + 0x10) + lVar6 * 8);
          lVar5 = *(int64_t *)(*(int64_t *)(this_ptr[0x27] + 0x10) + lVar6 * 8);
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          lVar5 = *(int64_t *)(lVar5 + 0x28);
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          (**(code **)(*plVar2 + 0x958))();
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 < *(int *)(this_ptr[0x27] + 0xc));
      }
      if (((*(uint *)(this_ptr + 0x2a) & 0xfffffffe) == 2) &&
         (plVar2 = (int64_t *)this_ptr[0x2c], plVar2 != (int64_t *)0x0)) {
        FUN_01dfe5d0();
        (**(code **)(*plVar2 + 0x918))();
      }
    }
    else {
      (**(code **)(*this_ptr + 0x620))();
    }
  }
  if (!bVar3) {
    FUN_00d50b20();
  }
LAB_01dff3c0:
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}

