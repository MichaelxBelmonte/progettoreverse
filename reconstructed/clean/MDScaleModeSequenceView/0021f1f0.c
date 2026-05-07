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

