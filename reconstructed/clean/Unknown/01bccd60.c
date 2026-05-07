// Function: FUN_01bccd60
// Address: 01bccd60
// Size: 4097 bytes
// Class: Unknown

void FUN_01bccd60(uint64_t param_1,uint64_t param_2,float param_3,float param_4)

{
  int64_t lVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  code *pcVar5;
  char cVar6;
  void*puVar7;
  int64_t *in_RCX;
  void*in_RDX;
  uint unaff_ESI;
  int64_t *this_ptr;
  int64_t *in_R8;
  int in_R9D;
  bool bVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  uint64_t uVar13;
  uint32_t in_XMM0_Dc;
  float in_XMM0_Dd;
  uint32_t extraout_XMM0_Dd;
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint32_t extraout_XMM0_Dd_00;
  uint8_t auVar16 [16];
  float fVar17;
  uint64_t in_XMM1_Qb;
  uint8_t auVar18 [16];
  float fVar19;
  float in_XMM4_Da;
  int local_res8;
  float local_248;
  float fStack_244;
  float local_108;
  float fStack_104;
  int64_t *local_a0;
  char local_98;
  float fStack_64;
  float fStack_5c;
  int64_t local_50;
  char local_48;
  
  fVar11 = (float)param_1;
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02680400;
  *(void*)((int64_t)puVar7 + 0xc) = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  *(void*)((int64_t)puVar7 + 0x39) = 0;
  *(void*)((int64_t)puVar7 + 0x41) = 0;
  pcVar5 = g_02680418;
  (*g_02680418)();
  if (in_R9D < 1) {
    FUN_01d39400(g_0241deb0 + fVar11);
  }
  else {
    FUN_01d39400();
  }
  fStack_64 = (float)((uint64_t)param_2 >> 0x20);
  fStack_5c = (float)((uint64_t)in_XMM1_Qb >> 0x20);
  fStack_64 = fStack_64 + (float)((uint64_t)param_1 >> 0x20);
  FUN_01d38ba0();
  FUN_01d39310();
  fVar12 = fStack_64 + g_02390d00;
  FUN_01d38ba0();
  FUN_01d39310();
  if ((in_R9D < 0) || (in_R9D + 1 == local_res8)) {
    FUN_01d38ba0();
    FUN_01d39310();
  }
  else {
    FUN_01d38ba0();
  }
  if (in_R9D == 0) {
    FUN_01d38ba0();
    FUN_01d39310();
    FUN_01d39310();
  }
  if (in_R9D < 1) {
    FUN_01d38ba0();
    auVar15._8_4_ = in_XMM0_Dc;
    auVar15._0_8_ = param_1;
    auVar15._12_4_ = in_XMM0_Dd;
    auVar18._4_12_ = auVar15._4_12_;
    auVar18._0_4_ = fVar11 + g_0241deb0;
    FUN_01d39310(auVar18._0_8_);
  }
  else {
    FUN_01d38ba0();
  }
  if ((unaff_ESI & 1) != 0) {
    FUN_01cfcdc0();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    FUN_01d488d0();
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)*in_RDX + 0x3a0))();
  }
  FUN_01cfcdc0();
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  FUN_01d488d0();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((unaff_ESI & 2) != 0) {
    (**(code **)(*(int64_t *)*in_RDX + 0x3a8))();
  }
  if (((unaff_ESI & 4) != 0) && ((*in_RCX != 0 || (*in_R8 != 0)))) {
    (**(code **)(*this_ptr + 0x640))();
    (**(code **)(*local_a0 + 0x378))();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d48370();
    (**(code **)(*(int64_t *)*in_RDX + 0x398))();
    FUN_01d48990();
    if ((local_48 == '\0') && (local_50 != 0)) {
      FUN_00d50b00();
    }
    (**(code **)(*this_ptr + 0x640))();
    (**(code **)(*local_a0 + 0x4d8))();
    if ((local_48 == '\0') && (local_50 != 0)) {
      FUN_00d50b00();
    }
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (*in_RCX == 0) {
      bVar8 = true;
      lVar1 = *in_R8;
    }
    else {
      uVar13 = FUN_01d43d10();
      local_248 = (float)uVar13;
      fStack_244 = (float)((uint64_t)uVar13 >> 0x20);
      auVar14._4_4_ = fStack_244;
      auVar14._0_4_ = fStack_244;
      auVar14._8_4_ = extraout_XMM0_Dd;
      auVar14._12_4_ = extraout_XMM0_Dd;
      if (fStack_244 <= g_0241f360) {
        auVar14._0_4_ = g_0241f360;
      }
      auVar18 = insertps(ZEXT416((uint)(g_023b36ac + local_248)),auVar14,0x10);
      auVar2._4_4_ = fStack_64;
      auVar2._0_4_ = fVar12 - auVar14._0_4_;
      auVar2._8_4_ = fStack_5c + in_XMM0_Dd;
      auVar2._12_4_ = fStack_5c + in_XMM0_Dd;
      auVar15 = insertps(g_0241dea0,auVar2,0x10);
      fVar12 = (float)FUN_00d05530(auVar15._0_8_,auVar18._0_8_,g_02390124);
      FUN_00d50b20();
      fVar17 = param_3 + param_4 + g_02390d00;
      iVar10 = 0;
      bVar8 = false;
      puVar7 = (void*)0x0;
      iVar9 = 0;
      do {
        cVar6 = FUN_00d054a0();
        if (cVar6 != '\0') {
          if (puVar7 == (void*)0x0) {
            FUN_01d48a10();
            puVar7 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar7 = &g_02680400;
            *(void*)((int64_t)puVar7 + 0xc) = 0;
            puVar7[6] = 0;
            puVar7[7] = 0;
            *(void*)((int64_t)puVar7 + 0x39) = 0;
            *(void*)((int64_t)puVar7 + 0x41) = 0;
            (*pcVar5)();
            FUN_01d39400();
            FUN_01d39310();
            FUN_01d39310();
            FUN_01d38ba0();
            FUN_01d39310();
            FUN_01d39310();
            FUN_01d38ba0();
            FUN_01d38b10();
            bVar8 = true;
          }
          if (iVar10 != 0) {
            (**(code **)(*(int64_t *)*in_RDX + 0x370))((float)iVar9 * in_XMM4_Da);
          }
          FUN_01d488d0();
          (**(code **)(*(int64_t *)*in_RDX + 0x3a0))();
          FUN_01d488d0();
          (**(code **)(*(int64_t *)*in_RDX + 0x3f0))();
          if (iVar10 != 0) {
            (**(code **)(*(int64_t *)*in_RDX + 0x370))((float)iVar10 * in_XMM4_Da);
          }
        }
        if (in_XMM4_Da <= 0.0) break;
        fVar19 = fVar12 + in_XMM4_Da;
        fVar12 = fVar12 + in_XMM4_Da;
        iVar9 = iVar9 + 1;
        iVar10 = iVar10 + -1;
      } while (fVar19 < fVar17);
      lVar1 = *in_R8;
    }
    if (lVar1 != 0) {
      uVar13 = FUN_01d43d10();
      local_108 = (float)uVar13;
      fStack_104 = (float)((uint64_t)uVar13 >> 0x20);
      auVar16._4_4_ = fStack_104;
      auVar16._0_4_ = fStack_104;
      auVar16._8_4_ = extraout_XMM0_Dd_00;
      auVar16._12_4_ = extraout_XMM0_Dd_00;
      if (fStack_104 <= g_0241f360) {
        auVar16._0_4_ = g_0241f360;
      }
      auVar18 = insertps(ZEXT416((uint)(g_023b36ac + local_108)),auVar16,0x10);
      auVar3._8_4_ = in_XMM0_Dc;
      auVar3._0_8_ = param_1;
      auVar3._12_4_ = in_XMM0_Dd;
      auVar15 = blendps(g_0241dea0,auVar3,2);
      FUN_00d05530(auVar15._0_8_,auVar18._0_8_,g_02390124);
      if (puVar7 != (void*)0x0) {
        if (bVar8) {
          FUN_00d50b20();
        }
        bVar8 = false;
      }
      cVar6 = FUN_00d054a0();
      if (cVar6 == '\0') {
        puVar7 = (void*)0x0;
      }
      else {
        FUN_01d48a10();
        puVar7 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar7 = &g_02680400;
        *(void*)((int64_t)puVar7 + 0xc) = 0;
        puVar7[6] = 0;
        puVar7[7] = 0;
        *(void*)((int64_t)puVar7 + 0x39) = 0;
        *(void*)((int64_t)puVar7 + 0x41) = 0;
        (*pcVar5)();
        fVar12 = g_023b2664 + fVar11;
        FUN_01d39400();
        FUN_01d39310();
        fVar12 = fVar12 + g_0241f360;
        FUN_01d39310();
        local_108 = local_108 + g_0241deb0;
        FUN_01d38ba0();
        FUN_01d39310();
        FUN_01d39310(fVar12 + local_108 + g_0241f360);
        FUN_01d38ba0();
        FUN_01d38b10();
        FUN_01d488d0();
        (**(code **)(*(int64_t *)*in_RDX + 0x3a0))();
        FUN_01d488d0();
        auVar4._8_4_ = in_XMM0_Dc;
        auVar4._0_8_ = param_1;
        auVar4._12_4_ = in_XMM0_Dd;
        auVar15 = blendps(auVar4,ZEXT416((uint)(g_0241deb0 + fVar11)),1);
        (**(code **)(*(int64_t *)*in_RDX + 0x3f8))(auVar15._0_8_,0x10);
        bVar8 = true;
      }
    }
    FUN_01d48390();
    if (local_50 != 0) {
      FUN_00d50b20();
      FUN_00d50b20();
      FUN_00d50b20();
    }
    if (!bVar8) {
      return;
    }
    if (puVar7 == (void*)0x0) {
      return;
    }
  }
  FUN_00d50b20();
  return;
}

