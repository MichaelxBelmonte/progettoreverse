// Function: FUN_01ed0280
// Address: 01ed0280
// Size: 1632 bytes
// Class: GNTextAutoCompleterItem

void FUN_01ed0280(uint64_t param_1,uint64_t param_2)

{
  void*puVar1;
  int64_t lVar2;
  uint8_t auVar3 [16];
  int64_t lVar4;
  void*puVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int iVar8;
  int64_t *this_ptr;
  uint32_t uVar9;
  uint64_t uVar10;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  float fVar11;
  float fVar14;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  uint8_t in_register_00001284 [12];
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  uint64_t local_48;
  float fStack_40;
  float fStack_3c;
  int64_t *local_38;
  
  fVar14 = (float)((uint64_t)param_2 >> 0x20);
  fVar11 = (float)param_2;
  if (this_ptr[8] == 0) {
    puVar5 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *(void*)((int64_t)puVar5 + 0xc) = 0;
    *puVar5 = &g_026a3350;
    puVar5[2] = &g_026a37c8;
    puVar5[3] = 0;
    puVar5[4] = 0;
    *(void*)(puVar5 + 5) = 0;
    puVar5[6] = 0;
    *(void*)((int64_t)puVar5 + 0x37) = 0;
    *(void*)((int64_t)puVar5 + 0x3c) = 0;
    *(void*)((int64_t)puVar5 + 0x44) = 0;
    *(void*)((int64_t)puVar5 + 0x4c) = 0;
    *(void*)((int64_t)puVar5 + 0x54) = 0;
    *(void*)((int64_t)puVar5 + 0x5c) = 0;
    *(void*)((int64_t)puVar5 + 100) = 0;
    *(void*)((int64_t)puVar5 + 0x69) = 0;
    puVar5[0xf] = 0;
    *(void*)((int64_t)puVar5 + 0x7f) = 0;
    *(void*)((int64_t)puVar5 + 0x84) = 0;
    *(void*)((int64_t)puVar5 + 0x8c) = 0;
    *(void*)((int64_t)puVar5 + 0x94) = 0;
    uVar9 = (*g_026a3368)();
    puVar1 = (void*)this_ptr[8];
    if (puVar1 != puVar5) {
      uVar9 = FUN_00d50b00();
      this_ptr[8] = (int64_t)puVar5;
      if (puVar1 != (void*)0x0) {
        uVar9 = FUN_00d50b20();
      }
    }
    local_130 = '\0';
    local_138 = 0;
    FUN_01e5b6f0(uVar9,&local_138);
    if ((local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    FUN_01e5ca90();
    (**(code **)(*local_58 + 0x558))();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e5ca90();
    (**(code **)(*local_58 + 0x570))();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar4 = g_026fce30;
    if (g_026fce30 != 0) {
      FUN_00d50b00();
    }
    local_128 = lVar4;
    local_120 = '\x01';
    FUN_01e5a050();
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    local_48 = FUN_01e3f820();
    fStack_40 = extraout_XMM0_Dc;
    fStack_3c = extraout_XMM0_Dd;
    FUN_01e3f820();
    auVar13._8_4_ = fStack_40;
    auVar13._0_8_ = local_48;
    auVar13._12_4_ = fStack_3c;
    auVar12._0_4_ = fVar11 + (float)local_48;
    auVar12._4_4_ = fVar14 + local_48._4_4_;
    auVar12._8_4_ = in_XMM1_Dc + fStack_40;
    auVar12._12_4_ = in_XMM1_Dd + fStack_3c;
    auVar13 = blendps(auVar12,auVar13,0xd);
    uVar10 = FUN_01e46ed0(auVar13._0_4_);
    local_48 = uVar10;
    FUN_01e3f820();
    iVar8 = 4;
    if (*(int *)(this_ptr[5] + 0xc) < 4) {
      iVar8 = *(int *)(this_ptr[5] + 0xc);
    }
    auVar3._4_12_ = in_register_00001284;
    auVar3._0_4_ = (float)iVar8 * auVar13._4_4_ + auVar13._4_4_;
    insertps(auVar13,auVar3,0x10);
    local_110 = '\0';
    local_118 = 0;
    FUN_01e5ba50((float)local_48);
    if ((local_110 != '\0') && (local_118 != 0)) {
      FUN_00d50b20();
    }
    plVar6 = (int64_t *)FUN_00e8fc40();
    FUN_00193110();
    (**(code **)(*plVar6 + 0x18))();
    plVar7 = (int64_t *)this_ptr[9];
    local_48._0_4_ = SUB84(plVar6,0);
    local_48._4_4_ = (float)((uint64_t)plVar6 >> 0x20);
    if (plVar7 != plVar6) {
      FUN_00d50b00();
      this_ptr[9] = CONCAT44(local_48._4_4_,(float)local_48);
      if (plVar7 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*(int64_t *)CONCAT44(local_48._4_4_,(float)local_48) + 0x4d0))(0);
    local_108 = CONCAT44(local_48._4_4_,(float)local_48);
    local_100 = '\0';
    (**(code **)(*this_ptr + 0x518))();
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    FUN_01dce590();
    plVar7 = (int64_t *)FUN_00e8fc40();
    FUN_001de9e0();
    (**(code **)(*plVar7 + 0x18))();
    local_f8 = g_027edfd0;
    lVar4 = CONCAT44(local_48._4_4_,(float)local_48);
    local_38 = plVar7;
    if (g_027edfd0 != 0) {
      FUN_00d50b00();
    }
    local_f0 = '\x01';
    local_e8 = 0;
    local_e0 = '\0';
    local_70 = 0;
    lVar2 = this_ptr[6];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_70 = '\x01';
    local_78 = lVar2;
    (**(code **)(*local_38 + 0x468))(&local_78,&local_e8);
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = g_02800140;
    if (g_02800140 != 0) {
      FUN_00d50b00();
    }
    local_d8 = lVar2;
    local_d0 = '\x01';
    local_c8 = 0;
    local_c0 = '\0';
    local_60 = 0;
    lVar2 = this_ptr[7];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    plVar7 = local_38;
    local_60 = '\x01';
    local_68 = lVar2;
    (**(code **)(*local_38 + 0x468))(&local_68,&local_c8);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    local_b0 = '\0';
    local_b8 = lVar4;
    FUN_01ccad10();
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar7 + 0x478))();
    local_a8 = CONCAT44(local_48._4_4_,(float)local_48);
    local_a0 = '\0';
    (**(code **)(*this_ptr + 0x4e8))();
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    plVar7 = (int64_t *)FUN_00e8fc40();
    FUN_00074c30();
    (**(code **)(*plVar7 + 0x18))();
    (**(code **)(*plVar7 + 0x4d0))(0);
    (**(code **)(*plVar7 + 0x558))();
    (**(code **)(*plVar7 + 0x570))();
    FUN_01d95060();
    FUN_01d94ee0();
    local_98 = CONCAT44(local_48._4_4_,(float)local_48);
    local_90 = '\0';
    FUN_01d978b0();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    local_80 = '\0';
    local_88 = plVar7;
    FUN_01e5c8b0();
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}

