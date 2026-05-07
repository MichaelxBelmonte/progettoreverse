// Function: FUN_01f47fa0
// Address: 01f47fa0
// Size: 3352 bytes
// Class: GNStringTable

uint64_t FUN_01f47fa0(uint64_t param_1,int param_2,size_t param_3)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  int64_t *plVar4;
  void*puVar5;
  bool bVar6;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar7 [16];
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint64_t local_2118;
  uint64_t uStack_2110;
  uint64_t local_2108;
  uint64_t uStack_2100;
  int64_t *local_2058;
  char local_2050;
  int64_t *local_2048;
  char local_2040;
  int64_t *local_2038;
  char local_2030;
  uint64_t extraout_XMM0_Qb_02;
  
  lVar1 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  if (param_2 != 0) {
    if ((g_028baa10 == (int64_t *)0x0) || (g_028baa19 == '\0')) {
      FUN_00e8cb50();
      if (g_028baa10 == (int64_t *)0x0) {
        plVar4 = (int64_t *)FUN_00e8fc40();
        FUN_000161a0();
        (**(code **)(*plVar4 + 0x18))();
        if (g_028baa10 == plVar4) {
          bVar2 = false;
          bVar3 = false;
        }
        else {
          bVar2 = true;
          bVar3 = true;
          bVar6 = g_028baa10 != (int64_t *)0x0;
          g_028baa10 = plVar4;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (g_028baa18 == '\0') {
          g_028baa18 = '\x01';
          FUN_00e8cb90();
          bVar3 = bVar2;
        }
        if (!bVar3) {
          FUN_00d50b20();
        }
        (**(code **)(*g_028baa10 + 0x448))();
        FUN_01d4e800();
        plVar4 = g_028baa40;
        if (g_028baa40 != local_2038) {
          if (local_2030 == '\0') {
            if (local_2038 == (int64_t *)0x0) {
              plVar4 = (int64_t *)0x0;
            }
            else {
              FUN_00d50b00();
              plVar4 = local_2038;
            }
          }
          else {
            local_2030 = '\0';
            plVar4 = local_2038;
          }
          bVar3 = g_028baa40 != (int64_t *)0x0;
          g_028baa40 = plVar4;
          if (bVar3) {
            FUN_00d50b20();
            plVar4 = local_2038;
          }
        }
        if ((plVar4 != (int64_t *)0x0) && (g_028baa48 == '\0')) {
          g_028baa48 = '\x01';
          FUN_00e8cb90();
          plVar4 = local_2038;
        }
        if ((local_2030 != '\0') && (plVar4 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00e90e50();
        plVar4 = (int64_t *)FUN_00e8fc40();
        FUN_0006daf0();
        *(void*)(plVar4 + 0x27) = 0;
        plVar4[0x2e] = 0;
        *(void*)(plVar4 + 0x2f) = 0;
        plVar4[0x30] = 0;
        *(void*)(plVar4 + 0x31) = 0;
        plVar4[0x28] = 0;
        plVar4[0x29] = 0;
        *(void*)(plVar4 + 0x2a) = 0;
        plVar4[0x2b] = 0;
        plVar4[0x2c] = 0;
        *(void*)((int64_t)plVar4 + 0x165) = 0;
        *(void*)((int64_t)plVar4 + 0x18c) = 0;
        *(void*)((int64_t)plVar4 + 0x194) = 0;
        *(void*)((int64_t)plVar4 + 0x199) = 0;
        plVar4[0x35] = 0;
        plVar4[0x36] = 0;
        plVar4[0x37] = 0;
        plVar4[0x38] = 0;
        *plVar4 = (int64_t)&g_02682cf8;
        puVar5 = &g_026837c0;
        plVar4[2] = (int64_t)&g_026837c0;
        plVar4[0x39] = 0;
        plVar4[0x3a] = 0;
        *(void*)(plVar4 + 0x3b) = 0;
        plVar4[0x3c] = 0;
        plVar4[0x3d] = 0;
        *(void*)(plVar4 + 0x3e) = 0;
        (*g_02682d10)();
        if (g_028baa20 == plVar4) {
          bVar2 = false;
          bVar3 = false;
        }
        else {
          bVar2 = true;
          bVar3 = true;
          bVar6 = g_028baa20 != (int64_t *)0x0;
          g_028baa20 = plVar4;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (g_028baa28 == '\0') {
          g_028baa28 = '\x01';
          FUN_00e8cb90();
          bVar3 = bVar2;
        }
        if (!bVar3) {
          FUN_00d50b20();
        }
        (**(code **)(*g_028baa20 + 0x4d0))();
        plVar4 = g_028baa40;
        if (g_028baa40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        FUN_01d56f30();
        if (plVar4 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        plVar4 = (int64_t *)FUN_00e8fc40();
        FUN_00074c30();
        (**(code **)(*plVar4 + 0x18))();
        (**(code **)(*plVar4 + 0x640))();
        local_2108 = (**(code **)(*local_2038 + 0x580))();
        uStack_2100 = extraout_XMM0_Qb;
        (**(code **)(*plVar4 + 0x640))();
        auVar11._0_8_ = (**(code **)(*local_2048 + 0x578))();
        auVar11._8_8_ = extraout_XMM0_Qb_00;
        auVar10._4_12_ = local_2108._4_12_;
        auVar10._0_4_ = (float)local_2108 + g_0239394c;
        auVar7._4_12_ = auVar11._4_12_;
        auVar7._0_4_ = (float)auVar11._0_8_ + g_0239394c;
        auVar11 = insertps(auVar10,auVar7,0x10);
        (**(code **)(*plVar4 + 0x4d0))();
        if ((local_2040 != '\0') && (local_2048 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_2030 != '\0') && (local_2038 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01d94ee0();
        FUN_01d95060();
        (**(code **)(*plVar4 + 0x570))();
        (**(code **)(*plVar4 + 0x558))();
        plVar4 = g_028baa20;
        if (g_028baa20 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        FUN_01d978b0();
        if (plVar4 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        FUN_01e3f820();
        _memset(puVar5,0x1fff,param_3);
        FUN_00d8d3e0();
        plVar4 = g_028baa50;
        if (g_028baa50 != local_2048) {
          if (local_2040 == '\0') {
            if (local_2048 == (int64_t *)0x0) {
              plVar4 = (int64_t *)0x0;
            }
            else {
              FUN_00d50b00();
              plVar4 = local_2048;
            }
          }
          else {
            local_2040 = '\0';
            plVar4 = local_2048;
          }
          bVar3 = g_028baa50 != (int64_t *)0x0;
          g_028baa50 = plVar4;
          if (bVar3) {
            FUN_00d50b20();
            plVar4 = local_2048;
          }
        }
        if ((plVar4 != (int64_t *)0x0) && (g_028baa58 == '\0')) {
          g_028baa58 = '\x01';
          FUN_00e8cb90();
          plVar4 = local_2048;
        }
        if ((local_2040 != '\0') && (plVar4 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        plVar4 = (int64_t *)FUN_00e8fc40();
        FUN_0006daf0();
        *plVar4 = (int64_t)&g_0269d720;
        plVar4[2] = (int64_t)&g_0269e0b8;
        plVar4[0x2b] = 0;
        *(void*)(plVar4 + 0x2c) = 0;
        *(void*)(plVar4 + 0x2e) = 0;
        *(void*)((int64_t)plVar4 + 0x174) = 0;
        plVar4[0x36] = 0;
        *(void*)(plVar4 + 0x37) = 0;
        plVar4[0x38] = 0;
        *(void*)(plVar4 + 0x39) = 0;
        plVar4[0x27] = 0;
        plVar4[0x28] = 0;
        *(void*)((int64_t)plVar4 + 0x141) = 0;
        *(void*)((int64_t)plVar4 + 0x149) = 0;
        *(void*)((int64_t)plVar4 + 0x164) = 0;
        *(void*)((int64_t)plVar4 + 0x16b) = 0;
        plVar4[0x2f] = 0;
        plVar4[0x30] = 0;
        *(void*)(plVar4 + 0x31) = 0;
        *(void*)((int64_t)plVar4 + 0x18c) = 0;
        *(void*)((int64_t)plVar4 + 0x194) = 0;
        *(void*)((int64_t)plVar4 + 0x19a) = 0;
        *(void*)((int64_t)plVar4 + 0x1a2) = 0;
        *(void*)((int64_t)plVar4 + 0x1d4) = 0;
        *(void*)((int64_t)plVar4 + 0x1cc) = 0;
        (*g_0269d738)();
        if (g_028baa30 == plVar4) {
          bVar2 = false;
          bVar3 = false;
        }
        else {
          bVar2 = true;
          bVar3 = true;
          bVar6 = g_028baa30 != (int64_t *)0x0;
          g_028baa30 = plVar4;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (g_028baa38 == '\0') {
          g_028baa38 = '\x01';
          FUN_00e8cb90();
          bVar3 = bVar2;
        }
        if (!bVar3) {
          FUN_00d50b20();
        }
        (**(code **)(*g_028baa30 + 0x4d0))();
        (**(code **)(*g_028baa30 + 0x640))();
        (**(code **)(*local_2058 + 0x378))();
        if (local_2040 == '\0') {
          if (local_2048 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_2040 = '\0';
        }
        FUN_01e12b60();
        if (local_2048 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_2040 != '\0') && (local_2048 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_2050 != '\0') && (local_2058 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d8b910();
        FUN_00e91160();
        plVar4 = g_028baa50;
        if (g_028baa50 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        FUN_01e125e0();
        if (plVar4 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        plVar4 = (int64_t *)FUN_00e8fc40();
        FUN_00074c30();
        (**(code **)(*plVar4 + 0x18))();
        (**(code **)(*plVar4 + 0x640))();
        local_2118 = (**(code **)(*local_2048 + 0x580))();
        uStack_2110 = extraout_XMM0_Qb_01;
        (**(code **)(*plVar4 + 0x640))();
        auVar8._0_8_ = (**(code **)(*local_2058 + 0x578))();
        auVar8._8_8_ = extraout_XMM0_Qb_02;
        auVar12._4_12_ = local_2118._4_12_;
        auVar12._0_4_ = (float)local_2118 + g_0239394c;
        auVar9._4_12_ = auVar8._4_12_;
        auVar9._0_4_ = (float)auVar8._0_8_ + g_02390d38;
        insertps(auVar12,auVar9,0x10);
        (**(code **)(*plVar4 + 0x4d0))();
        if ((local_2050 != '\0') && (local_2058 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_2040 != '\0') && (local_2048 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01d94ee0();
        FUN_01d95060();
        (**(code **)(*plVar4 + 0x570))();
        (**(code **)(*plVar4 + 0x558))();
        plVar4 = g_028baa30;
        if (g_028baa30 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        FUN_01d978b0();
        if (plVar4 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        plVar4 = (int64_t *)FUN_001edd10();
        (**(code **)(*plVar4 + 0x18))();
        FUN_01e3f820();
        (**(code **)(*plVar4 + 0x4d0))();
        FUN_01db1930();
        blendps(ZEXT816(0),auVar11,0xd);
        FUN_01db1cf0(1,1,1);
        FUN_01db1cf0(0,1,1);
        (**(code **)(*plVar4 + 0x920))();
        (**(code **)(*plVar4 + 0x570))();
        (**(code **)(*plVar4 + 0x558))();
        FUN_01e56750();
        FUN_01e5bc80();
        if ((local_2040 != '\0') && (local_2048 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01e561b0();
        (**(code **)(*local_2048 + 0x450))();
        if ((local_2040 != '\0') && (local_2048 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01e1eb80(g_023934c8,0);
        plVar4 = g_028baa60;
        if (g_028baa60 != local_2048) {
          if (local_2040 == '\0') {
            if (local_2048 == (int64_t *)0x0) {
              plVar4 = (int64_t *)0x0;
            }
            else {
              FUN_00d50b00();
              plVar4 = local_2048;
            }
          }
          else {
            local_2040 = '\0';
            plVar4 = local_2048;
          }
          bVar3 = g_028baa60 != (int64_t *)0x0;
          g_028baa60 = plVar4;
          if (bVar3) {
            FUN_00d50b20();
            plVar4 = local_2048;
          }
        }
        if ((plVar4 != (int64_t *)0x0) && (g_028baa68 == '\0')) {
          g_028baa68 = '\x01';
          FUN_00e8cb90();
          plVar4 = local_2048;
        }
        if ((local_2040 != '\0') && (plVar4 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        FUN_00d50b20();
        FUN_00d50b20();
        g_028baa19 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028baa19 = '\x01';
        FUN_00e8cb70();
      }
    }
    FUN_01e56750();
    FUN_01e5bfa0();
    if ((local_2030 != '\0') && (local_2038 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*g_028baa10 + 0x460))();
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == lVar1) {
    return CONCAT71((int7)((uint64_t)*(int64_t *)PTR____stack_chk_guard_024a9898 >> 8),1);
  }
                      ___stack_chk_fail();
}

