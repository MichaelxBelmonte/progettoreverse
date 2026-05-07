// Function: FUN_01e641f0
// Address: 01e641f0
// Size: 651 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01e641f0(char param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  uint uVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t uVar6;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  double dStack_90;
  int64_t local_58;
  char local_50;
  uint8_t local_48 [16];
  
  if (*param_2 != 0) goto LAB_01e642d2;
  (**(code **)(*this_ptr + 0x370))();
  lVar1 = *param_2;
  if (lVar1 == local_58) {
    if (((char)param_2[1] != '\0') || (local_58 == 0)) goto LAB_01e642bb;
    if (local_50 == '\0') {
      FUN_00d50b00();
      goto LAB_01e642b4;
    }
  }
  else {
    lVar3 = param_2[1];
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      *param_2 = local_58;
      if (((char)lVar3 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_01e642b4:
      local_48._0_8_ = param_2 + 1;
      *(void*)local_48._0_8_ = 1;
LAB_01e642bb:
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01e642d2;
    }
    *param_2 = local_58;
    if (((char)lVar3 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
  }
  local_48._0_8_ = param_2 + 1;
  *(void*)local_48._0_8_ = 1;
LAB_01e642d2:
  local_48._0_8_ = FUN_01d43d10();
  local_48._8_8_ = extraout_XMM0_Qb;
  uVar6 = FUN_01d43b70();
  lVar1 = g_026fce10;
  auVar9._8_4_ = (int)extraout_XMM0_Qb_00;
  auVar9._0_8_ = uVar6;
  auVar9._12_4_ = (int)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
  auVar10._4_12_ = auVar9._4_12_;
  auVar10._0_4_ = (float)uVar6 + g_02390d2c;
  auVar7 = insertps(local_48,auVar10,0x10);
  plVar2 = (int64_t *)*arg1;
  if (plVar2 != (int64_t *)0x0) {
    if (g_026fce10 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*plVar2 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      dStack_90 = auVar9._8_8_;
      auVar8._0_4_ = (float)(int)((double)auVar10._0_4_ / g_023b3bc0);
      auVar8._4_4_ = (float)(int)dStack_90;
      auVar8._8_8_ = 0;
      insertps(auVar7,auVar8,0x10);
    }
  }
  if (param_1 != '\0') {
    (**(code **)(*this_ptr + 0x5c8))();
    (**(code **)(*this_ptr + 0x630))();
  }
  lVar1 = g_026fce10;
  plVar2 = (int64_t *)*arg1;
  if (plVar2 != (int64_t *)0x0) {
    if (g_026fce10 != 0) {
      FUN_00d50b00();
    }
    uVar5 = (**(code **)(*plVar2 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    auVar7._0_4_ = (uVar5 & 0xff) << 0x1f;
    auVar7._4_4_ = (uVar5 & 0xff) << 0x1f;
    auVar7._8_8_ = 0;
    blendvps(g_02421d90,g_023b5550,auVar7);
  }
  return;
}

