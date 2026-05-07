// Function: FUN_00483b30
// Address: 00483b30
// Size: 879 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00483b30(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  char cVar5;
  int64_t lVar6;
  char *pcVar7;
  int64_t this_ptr;
  int64_t lVar8;
  uint32_t extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  uint32_t extraout_XMM0_Dd;
  uint8_t auVar9 [16];
  float fVar11;
  uint32_t uVar12;
  uint8_t auVar10 [16];
  uint64_t extraout_XMM0_Qb_00;
  uint32_t uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint32_t in_XMM1_Dc;
  uint32_t in_XMM1_Dd;
  uint8_t local_88 [16];
  int64_t *local_50;
  char local_48 [12];
  float local_3c;
  char local_38 [8];
  uint64_t extraout_XMM0_Qb;
  
  fVar14 = (float)((uint64_t)param_2 >> 0x20);
  uVar13 = (uint32_t)param_2;
  FUN_00d23310();
  pcVar7 = local_38;
  if (local_48[0] != '\0') {
    pcVar7 = local_48;
  }
  local_38[0] = local_48[0];
  *pcVar7 = '\0';
  if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00dd6ab0();
  if ((local_38[0] != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e53c20();
  (**(code **)(*local_50 + 0x4d8))();
  fVar15 = fVar14;
  if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar6 = *(int64_t *)(this_ptr + 0x2a8);
  if (0 < *(int *)(lVar6 + 0xc)) {
    local_88._4_4_ = extraout_XMM0_Db;
    local_88._0_4_ = extraout_XMM0_Db;
    local_88._8_4_ = extraout_XMM0_Dd;
    local_88._12_4_ = extraout_XMM0_Dd;
    lVar8 = 0;
    local_3c = 0.0;
    do {
      plVar1 = *(int64_t **)(*(int64_t *)(lVar6 + 0x10) + lVar8 * 8);
      fVar16 = fVar15;
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
        fVar16 = fVar15;
      }
      FUN_01e3f820();
      lVar8 = lVar8 + 1;
      if (lVar8 < *(int *)(*(int64_t *)(this_ptr + 0x2a8) + 0xc)) {
        FUN_00dd6ab0();
        FUN_00dd6ab0();
        fVar16 = extraout_XMM0_Db_00 - extraout_XMM0_Db_01;
      }
      fVar15 = fVar16;
      cVar5 = FUN_004832f0();
      if (cVar5 == '\0') {
        FUN_01e40eb0();
        if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_50 == (int64_t *)0x0) {
          if (plVar1 == (int64_t *)0x0) goto LAB_00483c33;
        }
        else {
          (**(code **)(*plVar1 + 0x478))();
          local_3c = local_3c - fVar16;
        }
LAB_00483c2b:
        FUN_00d50b20();
      }
      else {
        FUN_01e40eb0();
        if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_50 == (int64_t *)0x0) {
          auVar10._0_8_ = FUN_00dd6ab0();
          auVar10._8_8_ = extraout_XMM0_Qb_00;
          auVar10 = insertps(auVar10,local_88._0_4_,0x10);
          (**(code **)(*plVar1 + 0x4d0))(auVar10._0_8_);
          FUN_01e53c20();
          (**(code **)(MACH_HEADER._0_8_ + 0x450))();
          local_3c = local_3c + fVar16;
        }
        else if ((local_3c != g_0239424c) || (NAN(local_3c) || NAN(g_0239424c))) {
          auVar9._0_8_ = (**(code **)(*plVar1 + 0x4d8))();
          auVar9._8_8_ = extraout_XMM0_Qb;
          fVar11 = (float)((uint64_t)auVar9._0_8_ >> 0x20);
          uVar12 = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
          auVar3._4_4_ = fVar11;
          auVar3._0_4_ = fVar11 + local_3c;
          auVar3._8_4_ = uVar12;
          auVar3._12_4_ = uVar12;
          auVar10 = insertps(auVar9,auVar3,0x10);
          (**(code **)(*plVar1 + 0x4d0))(auVar10._0_8_);
        }
        local_88._0_4_ = (float)local_88._0_4_ + fVar16;
        if (plVar1 != (int64_t *)0x0) goto LAB_00483c2b;
      }
LAB_00483c33:
      lVar6 = *(int64_t *)(this_ptr + 0x2a8);
    } while (lVar8 < *(int *)(lVar6 + 0xc));
    if ((local_3c != 0.0) || (NAN(local_3c))) {
      FUN_01e53c20();
      auVar4._4_4_ = fVar14;
      auVar4._0_4_ = uVar13;
      auVar4._8_4_ = in_XMM1_Dc;
      auVar4._12_4_ = in_XMM1_Dd;
      auVar2._4_4_ = fVar14;
      auVar2._0_4_ = fVar14 + local_3c;
      auVar2._8_4_ = in_XMM1_Dd;
      auVar2._12_4_ = in_XMM1_Dd;
      auVar10 = insertps(auVar4,auVar2,0x10);
      (**(code **)(*local_50 + 0x9b8))(auVar10._0_8_);
      if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}

