// ===================================================================
// MDScaleModeSequenceView — Complete reconstructed pseudocode
// 6 functions
// ===================================================================


// ============================================================
// 0021f1f0
// ============================================================
// Function: FUN_0021f1f0
// Address: 0021f1f0
// Size: 5945 bytes
// Class: MDScaleModeSequenceView

void FUN_0021f1f0(uint64_t param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  void *pvVar4;
  uint64_t uVar5;
  char *pcVar6;
  int64_t *plVar7;
  void* pVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  int64_t this_ptr;
  int64_t lVar11;
  char *pcVar12;
  int64_t *local_188;
  char local_128;
  undefined7 uStack_127;
  char local_120;
  int64_t *local_118;
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
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  int64_t local_80;
  int64_t local_78;
  char local_70;
  undefined7 uStack_6f;
  char local_68;
  char local_60 [8];
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  int64_t *local_40;
  char local_38 [8];
  
  pVar8 = (void*)param_1;
  if (*(int64_t *)(this_ptr + 0x90) == 0) {
    return;
  }
  local_80 = *(int64_t *)(this_ptr + 0x98);
  if (local_80 != 0) {
    FUN_00d50b00();
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    plVar7 = local_40;
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar7 == (int64_t *)0x0) {
      (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
      plVar7 = local_40;
      local_70 = local_38[0];
      pcVar6 = local_38;
      if (local_38[0] == '\0') {
        pcVar6 = &local_70;
      }
      *pcVar6 = '\0';
      if ((local_38[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar7 == (int64_t *)0x0) {
        plVar7 = *(int64_t **)(this_ptr + 0x90);
LAB_0021f62e:
        FUN_00d50b00();
      }
      else if (local_70 == '\0') goto LAB_0021f62e;
      (**(code **)(*plVar7 + 0xa00))();
      local_100 = 0;
      local_108 = CONCAT71(uStack_4f,local_50);
      if (local_48 == '\0') {
        if (local_108 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_100 = '\x01';
      FUN_01c51220();
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      plVar7 = *(int64_t **)(this_ptr + 0x90);
      (**(code **)(&UNK_00001550 + *plVar7))();
      plVar9 = local_40;
      pcVar6 = local_38;
      if (local_38[0] == '\0') {
        pcVar6 = &local_70;
      }
      local_70 = local_38[0];
      *pcVar6 = '\0';
      if ((local_38[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar9 == (int64_t *)0x0) {
        plVar9 = *(int64_t **)(this_ptr + 0x90);
LAB_0021f727:
        FUN_00d50b00();
      }
      else if (local_70 == '\0') goto LAB_0021f727;
      (**(code **)(*plVar9 + 0xd48))();
      local_f0 = 0;
      local_f8 = CONCAT71(uStack_4f,local_50);
      if (local_48 == '\0') {
        if (local_f8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_f0 = '\x01';
      FUN_01c51ca0();
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
        FUN_00d50b20();
      }
      if (plVar7 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
      (**(code **)(&UNK_00001668 + *(int64_t *)CONCAT71(uStack_4f,local_50)))();
      plVar7 = local_40;
      if (local_38[0] == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38[0] = '\0';
      }
      FUN_01c50580();
      if (plVar7 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
      (**(code **)(*(int64_t *)CONCAT71(uStack_4f,local_50) + 0x988))();
      iVar1 = *(int *)((int64_t)local_40 + 0xc);
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
        FUN_00d50b20();
      }
      if (0 < iVar1) {
        (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
        (**(code **)(*(int64_t *)CONCAT71(uStack_127,local_128) + 0x988))();
        FUN_00d23310();
        plVar7 = local_40;
        pVar8 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_38[0]);
        pcVar6 = local_60;
        if (local_38[0] != '\0') {
          pcVar6 = local_38;
        }
        local_60[0] = local_38[0];
        *pcVar6 = '\0';
        if ((local_38[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar4 = _pthread_getspecific(pVar8);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e5ae0();
        lVar11 = CONCAT71(uStack_4f,local_50);
        if (local_48 == '\0') {
          if (lVar11 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        FUN_01c77d60();
        if (lVar11 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
          FUN_00d50b20();
        }
        if ((local_60[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
          FUN_00d50b20();
        }
        if ((local_120 != '\0') && (CONCAT71(uStack_127,local_128) != 0)) {
          FUN_00d50b20();
        }
      }
      (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
      (**(code **)(*(int64_t *)CONCAT71(uStack_4f,local_50) + 0xd48))();
      local_118 = local_40;
      local_110 = 0;
      if (local_38[0] == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38[0] = '\0';
      }
      local_110 = '\x01';
      FUN_01c51ca0();
      if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
        FUN_00d50b20();
      }
      FUN_0021e520();
    }
    plVar7 = *(int64_t **)(this_ptr + 0x90);
    (**(code **)(&UNK_00001550 + *plVar7))();
    plVar9 = local_40;
    local_70 = local_38[0];
    pcVar6 = local_38;
    if (local_38[0] == '\0') {
      pcVar6 = &local_70;
    }
    *pcVar6 = '\0';
    if ((local_38[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (int64_t *)0x0) {
      plVar9 = *(int64_t **)(this_ptr + 0x90);
LAB_0021f82e:
      FUN_00d50b00();
    }
    else if (local_70 == '\0') goto LAB_0021f82e;
    (**(code **)(&UNK_00001530 + *plVar9))();
    local_e0 = 0;
    local_e8 = CONCAT71(uStack_4f,local_50);
    if (local_48 == '\0') {
      if (local_e8 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_e0 = '\x01';
    FUN_01c71a30();
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
      FUN_00d50b20();
    }
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    plVar7 = *(int64_t **)(this_ptr + 0x90);
    (**(code **)(&UNK_00001550 + *plVar7))();
    plVar9 = local_40;
    local_70 = local_38[0];
    pcVar6 = local_38;
    if (local_38[0] == '\0') {
      pcVar6 = &local_70;
    }
    *pcVar6 = '\0';
    if ((local_38[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (int64_t *)0x0) {
      plVar9 = *(int64_t **)(this_ptr + 0x90);
LAB_0021f92e:
      FUN_00d50b00();
    }
    else if (local_70 == '\0') goto LAB_0021f92e;
    (**(code **)(&UNK_00001538 + *plVar9))();
    local_d0 = 0;
    local_d8 = CONCAT71(uStack_4f,local_50);
    if (local_48 == '\0') {
      if (local_d8 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_d0 = '\x01';
    FUN_01c719d0();
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
      FUN_00d50b20();
    }
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    plVar7 = *(int64_t **)(this_ptr + 0x90);
    (**(code **)(&UNK_00001550 + *plVar7))();
    plVar9 = local_40;
    pcVar6 = local_38;
    pcVar12 = &local_70;
    if (local_38[0] != '\0') {
      pcVar12 = pcVar6;
    }
    local_70 = local_38[0];
    *pcVar12 = '\0';
    if ((local_38[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pVar8 = (void*)pcVar6;
    if (plVar9 == (int64_t *)0x0) {
      plVar9 = *(int64_t **)(this_ptr + 0x90);
LAB_0021fa30:
      FUN_00d50b00();
    }
    else if (local_70 == '\0') goto LAB_0021fa30;
    (**(code **)(&UNK_00001510 + *plVar9))();
    local_c0 = 0;
    local_c8 = CONCAT71(uStack_4f,local_50);
    if (local_48 == '\0') {
      if (local_c8 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_c0 = '\x01';
    FUN_01c71a90();
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
      FUN_00d50b20();
    }
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0) {
      local_188 = (int64_t *)0x0;
    }
    else {
      (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
      local_188 = local_40;
      pcVar6 = local_38;
      if (local_38[0] == '\0') {
        pcVar6 = &stack0xffffffffffffffb0;
      }
      local_50 = local_38[0];
      *pcVar6 = '\0';
      if ((local_38[0] != '\0') && (local_188 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pVar8 = (void*)pcVar6;
      if (local_188 == (int64_t *)0x0) {
        local_188 = *(int64_t **)(this_ptr + 0x90);
        if (local_188 != (int64_t *)0x0) goto LAB_0021fb48;
        local_188 = (int64_t *)0x0;
      }
      else if (local_50 == '\0') {
LAB_0021fb48:
        FUN_00d50b00();
      }
    }
    FUN_01c71af0();
    if (local_188 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  local_88 = *(int64_t *)(this_ptr + 200);
  if (local_88 != 0) {
    FUN_00d50b00();
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    plVar7 = local_40;
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar7 == (int64_t *)0x0) {
      (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
      plVar7 = local_40;
      local_70 = local_38[0];
      pcVar6 = local_38;
      if (local_38[0] == '\0') {
        pcVar6 = &local_70;
      }
      *pcVar6 = '\0';
      if ((local_38[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar7 == (int64_t *)0x0) {
        plVar7 = *(int64_t **)(this_ptr + 0x90);
LAB_0021fe28:
        FUN_00d50b00();
      }
      else if (local_70 == '\0') goto LAB_0021fe28;
      (**(code **)(*plVar7 + 0xa00))();
      lVar11 = CONCAT71(uStack_4f,local_50);
      if ((local_48 != '\0') && (lVar11 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (lVar11 == 0) {
        lVar11 = 0;
        local_78 = 0;
      }
      else {
        plVar7 = *(int64_t **)(this_ptr + 0x90);
        (**(code **)(&UNK_00001550 + *plVar7))();
        plVar9 = local_40;
        local_128 = local_38[0];
        pcVar6 = &local_128;
        if (local_38[0] != '\0') {
          pcVar6 = local_38;
        }
        *pcVar6 = '\0';
        if ((local_38[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar9 == (int64_t *)0x0) {
          plVar9 = *(int64_t **)(this_ptr + 0x90);
LAB_0021fedb:
          FUN_00d50b00();
        }
        else if (local_128 == '\0') goto LAB_0021fedb;
        (**(code **)(*plVar9 + 0xa00))();
        pvVar4 = _pthread_getspecific(pVar8);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar5 = FUN_012caf10();
        lVar11 = CONCAT71(uStack_4f,local_50);
        if (lVar11 == 0) {
          local_78 = 0;
        }
        else if (local_48 == '\0') {
          uVar5 = FUN_00d50b00();
          local_78 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
          if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_48 = '\0';
          local_78 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
        }
        if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
          FUN_00d50b20();
        }
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_01c878e0();
      plVar7 = *(int64_t **)(this_ptr + 0x90);
      (**(code **)(&UNK_00001550 + *plVar7))();
      plVar9 = local_40;
      pcVar6 = local_38;
      if (local_38[0] == '\0') {
        pcVar6 = &local_70;
      }
      local_70 = local_38[0];
      *pcVar6 = '\0';
      if ((local_38[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar9 == (int64_t *)0x0) {
        plVar9 = *(int64_t **)(this_ptr + 0x90);
LAB_00220032:
        FUN_00d50b00();
      }
      else if (local_70 == '\0') goto LAB_00220032;
      (**(code **)(*plVar9 + 0xd48))();
      local_90 = 0;
      local_98 = CONCAT71(uStack_4f,local_50);
      if (local_48 == '\0') {
        if (local_98 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_90 = '\x01';
      FUN_01c87b20();
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
        FUN_00d50b20();
      }
      if (plVar7 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (((char)local_78 != '\0') && (lVar11 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
      (**(code **)(&UNK_00001668 + *(int64_t *)CONCAT71(uStack_6f,local_70)))();
      pvVar4 = _pthread_getspecific(pVar8);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0132d610();
      local_b8 = local_40;
      local_b0 = 0;
      if (local_38[0] == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38[0] = '\0';
      }
      local_b0 = '\x01';
      FUN_01c878e0();
      if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
      (**(code **)(*(int64_t *)CONCAT71(uStack_4f,local_50) + 0xd48))();
      local_a8 = local_40;
      local_a0 = 0;
      if (local_38[0] == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38[0] = '\0';
      }
      local_a0 = '\x01';
      FUN_01c87b20();
      if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
        FUN_00d50b20();
      }
    }
    if (g_02804650 == (int64_t *)0x0) {
      FUN_01cfc6a0(g_0239109c);
      plVar7 = g_02804650;
      if (g_02804650 != local_40) {
        if (local_38[0] == '\0') {
          if (local_40 == (int64_t *)0x0) {
            plVar7 = (int64_t *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar7 = local_40;
          }
        }
        else {
          local_38[0] = '\0';
          plVar7 = local_40;
        }
        bVar3 = g_02804650 != (int64_t *)0x0;
        g_02804650 = plVar7;
        if (bVar3) {
          FUN_00d50b20();
          plVar7 = local_40;
        }
      }
      if ((plVar7 != (int64_t *)0x0) && (g_02804658 == '\0')) {
        g_02804658 = '\x01';
        FUN_00e8cb90();
        plVar7 = local_40;
      }
      if ((local_38[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01cfc6a0(g_0239011c);
      plVar7 = g_02804660;
      if (g_02804660 != local_40) {
        if (local_38[0] == '\0') {
          if (local_40 == (int64_t *)0x0) {
            plVar7 = (int64_t *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar7 = local_40;
          }
        }
        else {
          local_38[0] = '\0';
          plVar7 = local_40;
        }
        bVar3 = g_02804660 != (int64_t *)0x0;
        g_02804660 = plVar7;
        if (bVar3) {
          FUN_00d50b20();
          plVar7 = local_40;
        }
      }
      if ((plVar7 != (int64_t *)0x0) && (g_02804668 == '\0')) {
        g_02804668 = '\x01';
        FUN_00e8cb90();
        plVar7 = local_40;
      }
      if ((local_38[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01cfc6a0(g_02390120);
      plVar7 = g_02804670;
      if (g_02804670 != local_40) {
        if (local_38[0] == '\0') {
          if (local_40 == (int64_t *)0x0) {
            plVar7 = (int64_t *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar7 = local_40;
          }
        }
        else {
          local_38[0] = '\0';
          plVar7 = local_40;
        }
        bVar3 = g_02804670 != (int64_t *)0x0;
        g_02804670 = plVar7;
        if (bVar3) {
          FUN_00d50b20();
          plVar7 = local_40;
        }
      }
      if ((plVar7 != (int64_t *)0x0) && (g_02804678 == '\0')) {
        g_02804678 = '\x01';
        FUN_00e8cb90();
        plVar7 = local_40;
      }
      if ((local_38[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    plVar7 = g_02804670;
    if (g_02804670 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_01c87a60();
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    plVar7 = g_02804660;
    if (g_02804660 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_01c87a00();
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    plVar7 = g_02804650;
    if (g_02804650 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_01c87ac0();
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar7 = *(int64_t **)(this_ptr + 0x90);
  (**(code **)(&UNK_00001550 + *plVar7))();
  plVar9 = local_40;
  local_70 = local_38[0];
  pcVar6 = local_38;
  if (local_38[0] == '\0') {
    pcVar6 = &local_70;
  }
  *pcVar6 = '\0';
  if ((local_38[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar9 == (int64_t *)0x0) {
    plVar9 = *(int64_t **)(this_ptr + 0x90);
LAB_00220455:
    FUN_00d50b00();
  }
  else if (local_70 == '\0') goto LAB_00220455;
  (**(code **)(*plVar9 + 0x7b8))();
  local_78 = CONCAT71(uStack_4f,local_50);
  if (local_48 == '\0') {
    if (((local_78 != 0) && (FUN_00d50b00(), local_48 != '\0')) &&
       (CONCAT71(uStack_4f,local_50) != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_48 = '\0';
  }
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  plVar7 = *(int64_t **)(this_ptr + 0x90);
  (**(code **)(&UNK_00001550 + *plVar7))();
  plVar9 = local_40;
  pcVar6 = &local_70;
  if (local_38[0] != '\0') {
    pcVar6 = local_38;
  }
  local_70 = local_38[0];
  *pcVar6 = '\0';
  if ((local_38[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar9 == (int64_t *)0x0) {
    plVar9 = *(int64_t **)(this_ptr + 0x90);
LAB_00220512:
    FUN_00d50b00();
  }
  else if (local_70 == '\0') goto LAB_00220512;
  (**(code **)(*plVar9 + 0x988))();
  iVar1 = *(int *)(CONCAT71(uStack_4f,local_50) + 0xc);
  plVar9 = *(int64_t **)(this_ptr + 0x90);
  if (plVar9 == (int64_t *)0x0) {
LAB_002205b8:
    plVar10 = (int64_t *)0x0;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar9))();
    plVar10 = local_40;
    local_128 = local_38[0];
    pcVar6 = &local_128;
    if (local_38[0] != '\0') {
      pcVar6 = local_38;
    }
    *pcVar6 = '\0';
    if ((local_38[0] != '\0') && (plVar10 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar10 == (int64_t *)0x0) {
      plVar10 = *(int64_t **)(this_ptr + 0x90);
      if (plVar10 == (int64_t *)0x0) goto LAB_002205b8;
    }
    else if (local_128 != '\0') goto LAB_002205ba;
    FUN_00d50b00();
  }
LAB_002205ba:
  FUN_019a47c0();
  iVar2 = *(int *)(CONCAT71(uStack_6f,local_70) + 0xc);
  if (local_68 != '\0') {
    FUN_00d50b20();
  }
  if ((plVar9 != (int64_t *)0x0) && (plVar10 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
    FUN_00d50b20();
  }
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  lVar11 = local_88;
  if (iVar1 + iVar2 < 2) {
    FUN_00505840();
    (**(code **)(*local_40 + 0x998))();
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00505840();
    (**(code **)(*local_40 + 0x918))();
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00505840();
    (**(code **)(*local_40 + 0x998))();
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00505840();
    plVar9 = (int64_t *)CONCAT71(uStack_4f,local_50);
    plVar7 = *(int64_t **)(this_ptr + 0x90);
    if (plVar7 == (int64_t *)0x0) {
LAB_00220745:
      plVar10 = (int64_t *)0x0;
    }
    else {
      (**(code **)(&UNK_00001550 + *plVar7))();
      plVar10 = local_40;
      pcVar6 = &local_70;
      if (local_38[0] != '\0') {
        pcVar6 = local_38;
      }
      local_70 = local_38[0];
      *pcVar6 = '\0';
      if ((local_38[0] != '\0') && (plVar10 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar10 == (int64_t *)0x0) {
        plVar10 = *(int64_t **)(this_ptr + 0x90);
        if (plVar10 == (int64_t *)0x0) goto LAB_00220745;
      }
      else if (local_70 != '\0') goto LAB_00220747;
      FUN_00d50b00();
    }
LAB_00220747:
    FUN_019f2900();
    (**(code **)(*plVar9 + 0x918))();
    if ((plVar7 != (int64_t *)0x0) && (plVar10 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar11 = local_88;
    if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_004fe810();
  if ((*(int64_t *)(this_ptr + 0xd0) == 0) ||
     (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0)) goto LAB_002208d1;
  (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
  plVar7 = local_40;
  local_50 = local_38[0];
  pcVar6 = local_38;
  if (local_38[0] == '\0') {
    pcVar6 = &stack0xffffffffffffffb0;
  }
  *pcVar6 = '\0';
  if ((local_38[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 == (int64_t *)0x0) {
    if (*(int64_t *)(this_ptr + 0x90) == 0) goto LAB_002208d1;
LAB_0022080f:
    FUN_00d50b00();
  }
  else if (local_50 == '\0') goto LAB_0022080f;
  FUN_00d50b20();
  plVar7 = *(int64_t **)(this_ptr + 0x90);
  if (plVar7 == (int64_t *)0x0) {
LAB_0022089b:
    plVar9 = (int64_t *)0x0;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar7))();
    pcVar6 = local_38;
    if (local_38[0] == '\0') {
      pcVar6 = &stack0xffffffffffffffb0;
    }
    local_50 = local_38[0];
    *pcVar6 = '\0';
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 == (int64_t *)0x0) {
      plVar9 = *(int64_t **)(this_ptr + 0x90);
      if (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0) goto LAB_0022089b;
    }
    else {
      plVar9 = local_40;
      if (local_50 != '\0') goto LAB_0022089e;
    }
    FUN_00d50b00();
  }
LAB_0022089e:
  FUN_01e42170();
  FUN_000ad110();
  lVar11 = local_88;
  if ((plVar7 != (int64_t *)0x0) && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_002208d1:
  FUN_00223fa0();
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  if (local_80 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0021cc80
// ============================================================
// Function: FUN_0021cc80
// Address: 0021cc80
// Size: 4167 bytes
// Class: MDScaleModeSequenceView

void FUN_0021cc80(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  bool bVar3;
  int64_t lVar4;
  char cVar5;
  char cVar6;
  int64_t **pplVar7;
  void *pvVar8;
  void* pVar9;
  int64_t *plVar10;
  int64_t this_ptr;
  int64_t **pplVar11;
  int64_t *plVar12;
  int64_t *plVar13;
  int64_t *local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_50 [8];
  int64_t *local_48;
  int64_t *local_40;
  
  FUN_00d3ecc0();
  plVar13 = local_48;
  pplVar11 = &local_40;
  local_50[0] = (char)local_40;
  pplVar7 = (int64_t **)local_50;
  if ((char)local_40 != '\0') {
    pplVar7 = pplVar11;
  }
  *(void*)pplVar7 = 0;
  if (((char)local_40 != '\0') && (plVar13 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = g_026fce70;
  pVar9 = (void*)pplVar11;
  local_70 = plVar13;
  if (g_026fce70 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*local_70 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_026f6d40;
  if (cVar5 == '\0') {
    if (g_026f6d40 != 0) {
      FUN_00d50b00();
    }
    cVar5 = (**(code **)(*local_70 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    plVar13 = *(int64_t **)(this_ptr + 0x90);
    if (cVar5 == '\0') {
      if (plVar13 != (int64_t *)0x0) {
        (**(code **)(&UNK_00001550 + *plVar13))();
        plVar13 = local_48;
        local_68 = (int64_t *)CONCAT71(local_68._1_7_,(char)local_40);
        pplVar11 = &local_40;
        pplVar7 = &local_68;
        if ((char)local_40 != '\0') {
          pplVar7 = pplVar11;
        }
        *(void*)pplVar7 = 0;
        if (((char)local_40 != '\0') && (plVar13 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pVar9 = (void*)pplVar11;
        if (plVar13 == (int64_t *)0x0) {
          plVar13 = *(int64_t **)(this_ptr + 0x90);
          if (plVar13 != (int64_t *)0x0) goto LAB_0021d0c2;
        }
        else {
          if ((char)local_68 == '\0') {
LAB_0021d0c2:
            FUN_00d50b00();
          }
          if (plVar13 != (int64_t *)0x0) {
            FUN_00d3ecf0();
            plVar13 = *(int64_t **)(this_ptr + 0x90);
            (**(code **)(&UNK_00001550 + *plVar13))();
            plVar10 = local_48;
            pplVar11 = &local_58;
            pplVar7 = &local_40;
            if ((char)local_40 == '\0') {
              pplVar7 = pplVar11;
            }
            local_58._0_1_ = (char)local_40;
            *(void*)pplVar7 = 0;
            if (((char)local_40 != '\0') && (plVar10 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            pVar9 = (void*)pplVar11;
            if (plVar10 == (int64_t *)0x0) {
              plVar10 = *(int64_t **)(this_ptr + 0x90);
LAB_0021d3fc:
              FUN_00d50b00();
            }
            else if ((char)local_58 == '\0') goto LAB_0021d3fc;
            (**(code **)(*plVar10 + 0x970))();
            FUN_0197c2b0();
            plVar2 = local_68;
            plVar10 = (int64_t *)CONCAT71(local_80._1_7_,(char)local_80);
            if ((local_78 != '\0') && (plVar10 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_b0 != '\0') && (CONCAT71(local_b8._1_7_,(char)local_b8) != 0)) {
              FUN_00d50b20();
            }
            if (plVar13 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            lVar1 = g_027e7c30;
            if (plVar2 == plVar10) {
              if (g_027e7c30 != 0) {
                FUN_00d50b00();
              }
              local_a8 = lVar1;
              local_a0 = '\x01';
              cVar5 = (**(code **)(*local_70 + 0x50))();
              if (cVar5 == '\0') {
                if ((local_a0 != '\0') && (local_a8 != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                cVar5 = (**(code **)(**(int64_t **)(this_ptr + 0xc0) + 0x398))();
                if ((local_a0 != '\0') && (local_a8 != 0)) {
                  FUN_00d50b20();
                }
                if ((cVar5 != '\0') && (*(char *)(this_ptr + 0x150) != '\x01')) {
                  *(void*)(this_ptr + 0x150) = 1;
                  FUN_0021e5f0();
                }
              }
              goto LAB_0021dc56;
            }
          }
        }
      }
      lVar1 = g_026f6d50;
      if (g_026f6d50 != 0) {
        FUN_00d50b00();
      }
      cVar5 = (**(code **)(*local_70 + 0x50))();
      lVar4 = g_026f6d58;
      cVar6 = '\x01';
      if (cVar5 == '\0') {
        if (g_026f6d58 != 0) {
          FUN_00d50b00();
        }
        cVar6 = (**(code **)(*local_70 + 0x50))();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_026f6d60;
      if (cVar6 == '\0') {
        if (g_026f6d60 != 0) {
          FUN_00d50b00();
        }
        cVar5 = (**(code **)(*local_70 + 0x50))();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        lVar1 = g_026fe420;
        if (cVar5 == '\0') {
          if (g_026fe420 != 0) {
            FUN_00d50b00();
          }
          cVar5 = (**(code **)(*local_70 + 0x50))();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          lVar1 = g_026f6d70;
          if (cVar5 == '\0') {
            if (g_026f6d70 != 0) {
              FUN_00d50b00();
            }
            cVar5 = (**(code **)(*local_70 + 0x50))();
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            if (cVar5 != '\0') {
              (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
              plVar13 = local_48;
              if (((char)local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar13 != (int64_t *)0x0) {
                (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
                (**(code **)(&UNK_00001668 + *local_68))();
                plVar13 = local_48;
                if (local_48 == (int64_t *)0x0) {
                  bVar3 = true;
                  plVar13 = (int64_t *)0x0;
                }
                else {
                  if ((char)local_40 == '\0') {
                    FUN_00d50b00();
                    bVar3 = false;
                    if (((char)local_40 == '\0') || (local_48 == (int64_t *)0x0))
                    goto LAB_0021db1c;
                    FUN_00d50b20();
                  }
                  else {
                    local_40._0_1_ = '\0';
                  }
                  bVar3 = false;
                }
LAB_0021db1c:
                if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar13 != (int64_t *)0x0) {
                  pplVar11 = &local_48;
                  FUN_00d3ecf0();
                  plVar13 = local_48;
                  FUN_00115af0();
                  if (plVar13 == (int64_t *)0x0) {
LAB_0021db78:
                    pplVar11 = (int64_t **)&g_02802688;
                  }
                  else {
                    (**(code **)(*plVar13 + 0x360))();
                    cVar5 = FUN_00e85ea0();
                    if (cVar5 == '\0') goto LAB_0021db78;
                  }
                  plVar13 = *pplVar11;
                  if (*(char *)(pplVar11 + 1) == '\0') {
                    if (plVar13 != (int64_t *)0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    *(void*)(pplVar11 + 1) = 0;
                  }
                  if (((char)local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  pvVar8 = _pthread_getspecific(pVar9);
                  if (pvVar8 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_01320d00();
                  plVar10 = local_48;
                  if (((char)local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (plVar13 == plVar10) {
                    local_40._0_1_ = '\0';
                    local_48 = (int64_t *)0x0;
                    local_68 = (int64_t *)0x0;
                    local_60 = '\0';
                    FUN_00228b40(&local_68,&local_48);
                  }
                  if (plVar13 != (int64_t *)0x0) {
                    FUN_00d50b20();
                  }
                  if (!bVar3) {
                    FUN_00d50b20();
                  }
                }
              }
            }
          }
          else {
            FUN_00d3ecf0();
            plVar10 = local_48;
            plVar13 = *(int64_t **)(this_ptr + 0xc0);
            if (((char)local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar10 == plVar13) {
              if (*(int64_t *)(this_ptr + 0x1c0) == 0) {
LAB_0021dacf:
                bVar3 = true;
              }
              else {
                FUN_006f3f00();
                if ((char)local_40 == '\0') {
                  if (local_48 == (int64_t *)0x0) goto LAB_0021dacf;
                  FUN_00d50b00();
                  if (((char)local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else if (local_48 == (int64_t *)0x0) {
                  bVar3 = true;
                  goto LAB_0021dad4;
                }
                cVar5 = FUN_00751ba0();
                bVar3 = false;
                if (cVar5 != '\0') {
                  cVar5 = FUN_00791130();
                  if (cVar5 == '\0') {
                    FUN_00d50b20();
                    goto LAB_0021dc95;
                  }
                  bVar3 = false;
                }
              }
LAB_0021dad4:
              FUN_0021eea0(g_02394248);
              if (!bVar3) {
                FUN_00d50b20();
              }
            }
          }
        }
        else {
          FUN_0021f1f0();
        }
      }
      else {
        FUN_0021a2c0();
      }
    }
    else if (plVar13 != (int64_t *)0x0) {
      (**(code **)(&UNK_00001550 + *plVar13))();
      plVar13 = local_48;
      local_68 = (int64_t *)CONCAT71(local_68._1_7_,(char)local_40);
      pplVar11 = &local_68;
      if ((char)local_40 != '\0') {
        pplVar11 = &local_40;
      }
      *(void*)pplVar11 = 0;
      if (((char)local_40 != '\0') && (plVar13 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar13 == (int64_t *)0x0) {
        if (*(int64_t *)(this_ptr + 0x90) != 0) goto LAB_0021d03c;
      }
      else {
        if ((char)local_68 == '\0') {
LAB_0021d03c:
          FUN_00d50b00();
        }
        FUN_00d50b20();
        plVar13 = *(int64_t **)(this_ptr + 0x90);
        (**(code **)(&UNK_00001550 + *plVar13))();
        plVar10 = local_48;
        local_80._0_1_ = (char)local_40;
        pplVar11 = &local_80;
        if ((char)local_40 != '\0') {
          pplVar11 = &local_40;
        }
        *(void*)pplVar11 = 0;
        if (((char)local_40 != '\0') && (plVar10 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar10 == (int64_t *)0x0) {
          plVar10 = *(int64_t **)(this_ptr + 0x90);
LAB_0021d14f:
          FUN_00d50b00();
        }
        else if ((char)local_80 == '\0') goto LAB_0021d14f;
        (**(code **)(*plVar10 + 0x978))();
        FUN_00d3ecf0();
        plVar2 = local_48;
        plVar10 = local_68;
        if (((char)local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar13 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (plVar10 == plVar2) {
          if (*(int64_t *)(this_ptr + 0x98) != 0) {
            FUN_00d50b00();
            lVar1 = *(int64_t *)(this_ptr + 0x98);
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
            cVar5 = FUN_01e420b0();
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            if (cVar5 != '\0') goto LAB_0021dc56;
          }
          plVar13 = *(int64_t **)(this_ptr + 0x90);
          if (plVar13 == (int64_t *)0x0) {
LAB_0021d9bc:
            plVar10 = (int64_t *)0x0;
          }
          else {
            (**(code **)(&UNK_00001550 + *plVar13))();
            plVar10 = local_48;
            local_68 = (int64_t *)CONCAT71(local_68._1_7_,(char)local_40);
            pplVar11 = &local_40;
            if ((char)local_40 == '\0') {
              pplVar11 = &local_68;
            }
            *(void*)pplVar11 = 0;
            if (((char)local_40 != '\0') && (plVar10 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar10 == (int64_t *)0x0) {
              plVar10 = *(int64_t **)(this_ptr + 0x90);
              if (plVar10 == (int64_t *)0x0) goto LAB_0021d9bc;
            }
            else if ((char)local_68 != '\0') goto LAB_0021d9be;
            FUN_00d50b00();
          }
LAB_0021d9be:
          cVar5 = FUN_01e420b0();
          if ((plVar13 != (int64_t *)0x0) && (plVar10 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar5 == '\0') {
            plVar13 = *(int64_t **)(this_ptr + 0x90);
            if (plVar13 == (int64_t *)0x0) {
LAB_0021da56:
              plVar10 = (int64_t *)0x0;
            }
            else {
              (**(code **)(&UNK_00001550 + *plVar13))();
              plVar10 = local_48;
              pplVar11 = &local_40;
              if ((char)local_40 == '\0') {
                pplVar11 = &local_68;
              }
              local_68 = (int64_t *)CONCAT71(local_68._1_7_,(char)local_40);
              *(void*)pplVar11 = 0;
              if (((char)local_40 != '\0') && (plVar10 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar10 == (int64_t *)0x0) {
                plVar10 = *(int64_t **)(this_ptr + 0x90);
                if (plVar10 == (int64_t *)0x0) goto LAB_0021da56;
              }
              else if ((char)local_68 != '\0') goto LAB_0021da58;
              FUN_00d50b00();
            }
LAB_0021da58:
            FUN_01e42250();
            if ((plVar13 != (int64_t *)0x0) && (plVar10 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          FUN_0021eea0(g_02394248);
        }
      }
    }
  }
  else {
    if (g_02804680 != 0) {
      g_02804680 = 0;
      FUN_00d50b20();
    }
    if (g_02804690 != 0) {
      g_02804690 = 0;
      FUN_00d50b20();
    }
    if (*(int64_t *)(this_ptr + 0x98) != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
      lVar1 = *(int64_t *)(this_ptr + 0x98);
      if ((lVar1 == 0) || (FUN_00d50b00(), *(int64_t *)(this_ptr + 0x98) == 0)) {
        bVar3 = true;
      }
      else {
        FUN_00d50b00();
        bVar3 = false;
      }
      FUN_01c446f0();
      FUN_0021e520();
      if (!bVar3) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_0021e5f0();
    if (*(int64_t **)(this_ptr + 0x90) != (int64_t *)0x0) {
      (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
      plVar13 = local_48;
      local_68 = (int64_t *)CONCAT71(local_68._1_7_,(char)local_40);
      pplVar11 = &local_68;
      if ((char)local_40 != '\0') {
        pplVar11 = &local_40;
      }
      *(void*)pplVar11 = 0;
      if (((char)local_40 != '\0') && (plVar13 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar13 == (int64_t *)0x0) {
        plVar13 = *(int64_t **)(this_ptr + 0x90);
        if (plVar13 != (int64_t *)0x0) goto LAB_0021cfad;
      }
      else {
        if ((char)local_68 == '\0') {
LAB_0021cfad:
          FUN_00d50b00();
        }
        if (plVar13 != (int64_t *)0x0) {
          plVar13 = *(int64_t **)(this_ptr + 0x90);
          if (plVar13 == (int64_t *)0x0) {
LAB_0021d2ab:
            plVar10 = (int64_t *)0x0;
          }
          else {
            (**(code **)(&UNK_00001550 + *plVar13))();
            plVar10 = local_48;
            local_80._0_1_ = (char)local_40;
            pplVar11 = &local_80;
            if ((char)local_40 != '\0') {
              pplVar11 = &local_40;
            }
            *(void*)pplVar11 = 0;
            if (((char)local_40 != '\0') && (plVar10 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar10 == (int64_t *)0x0) {
              plVar10 = *(int64_t **)(this_ptr + 0x90);
              if (plVar10 == (int64_t *)0x0) goto LAB_0021d2ab;
            }
            else if ((char)local_80 != '\0') goto LAB_0021d2ad;
            FUN_00d50b00();
          }
LAB_0021d2ad:
          FUN_019f0ee0();
          plVar2 = local_68;
          if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((plVar13 != (int64_t *)0x0) && (plVar10 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          if (plVar2 != (int64_t *)0x0) {
            plVar13 = *(int64_t **)(this_ptr + 0x90);
            (**(code **)(&UNK_00001550 + *plVar13))();
            plVar10 = local_48;
            pplVar11 = &local_68;
            if ((char)local_40 != '\0') {
              pplVar11 = &local_40;
            }
            local_68 = (int64_t *)CONCAT71(local_68._1_7_,(char)local_40);
            *(void*)pplVar11 = 0;
            if (((char)local_40 != '\0') && (plVar10 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar10 == (int64_t *)0x0) {
              plVar10 = *(int64_t **)(this_ptr + 0x90);
LAB_0021d354:
              FUN_00d50b00();
            }
            else if ((char)local_68 == '\0') goto LAB_0021d354;
            (**(code **)(*plVar10 + 0xec0))();
            if (plVar13 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            plVar13 = *(int64_t **)(this_ptr + 0x90);
            if (plVar13 == (int64_t *)0x0) {
LAB_0021d723:
              plVar10 = (int64_t *)0x0;
            }
            else {
              (**(code **)(&UNK_00001550 + *plVar13))();
              plVar10 = local_48;
              local_80._0_1_ = (char)local_40;
              pplVar11 = &local_80;
              if ((char)local_40 != '\0') {
                pplVar11 = &local_40;
              }
              *(void*)pplVar11 = 0;
              if (((char)local_40 != '\0') && (plVar10 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar10 == (int64_t *)0x0) {
                plVar10 = *(int64_t **)(this_ptr + 0x90);
                if (plVar10 == (int64_t *)0x0) goto LAB_0021d723;
              }
              else if ((char)local_80 != '\0') goto LAB_0021d725;
              FUN_00d50b00();
            }
LAB_0021d725:
            FUN_019f0f90();
            plVar2 = *(int64_t **)(this_ptr + 0x90);
            if (plVar2 == (int64_t *)0x0) {
LAB_0021d7ba:
              plVar12 = (int64_t *)0x0;
            }
            else {
              (**(code **)(&UNK_00001550 + *plVar2))();
              plVar12 = local_48;
              pplVar11 = &local_40;
              if ((char)local_40 == '\0') {
                pplVar11 = &local_b8;
              }
              local_b8._0_1_ = (char)local_40;
              *(void*)pplVar11 = 0;
              if (((char)local_40 != '\0') && (plVar12 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar12 == (int64_t *)0x0) {
                plVar12 = *(int64_t **)(this_ptr + 0x90);
                if (plVar12 == (int64_t *)0x0) goto LAB_0021d7ba;
              }
              else if ((char)local_b8 != '\0') goto LAB_0021d7bd;
              FUN_00d50b00();
            }
LAB_0021d7bd:
            FUN_019f0ee0();
            local_90 = 0;
            local_98 = CONCAT71(local_80._1_7_,(char)local_80);
            if (local_78 == '\0') {
              if (local_98 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_78 = '\0';
            }
            local_90 = '\x01';
            FUN_01e26eb0();
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            if ((local_78 != '\0') && (CONCAT71(local_80._1_7_,(char)local_80) != 0)) {
              FUN_00d50b20();
            }
            if ((plVar2 != (int64_t *)0x0) && (plVar12 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((plVar13 != (int64_t *)0x0) && (plVar10 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
      }
    }
  }
LAB_0021dc56:
  FUN_00d530a0();
LAB_0021dc95:
  if ((local_50[0] != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0021b740
// ============================================================
// Function: FUN_0021b740
// Address: 0021b740
// Size: 2214 bytes
// Class: MDScaleModeSequenceView

void FUN_0021b740(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  void*puVar4;
  int64_t *plVar5;
  int64_t this_ptr;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
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
  int64_t *local_28;
  char local_20;
  
  FUN_00d50100();
  *(void*)(this_ptr + 0x198) = 0;
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02510938;
  puVar4[2] = &g_02510d08;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  (*g_02510950)();
  lVar1 = *(int64_t *)(this_ptr + 0xb0);
  *(void**)(this_ptr + 0xb0) = puVar4;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  FUN_004f1180();
  plVar2 = *(int64_t **)(this_ptr + 0x1d8);
  plVar5 = plVar2;
  if (plVar2 != local_28) {
    plVar5 = local_28;
    if (local_20 == '\0') {
      if (local_28 == (int64_t *)0x0) {
        plVar5 = (int64_t *)0x0;
        goto LAB_0021b7f3;
      }
      FUN_00d50b00();
      plVar2 = *(int64_t **)(this_ptr + 0x1d8);
      *(int64_t **)(this_ptr + 0x1d8) = local_28;
    }
    else {
      local_20 = '\0';
LAB_0021b7f3:
      *(int64_t **)(this_ptr + 0x1d8) = plVar5;
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar5 = local_28;
    }
  }
  if ((local_20 != '\0') && (plVar5 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_178 = g_02709de0;
  if (g_02709de0 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_026f6cf0;
  local_170 = '\x01';
  if (g_026f6cf0 != 0) {
    FUN_00d50b00();
  }
  local_168 = lVar1;
  local_160 = '\x01';
  local_158 = 0;
  local_150 = '\0';
  FUN_000bf690(&local_168,&local_178,&local_158);
  plVar2 = *(int64_t **)(this_ptr + 0xe8);
  plVar5 = plVar2;
  if (plVar2 != local_28) {
    plVar5 = local_28;
    if (local_20 == '\0') {
      if (local_28 == (int64_t *)0x0) {
        plVar5 = (int64_t *)0x0;
        goto LAB_0021b908;
      }
      FUN_00d50b00();
      plVar2 = *(int64_t **)(this_ptr + 0xe8);
      *(int64_t **)(this_ptr + 0xe8) = local_28;
    }
    else {
      local_20 = '\0';
LAB_0021b908:
      *(int64_t **)(this_ptr + 0xe8) = plVar5;
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar5 = local_28;
    }
  }
  if ((local_20 != '\0') && (plVar5 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_150 != '\0') && (local_158 != 0)) {
    FUN_00d50b20();
  }
  if ((local_160 != '\0') && (local_168 != 0)) {
    FUN_00d50b20();
  }
  if ((local_170 != '\0') && (local_178 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_148 = g_026d7d18;
  if (g_026d7d18 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_026f6d00;
  local_140 = '\x01';
  if (g_026f6d00 != 0) {
    FUN_00d50b00();
  }
  local_138 = lVar1;
  local_130 = '\x01';
  local_128 = 0;
  local_120 = '\0';
  FUN_000bf690(&local_138,&local_148,&local_128);
  plVar2 = *(int64_t **)(this_ptr + 0x128);
  plVar5 = plVar2;
  if (plVar2 != local_28) {
    plVar5 = local_28;
    if (local_20 == '\0') {
      if (local_28 == (int64_t *)0x0) {
        plVar5 = (int64_t *)0x0;
        goto LAB_0021ba6b;
      }
      FUN_00d50b00();
      plVar2 = *(int64_t **)(this_ptr + 0x128);
      *(int64_t **)(this_ptr + 0x128) = local_28;
    }
    else {
      local_20 = '\0';
LAB_0021ba6b:
      *(int64_t **)(this_ptr + 0x128) = plVar5;
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar5 = local_28;
    }
  }
  if ((local_20 != '\0') && (plVar5 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  if ((local_140 != '\0') && (local_148 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_28 + 0x450))();
  if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    FUN_00d50b00();
    local_e8 = g_026f6d18;
    if (g_026f6d18 != 0) {
      FUN_00d50b00();
    }
    lVar1 = g_026f6d20;
    local_e0 = '\x01';
    if (g_026f6d20 != 0) {
      FUN_00d50b00();
    }
    local_d8 = lVar1;
    local_d0 = '\x01';
    local_c8 = 0;
    local_c0 = '\0';
    FUN_000bf690(&local_d8,&local_e8,&local_c8);
    plVar2 = *(int64_t **)(this_ptr + 0xf0);
    plVar5 = plVar2;
    if (plVar2 != local_28) {
      plVar5 = local_28;
      if (local_20 == '\0') {
        if (local_28 == (int64_t *)0x0) {
          plVar5 = (int64_t *)0x0;
          goto LAB_0021bcd3;
        }
        FUN_00d50b00();
        plVar2 = *(int64_t **)(this_ptr + 0xf0);
        *(int64_t **)(this_ptr + 0xf0) = local_28;
      }
      else {
        local_20 = '\0';
LAB_0021bcd3:
        *(int64_t **)(this_ptr + 0xf0) = plVar5;
      }
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
        plVar5 = local_28;
      }
    }
    if ((local_20 != '\0') && (plVar5 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b00();
    local_b8 = g_026f6d28;
    if (g_026f6d28 != 0) {
      FUN_00d50b00();
    }
    lVar1 = g_026f6d30;
    local_b0 = '\x01';
    if (g_026f6d30 != 0) {
      FUN_00d50b00();
    }
    local_a8 = lVar1;
    local_a0 = '\x01';
    local_98 = 0;
    local_90 = '\0';
    FUN_000bf690(&local_a8,&local_b8,&local_98);
    plVar2 = *(int64_t **)(this_ptr + 0xf8);
    plVar5 = plVar2;
    if (plVar2 == local_28) goto LAB_0021bf3e;
    plVar5 = local_28;
    if (local_20 == '\0') {
      if (local_28 == (int64_t *)0x0) {
        plVar5 = (int64_t *)0x0;
        goto LAB_0021bef3;
      }
      FUN_00d50b00();
      plVar2 = *(int64_t **)(this_ptr + 0xf8);
      *(int64_t **)(this_ptr + 0xf8) = local_28;
    }
    else {
      local_20 = '\0';
LAB_0021bef3:
      *(int64_t **)(this_ptr + 0xf8) = plVar5;
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar5 = local_28;
    }
LAB_0021bf3e:
    if ((local_20 != '\0') && (plVar5 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  FUN_00d50b00();
  local_118 = g_026f6d08;
  if (g_026f6d08 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_026f6d10;
  local_110 = '\x01';
  if (g_026f6d10 != 0) {
    FUN_00d50b00();
  }
  local_108 = lVar1;
  local_100 = '\x01';
  local_f8 = 0;
  local_f0 = '\0';
  FUN_000bf690(&local_108,&local_118,&local_f8);
  plVar2 = *(int64_t **)(this_ptr + 0x118);
  plVar5 = plVar2;
  if (plVar2 == local_28) goto LAB_0021bd25;
  plVar5 = local_28;
  if (local_20 == '\0') {
    if (local_28 == (int64_t *)0x0) {
      plVar5 = (int64_t *)0x0;
      goto LAB_0021bc0a;
    }
    FUN_00d50b00();
    plVar2 = *(int64_t **)(this_ptr + 0x118);
    *(int64_t **)(this_ptr + 0x118) = local_28;
  }
  else {
    local_20 = '\0';
LAB_0021bc0a:
    *(int64_t **)(this_ptr + 0x118) = plVar5;
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
    plVar5 = local_28;
  }
LAB_0021bd25:
  if ((local_20 != '\0') && (plVar5 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0021e5f0
// ============================================================
// Function: FUN_0021e5f0
// Address: 0021e5f0
// Size: 1295 bytes
// Class: MDScaleModeSequenceView

void FUN_0021e5f0(void)

{
  int iVar1;
  int64_t *plVar2;
  bool bVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *plVar6;
  char *pcVar7;
  int64_t *plVar8;
  int64_t this_ptr;
  uint32_t uVar9;
  uint7 uVar10;
  int64_t local_100;
  char local_f8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int local_50;
  uint32_t local_4c;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_00233e40();
  plVar6 = local_48;
  if (local_40[0] == '\0') {
    if (local_48 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_48 == (int64_t *)0x0) {
    return;
  }
  plVar2 = *(int64_t **)(this_ptr + 0x90);
  (**(code **)(&UNK_00001550 + *plVar2))();
  plVar8 = local_48;
  pcVar7 = local_38;
  if (local_40[0] != '\0') {
    pcVar7 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar7 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 == (int64_t *)0x0) {
    plVar8 = *(int64_t **)(this_ptr + 0x90);
  }
  else if (local_38[0] != '\0') goto LAB_0021e6af;
  FUN_00d50b00();
LAB_0021e6af:
  (**(code **)(*plVar8 + 0xe20))();
  iVar1 = *(int *)(local_100 + 0xc);
  if (local_f8 != '\0') {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  lVar4 = g_026f6f70;
  uVar10 = (uint7)(uint3)((uint)iVar1 >> 8);
  local_50 = iVar1;
  if ((*(char *)(this_ptr + 0x151) == '\0') ||
     ((iVar1 == 0 && (*(char *)(this_ptr + 0x150) == '\0')))) {
    if (g_026f6f70 != 0) {
      FUN_00d50b00();
    }
    lVar5 = g_026fe490;
    local_b0 = lVar4;
    local_a8 = '\x01';
    if (g_026fe490 != 0) {
      FUN_00d50b00();
    }
    local_a0 = lVar5;
    local_98 = '\x01';
    local_90 = 0;
    local_88 = '\0';
    FUN_00d31230(&local_90,&local_a0);
    plVar2 = local_48;
    if (local_48 == (int64_t *)0x0) {
      uVar9 = 0;
    }
    else if (local_40[0] == '\0') {
      FUN_00d50b00();
      uVar9 = (uint32_t)CONCAT71(uVar10,1);
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40[0] = '\0';
      uVar9 = (uint32_t)CONCAT71(uVar10,1);
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    lVar4 = g_026f6f90;
    local_4c = uVar9;
    if (g_026f6f90 != 0) {
      FUN_00d50b00();
    }
    local_80 = lVar4;
    local_78 = '\x01';
    FUN_01d51a40();
    plVar8 = local_48;
    if (local_48 == (int64_t *)0x0) {
      bVar3 = false;
    }
    else if (local_40[0] == '\0') {
      FUN_00d50b00();
      bVar3 = true;
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40[0] = '\0';
      bVar3 = true;
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (g_026f6f70 != 0) {
      FUN_00d50b00();
    }
    lVar5 = g_026f6f78;
    if (g_026f6f78 != 0) {
      FUN_00d50b00();
    }
    local_e0 = lVar5;
    local_d8 = '\x01';
    local_d0 = 0;
    local_c8 = '\0';
    FUN_00d31230(&local_d0,&local_e0);
    plVar2 = local_48;
    if (local_48 == (int64_t *)0x0) {
      uVar9 = 0;
    }
    else if (local_40[0] == '\0') {
      FUN_00d50b00();
      uVar9 = (uint32_t)CONCAT71(uVar10,1);
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40[0] = '\0';
      uVar9 = (uint32_t)CONCAT71(uVar10,1);
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = g_026f6f80;
    local_4c = uVar9;
    if (g_026f6f80 != 0) {
      FUN_00d50b00();
    }
    local_c0 = lVar4;
    local_b8 = '\x01';
    FUN_01d51a40();
    plVar8 = local_48;
    if (local_48 == (int64_t *)0x0) {
      bVar3 = false;
    }
    else if (local_40[0] == '\0') {
      FUN_00d50b00();
      bVar3 = true;
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40[0] = '\0';
      bVar3 = true;
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*plVar6 + 0x918))();
  local_68 = '\0';
  local_70 = plVar2;
  (**(code **)(*plVar6 + 0x6a8))();
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_58 = '\0';
  local_60 = plVar8;
  FUN_01cef3b0();
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_4c != '\0') && (plVar2 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (plVar8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 0021eea0
// ============================================================
// Function: FUN_0021eea0
// Address: 0021eea0
// Size: 640 bytes
// Class: MDScaleModeSequenceView

void FUN_0021eea0(uint32_t param_1)

{
  int iVar1;
  int64_t *plVar2;
  char cVar3;
  char *pcVar4;
  int64_t *plVar5;
  int64_t this_ptr;
  uint32_t uVar6;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  plVar2 = *(int64_t **)(this_ptr + 0x90);
  (**(code **)(&UNK_00001550 + *plVar2))();
  plVar5 = local_48;
  local_38[0] = local_40[0];
  pcVar4 = local_38;
  if (local_40[0] != '\0') {
    pcVar4 = local_40;
  }
  *pcVar4 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 == (int64_t *)0x0) {
    plVar5 = *(int64_t **)(this_ptr + 0x90);
LAB_0021ef12:
    FUN_00d50b00();
  }
  else if (local_38[0] == '\0') goto LAB_0021ef12;
  (**(code **)(*plVar5 + 0xe20))();
  iVar1 = *(int *)(CONCAT71(uStack_57,local_58) + 0xc);
  if (local_50 != '\0') {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (*(char *)(this_ptr + 0x150) != '\0') {
    return;
  }
  if (*(char *)(this_ptr + 0x151) == '\0') {
    return;
  }
  if (iVar1 != 0) {
    return;
  }
  if (*(int64_t **)(this_ptr + 0x90) != (int64_t *)0x0) {
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    plVar2 = local_48;
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (int64_t *)0x0) {
      if (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0) {
        return;
      }
      (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
      plVar2 = local_48;
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 == (int64_t *)0x0) {
        return;
      }
      plVar2 = *(int64_t **)(this_ptr + 0x90);
      if (plVar2 == (int64_t *)0x0) {
LAB_0021f054:
        plVar5 = (int64_t *)0x0;
      }
      else {
        (**(code **)(&UNK_00001550 + *plVar2))();
        plVar5 = local_48;
        local_58 = local_40[0];
        pcVar4 = local_40;
        if (local_40[0] == '\0') {
          pcVar4 = &local_58;
        }
        *pcVar4 = '\0';
        if ((local_40[0] != '\0') && (plVar5 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar5 == (int64_t *)0x0) {
          plVar5 = *(int64_t **)(this_ptr + 0x90);
          if (plVar5 == (int64_t *)0x0) goto LAB_0021f054;
        }
        else if (local_58 != '\0') goto LAB_0021f057;
        FUN_00d50b00();
      }
LAB_0021f057:
      cVar3 = FUN_01e42170();
      if ((plVar2 != (int64_t *)0x0) && (plVar5 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        return;
      }
    }
  }
  plVar2 = *(int64_t **)(this_ptr + 0x90);
  if (plVar2 == (int64_t *)0x0) {
LAB_0021f0e5:
    plVar5 = (int64_t *)0x0;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar2))();
    pcVar4 = local_40;
    if (local_40[0] == '\0') {
      pcVar4 = &local_58;
    }
    local_58 = local_40[0];
    *pcVar4 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_48 == (int64_t *)0x0) {
      plVar5 = *(int64_t **)(this_ptr + 0x90);
      if (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0) goto LAB_0021f0e5;
    }
    else {
      plVar5 = local_48;
      if (local_58 != '\0') goto LAB_0021f0e8;
    }
    FUN_00d50b00();
  }
LAB_0021f0e8:
  uVar6 = (**(code **)(**(int64_t **)(this_ptr + 0xc0) + 0x3b0))();
  (**(code **)(*plVar5 + 0xa90))(uVar6,param_1);
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0021b390
// ============================================================
// Function: FUN_0021b390
// Address: 0021b390
// Size: 631 bytes
// Class: MDScaleModeSequenceView
// String references:
//   "MDScaleModeSequenceView"

void FUN_0021b390(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_278;
  int64_t local_268;
  
  if ((g_026f8a48 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_026f8998 = FUN_00271e80();
    g_026f8980 = "MDScaleModeSequenceView";
    g_026f8988 = 0x220;
    g_026f8990 = FUN_00274760;
    g_026f89a0 = 0;
    ram_00000000026f89a8 = 0;
    g_026f89b0 = 0;
    ram_00000000026f89b8 = 0;
    g_026f89c0 = 0;
    ram_00000000026f89c8 = 0;
    g_026f89d0 = 0;
    ram_00000000026f89d8 = 0;
    g_026f89e0 = 0;
    ram_00000000026f89e8 = 0;
    g_026f89f0 = 0;
    ram_00000000026f89f8 = 0;
    g_026f8a00 = 0;
    ram_00000000026f8a08 = 0;
    g_026f8a10 = 0;
    ram_00000000026f8a18 = 0;
    g_026f8a20 = 0;
    ram_00000000026f8a28 = 0;
    g_026f8a30 = 0;
    _ram_00000000026f8a38 = 0;
    g_026f8a40 = 0;
    ___cxa_guard_release();
  }
  if (g_026f8a3b == '\0') {
    FUN_0021ac40();
    FUN_00e87760();
    FUN_0010c6d0();
    FUN_00d50c00();
    FUN_002720c0();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_268 != 0) {
      FUN_00d50b20();
    }
    if (local_278 != 0) {
      FUN_00d50b20();
    }
    FUN_00271780();
    FUN_00271780();
  }
  return;
}

