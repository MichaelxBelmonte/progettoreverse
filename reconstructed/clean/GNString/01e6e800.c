// Function: FUN_01e6e800
// Address: 01e6e800
// Size: 570 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01e6e800(uint32_t param_1,uint32_t param_2)

{
  uint8_t auVar1 [16];
  bool bVar2;
  bool bVar3;
  char cVar4;
  int64_t lVar5;
  int64_t *this_ptr;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  float fVar9;
  uint64_t uVar10;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dd;
  uint32_t uVar11;
  uint32_t uVar12;
  uint8_t auVar13 [16];
  int64_t local_98;
  uint8_t local_90;
  uint64_t local_88;
  uint64_t local_78;
  uint32_t uStack_70;
  uint32_t uStack_6c;
  int64_t *local_58;
  char local_50;
  
  uVar11 = param_2;
  (**(code **)(*this_ptr + 0x640))();
  if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  lVar5 = this_ptr[0x2a];
  if (*(int *)(lVar5 + 0xc) < 1) {
    bVar2 = false;
    lVar8 = 0;
  }
  else {
    lVar6 = 0;
    bVar2 = false;
    lVar7 = 0;
    uVar12 = uVar11;
    do {
      lVar5 = *(int64_t *)(*(int64_t *)(lVar5 + 0x10) + lVar6 * 8);
      if (lVar7 == lVar5) {
        lVar8 = lVar7;
        bVar3 = bVar2;
        if ((!bVar2) && (lVar5 != 0)) {
          FUN_00d50b00();
          bVar3 = true;
        }
      }
      else {
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        bVar3 = true;
        lVar8 = lVar5;
        if ((bVar2) && (lVar7 != 0)) {
          FUN_00d50b20();
        }
      }
      bVar2 = bVar3;
      uVar10 = FUN_01e6d410();
      uVar11 = param_2;
      local_78._0_4_ = uVar12;
      local_88 = uVar10;
      cVar4 = FUN_00d054a0(param_1);
      if (cVar4 != '\0') {
        local_90 = 0;
        uVar11 = (uint32_t)local_78;
        local_98 = lVar8;
        FUN_01e6dab0((uint32_t)local_88,&local_98);
      }
      lVar6 = lVar6 + 1;
      lVar5 = this_ptr[0x2a];
      lVar7 = lVar8;
      uVar12 = uVar11;
    } while (lVar6 < *(int *)(lVar5 + 0xc));
  }
  FUN_01e3f820();
  local_78 = FUN_00d05530();
  local_88._0_4_ = uVar11;
  uStack_70 = extraout_XMM0_Dc;
  uStack_6c = extraout_XMM0_Dd;
  fVar9 = (float)(**(code **)(*local_58 + 0x3c8))((int)local_78,3);
  auVar1._8_4_ = uStack_70;
  auVar1._0_8_ = local_78;
  auVar1._12_4_ = uStack_6c;
  auVar13._4_4_ = local_78._4_4_;
  auVar13._0_4_ = local_78._4_4_ - (fVar9 + g_023908ec);
  auVar13._8_4_ = uStack_6c;
  auVar13._12_4_ = uStack_6c;
  auVar13 = insertps(auVar1,auVar13,0x10);
  (**(code **)(*local_58 + 0x3c0))(auVar13._0_4_,(uint32_t)local_88);
  FUN_00d50b20();
  if ((bVar2) && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  return;
}

