// Function: FUN_0136e4c0
// Address: 0136e4c0
// Size: 7521 bytes
// Class: Unknown

void* FUN_0136e4c0(int64_t *param_1,int64_t *param_2,uint32_t param_3)

{
  char cVar1;
  int iVar2;
  void*puVar3;
  void *pvVar4;
  void*puVar5;
  int64_t *plVar6;
  void*puVar7;
  int64_t lVar8;
  uint64_t uVar9;
  undefined7 uVar10;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  void* pVar11;
  int64_t *plVar12;
  void*puVar13;
  void*puVar14;
  int64_t lVar15;
  void*puVar16;
  uint64_t uVar17;
  void*puVar18;
  int64_t arg1;
  void*this_ptr;
  uint uVar19;
  void*unaff_R12;
  void*unaff_R13;
  uint uVar20;
  bool bVar21;
  void*local_1d0;
  uint8_t local_1c8;
  void*local_1c0;
  uint8_t local_1b8;
  void*local_1b0;
  uint8_t local_1a8;
  void*local_1a0;
  uint8_t local_198;
  uint8_t local_178 [4];
  int iStack_174;
  void*local_170;
  code *local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  void*local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t *local_120;
  int64_t local_118;
  char local_110;
  uint64_t local_108;
  void*local_100;
  uint64_t local_f8;
  void*local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  uint64_t local_d0;
  int local_c8;
  void*local_c0;
  void*local_b8;
  void*local_b0;
  void*local_98;
  void*local_90;
  void*local_88;
  char local_80 [8];
  void*local_78;
  uint64_t local_70;
  int local_68;
  void*local_60;
  void*local_58;
  void*local_50;
  uint32_t local_48;
  uint local_3c;
  void*local_38;
  
  local_150 = *param_2;
  local_148 = '\0';
  local_120 = param_1;
  local_48 = param_3;
  FUN_0147ce20();
  local_c0 = local_88;
  if (local_80[0] == '\0') {
    if (((local_88 != (void*)0x0) && (FUN_00d50b00(), local_80[0] != '\0')) &&
       (local_88 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_80[0] = '\0';
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar11 = 0x2572358;
  local_170 = &g_02572358;
  *puVar3 = &g_02572358;
  local_168 = g_02572370;
  (*g_02572370)();
  local_b8 = puVar3;
  if ((*local_120 == 0) || (*(int *)(*local_120 + 0xc) == 0)) {
    local_f8 = 0;
    local_b0 = (void*)0x0;
  }
  else {
    pvVar4 = _pthread_getspecific(pVar11);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01266fe0();
    local_b0 = local_88;
    if (local_88 == (void*)0x0) {
      local_b0 = (void*)0x0;
      local_f8 = 0;
    }
    else {
      local_f8 = CONCAT71((int7)((uint64_t)local_88 >> 8),1);
      if (((local_80[0] == '\0') && (FUN_00d50b00(), local_80[0] != '\0')) &&
         (local_88 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_025683c0;
  (*g_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  local_f0 = puVar3;
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = local_170;
  (*local_168)();
  local_100 = puVar3;
  if (*(int *)((int64_t)local_c0 + 0xc) == 0) {
    local_98 = (void*)0x0;
    local_60 = (void*)0x0;
    local_3c = 0;
    local_38 = (void*)0x0;
    local_90 = (void*)0x0;
    local_50 = (void*)0x0;
    local_108 = 0;
  }
  else {
    local_108 = 0;
    local_50 = (void*)0x0;
    puVar16 = (void*)0x0;
    local_38 = (void*)0x0;
    local_58 = (void*)((uint64_t)local_58 & 0xffffffff00000000);
    local_60 = (void*)0x0;
    local_98 = (void*)0x0;
    puVar3 = this_ptr;
    do {
      puVar13 = local_88;
      puVar5 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar5 = local_170;
      (*local_168)();
      FUN_00d23310();
      local_e8 = CONCAT71(local_e8._1_7_,local_80[0]);
      plVar12 = &local_e8;
      plVar6 = (int64_t *)local_80;
      if (local_80[0] == '\0') {
        plVar6 = plVar12;
      }
      *(char *)plVar6 = '\0';
      if ((local_80[0] != '\0') && (local_88 != (void*)0x0)) {
        plVar6 = (int64_t *)FUN_00d50b20();
      }
      cVar1 = (char)puVar16;
      if (local_88 == local_50) {
        if ((cVar1 == '\0') && (local_88 != (void*)0x0)) {
          local_90 = (void*)CONCAT71((int7)((uint64_t)plVar12 >> 8),1);
          puVar18 = local_50;
          if ((char)local_e8 == '\0') {
            FUN_00d50b00();
            puVar18 = local_50;
          }
        }
        else {
          puVar18 = local_50;
          local_90 = puVar16;
          if (((char)local_e8 != '\0') && (puVar18 = local_50, local_88 != (void*)0x0)) {
            FUN_00d50b20();
            puVar18 = local_50;
          }
        }
      }
      else {
        puVar18 = local_88;
        if ((char)local_e8 == '\0') {
          if (local_88 != (void*)0x0) {
            plVar6 = (int64_t *)FUN_00d50b00();
          }
          local_90 = (void*)CONCAT71((int7)((uint64_t)plVar6 >> 8),1);
          if ((cVar1 != '\0') && (local_50 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_90 = (void*)CONCAT71((int7)((uint64_t)plVar6 >> 8),1);
          if ((cVar1 != '\0') && (local_50 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      local_80[0] = '\0';
      local_50 = puVar18;
      FUN_00d23f50();
      if ((local_80[0] != '\0') && (puVar18 != (void*)0x0)) {
        FUN_00d50b20();
      }
      puVar18 = local_50;
      local_88 = local_50;
      local_80[0] = '\0';
      FUN_00d21140();
      if ((local_80[0] != '\0') && (puVar18 != (void*)0x0)) {
        FUN_00d50b20();
      }
      puVar7 = local_38;
      puVar18 = local_50;
      if (local_38 == local_50) {
        if (((char)local_90 == '\0') || ((char)local_58 != '\0')) {
          uVar17 = (uint64_t)local_58 & 0xffffffff;
        }
        else {
          puVar16 = puVar7;
          if (local_38 == (void*)0x0) {
            uVar17 = (uint64_t)local_58 & 0xffffffff;
          }
          else {
            uVar17 = CONCAT71((int7)((uint64_t)puVar13 >> 8),1);
            local_58 = (void*)((uint64_t)local_58 & 0xffffffff00000000);
            FUN_00d50b00();
            puVar3 = puVar7;
          }
        }
      }
      else {
        if (((char)local_90 != '\0') && (local_50 != (void*)0x0)) {
          FUN_00d50b00();
          puVar3 = puVar18;
        }
        puVar7 = local_50;
        uVar17 = (uint64_t)local_90 & 0xffffffff;
        if (((char)local_58 != '\0') &&
           (uVar17 = (uint64_t)local_90 & 0xffffffff, local_38 != (void*)0x0)) {
          local_38 = local_50;
          FUN_00d50b20();
          uVar17 = (uint64_t)local_90 & 0xffffffff;
          puVar3 = puVar7;
          puVar16 = puVar7;
        }
      }
      puVar13 = (void*)(uVar17 & 0xffffffff);
      local_58 = (void*)CONCAT44(local_58._4_4_,(int)uVar17);
      local_38 = puVar7;
LAB_0136e9ca:
      pvVar4 = _pthread_getspecific((void*)puVar13);
      if ((pvVar4 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        puVar13 = local_38;
      }
      FUN_013e5de0();
      puVar18 = local_60;
      uVar10 = (undefined7)((uint64_t)puVar16 >> 8);
      if (local_88 == local_60) {
        if (((char)local_98 == '\0') && (local_88 != (void*)0x0)) {
          puVar16 = (void*)CONCAT71(uVar10,1);
          if (local_80[0] != '\0') goto LAB_0136ead4;
          local_98 = (void*)CONCAT71(uVar10,1);
          FUN_00d50b00();
        }
LAB_0136eac0:
        puVar16 = local_98;
        if ((local_80[0] != '\0') && (local_88 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_80[0] == '\0') {
          if (local_88 != (void*)0x0) {
            FUN_00d50b00();
          }
          puVar16 = (void*)CONCAT71(uVar10,1);
          bVar21 = (char)local_98 != '\0';
          puVar18 = local_88;
          local_98 = puVar16;
          if ((bVar21) && (local_60 != (void*)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_0136eac0;
        }
        puVar16 = (void*)CONCAT71(uVar10,1);
        puVar18 = local_88;
        if (((char)local_98 != '\0') && (local_60 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_0136ead4:
      if (puVar18 != (void*)0x0) {
LAB_0136ed39:
        local_98 = (void*)((uint64_t)puVar16 & 0xffffffff);
        local_80[0] = '\0';
        local_60 = puVar18;
        cVar1 = FUN_00d23d70();
        if ((local_80[0] != '\0') && (puVar18 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_88 = local_38;
        puVar7 = local_60;
        if (cVar1 == '\0') goto LAB_0136ee90;
        if (local_38 == local_60) {
          if (((char)local_98 == '\0') || ((char)local_58 != '\0')) {
            puVar3 = (void*)((uint64_t)local_58 & 0xffffffff);
          }
          else {
            puVar3 = (void*)CONCAT71((int7)((uint64_t)puVar3 >> 8),1);
            local_58 = (void*)((uint64_t)local_58 & 0xffffffff00000000);
            FUN_00d50b00();
            unaff_R12 = local_88;
            puVar16 = local_98;
          }
        }
        else {
          if ((char)local_98 != '\0') {
            FUN_00d50b00();
            unaff_R12 = puVar7;
            puVar16 = local_98;
          }
          local_88 = local_60;
          unaff_R13 = local_98;
          puVar3 = local_98;
          if (((char)local_58 != '\0') && (local_38 != (void*)0x0)) {
            local_38 = local_60;
            FUN_00d50b20();
            unaff_R12 = local_88;
            puVar16 = local_98;
          }
        }
        local_80[0] = '\0';
        FUN_00d23f50();
        if ((local_80[0] != '\0') && (local_88 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_80[0] = '\0';
        FUN_00d23370();
        if ((local_80[0] != '\0') && (local_88 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_58 = (void*)CONCAT44(local_58._4_4_,(int)puVar3);
        local_38 = local_88;
        goto LAB_0136e9ca;
      }
      if (((((char)local_48 == '\0') && (*(int64_t *)(arg1 + 0x1f8) == 0)) &&
          (*(int64_t *)(arg1 + 0x200) == 0)) && (*(int64_t *)(arg1 + 0x148) != 0)) {
        pvVar4 = _pthread_getspecific((void*)puVar13);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        unaff_R12 = (void*)0x0;
        iVar2 = FUN_0141bab0();
        puVar18 = unaff_R13;
        if (iVar2 != 3) goto LAB_0136eb90;
      }
      else {
LAB_0136eb90:
        pvVar4 = _pthread_getspecific((void*)puVar13);
        if ((pvVar4 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          puVar13 = local_38;
        }
        FUN_013de560();
        if (((local_80[0] == '\0') && (local_88 != (void*)0x0)) &&
           ((FUN_00d50b00(), local_80[0] != '\0' && (local_88 != (void*)0x0)))) {
          FUN_00d50b20();
        }
        pvVar4 = _pthread_getspecific((void*)puVar13);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014d19a0();
        if (local_80[0] == '\0') {
          if (local_88 == (void*)0x0) goto LAB_0136ed00;
          FUN_00d50b00();
          if ((local_80[0] != '\0') && (local_88 != (void*)0x0)) {
            FUN_00d50b20();
          }
LAB_0136ec90:
          pvVar4 = _pthread_getspecific((void*)puVar13);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014d1d00();
          if (local_88 == (void*)0x0) {
            puVar18 = (void*)0x0;
            unaff_R12 = (void*)((uint64_t)puVar16 & 0xffffffff);
          }
          else {
            unaff_R12 = (void*)CONCAT71((int7)((uint64_t)unaff_R12 >> 8),1);
            puVar18 = local_88;
            if (((local_80[0] == '\0') && (FUN_00d50b00(), local_80[0] != '\0')) &&
               (local_88 != (void*)0x0)) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
          puVar16 = (void*)((uint64_t)unaff_R12 & 0xffffffff);
        }
        else {
          if (local_88 != (void*)0x0) goto LAB_0136ec90;
LAB_0136ed00:
          puVar18 = (void*)0x0;
        }
        if (local_88 != (void*)0x0) {
          FUN_00d50b20();
        }
        unaff_R13 = puVar18;
        puVar3 = local_88;
        if (puVar18 != (void*)0x0) goto LAB_0136ed39;
      }
      local_98 = (void*)((uint64_t)puVar16 & 0xffffffff);
      local_60 = (void*)0x0;
      unaff_R13 = puVar18;
      puVar18 = local_88;
LAB_0136ee90:
      local_88 = puVar18;
      puVar18 = local_50;
      if (local_38 == local_50) {
        if (((char)local_90 == '\0') || ((char)local_58 != '\0')) {
          local_3c = (uint)local_58;
        }
        else {
          local_3c = (uint)local_58;
          if (local_50 != (void*)0x0) {
            local_3c = (uint)CONCAT71((uint7)(uint3)((uint64_t)local_58 >> 8),1);
            local_58 = (void*)((uint64_t)local_58 & 0xffffffff00000000);
            local_38 = local_50;
            FUN_00d50b00();
            puVar3 = puVar18;
          }
        }
      }
      else {
        if (((char)local_90 != '\0') && (local_50 != (void*)0x0)) {
          FUN_00d50b00();
          puVar3 = puVar18;
        }
        puVar18 = local_50;
        uVar19 = (uint)local_90;
        local_3c = uVar19;
        if (((char)local_58 != '\0') && (local_38 != (void*)0x0)) {
          local_38 = local_50;
          FUN_00d50b20();
          puVar3 = puVar18;
          local_3c = uVar19;
        }
      }
      local_38 = local_50;
LAB_0136ef5a:
      pvVar4 = _pthread_getspecific((void*)puVar13);
      if ((pvVar4 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        puVar13 = local_38;
      }
      FUN_013e61a0();
      puVar18 = local_60;
      uVar10 = (undefined7)((uint64_t)puVar16 >> 8);
      if (local_88 == local_60) {
        if (((char)local_98 == '\0') && (local_88 != (void*)0x0)) {
          puVar16 = (void*)CONCAT71(uVar10,1);
          if (local_80[0] != '\0') goto LAB_0136f064;
          local_98 = (void*)CONCAT71(uVar10,1);
          FUN_00d50b00();
        }
LAB_0136f050:
        puVar16 = local_98;
        if ((local_80[0] != '\0') && (local_88 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_80[0] == '\0') {
          if (local_88 != (void*)0x0) {
            FUN_00d50b00();
          }
          puVar16 = (void*)CONCAT71(uVar10,1);
          bVar21 = (char)local_98 != '\0';
          puVar18 = local_88;
          local_98 = puVar16;
          if ((bVar21) && (local_60 != (void*)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_0136f050;
        }
        puVar16 = (void*)CONCAT71(uVar10,1);
        puVar18 = local_88;
        if (((char)local_98 != '\0') && (local_60 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_0136f064:
      if (puVar18 != (void*)0x0) {
LAB_0136f2aa:
        local_98 = (void*)((uint64_t)puVar16 & 0xffffffff);
        local_80[0] = '\0';
        local_60 = puVar18;
        cVar1 = FUN_00d23d70();
        if ((local_80[0] != '\0') && (puVar18 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_88 = local_38;
        puVar7 = local_60;
        if (cVar1 == '\0') goto LAB_0136f410;
        if (local_38 == local_60) {
          if (((char)local_98 == '\0') || ((char)local_3c != '\0')) {
            unaff_R13 = (void*)(uint64_t)local_3c;
          }
          else {
            unaff_R13 = (void*)CONCAT71((int7)((uint64_t)unaff_R13 >> 8),1);
            local_3c = 0;
            FUN_00d50b00();
            puVar3 = local_88;
            puVar16 = local_98;
          }
        }
        else {
          if ((char)local_98 != '\0') {
            FUN_00d50b00();
            puVar3 = puVar7;
            puVar16 = local_98;
          }
          local_88 = local_60;
          unaff_R12 = local_98;
          unaff_R13 = local_98;
          if (((char)local_3c != '\0') && (local_38 != (void*)0x0)) {
            local_38 = local_60;
            FUN_00d50b20();
            puVar3 = local_88;
            puVar16 = local_98;
          }
        }
        local_80[0] = '\0';
        FUN_00d23f50();
        if ((local_80[0] != '\0') && (local_88 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_80[0] = '\0';
        FUN_00d21140();
        if ((local_80[0] != '\0') && (local_88 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_3c = (uint)unaff_R13;
        local_38 = local_88;
        goto LAB_0136ef5a;
      }
      if (((((char)local_48 == '\0') && (*(int64_t *)(arg1 + 0x1f8) == 0)) &&
          (*(int64_t *)(arg1 + 0x200) == 0)) && (*(int64_t *)(arg1 + 0x148) != 0)) {
        pvVar4 = _pthread_getspecific((void*)puVar13);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar2 = FUN_0141bab0();
        puVar3 = (void*)0x0;
        if (iVar2 != 3) goto LAB_0136f110;
      }
      else {
LAB_0136f110:
        pvVar4 = _pthread_getspecific((void*)puVar13);
        if ((pvVar4 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          puVar13 = local_38;
        }
        FUN_013de560();
        if (((local_80[0] == '\0') && (local_88 != (void*)0x0)) &&
           ((FUN_00d50b00(), local_80[0] != '\0' && (local_88 != (void*)0x0)))) {
          FUN_00d50b20();
        }
        pvVar4 = _pthread_getspecific((void*)puVar13);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014d1b50();
        if (local_80[0] == '\0') {
          if (local_88 == (void*)0x0) goto LAB_0136f280;
          FUN_00d50b00();
          if ((local_80[0] != '\0') && (local_88 != (void*)0x0)) {
            FUN_00d50b20();
          }
LAB_0136f210:
          pvVar4 = _pthread_getspecific((void*)puVar13);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014d1d00();
          if (local_88 == (void*)0x0) {
            puVar18 = (void*)0x0;
            unaff_R12 = (void*)((uint64_t)puVar16 & 0xffffffff);
          }
          else {
            unaff_R12 = (void*)CONCAT71((int7)((uint64_t)unaff_R12 >> 8),1);
            puVar18 = local_88;
            if (((local_80[0] == '\0') && (FUN_00d50b00(), local_80[0] != '\0')) &&
               (local_88 != (void*)0x0)) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
          puVar16 = (void*)((uint64_t)unaff_R12 & 0xffffffff);
        }
        else {
          if (local_88 != (void*)0x0) goto LAB_0136f210;
LAB_0136f280:
          puVar18 = (void*)0x0;
        }
        if (local_88 != (void*)0x0) {
          FUN_00d50b20();
        }
        unaff_R13 = local_88;
        puVar3 = local_88;
        if (puVar18 != (void*)0x0) goto LAB_0136f2aa;
      }
      local_98 = (void*)((uint64_t)puVar16 & 0xffffffff);
      local_60 = (void*)0x0;
      puVar18 = local_88;
LAB_0136f410:
      local_88 = puVar18;
      puVar13 = local_38;
      puVar16 = local_50;
      iVar2 = *(int *)((int64_t)puVar5 + 0xc);
      if (iVar2 < 2) {
        local_88 = local_50;
        local_80[0] = '\0';
        FUN_00d21140();
        if ((local_80[0] != '\0') && (puVar16 != (void*)0x0)) {
          FUN_00d50b20();
        }
LAB_0136e707:
        FUN_00d50b20();
      }
      else {
        puVar16 = *(void**)(puVar5[2] + (uint64_t)(iVar2 - 1) * 8);
        uVar10 = (undefined7)((uint64_t)puVar3 >> 8);
        if (local_38 == puVar16) {
          uVar19 = local_3c;
          if (((char)local_3c == '\0') && (local_38 != (void*)0x0)) {
            local_3c = 0;
            FUN_00d50b00();
            uVar19 = (uint)CONCAT71(uVar10,1);
          }
        }
        else {
          if (puVar16 != (void*)0x0) {
            FUN_00d50b00();
          }
          uVar19 = (uint)CONCAT71(uVar10,1);
          puVar13 = puVar16;
          if (((char)local_3c != '\0') && (local_38 != (void*)0x0)) {
            local_38 = puVar16;
            FUN_00d50b20();
          }
        }
        unaff_R12 = (void*)((uint64_t)(iVar2 - 1) + 1);
        uVar20 = iVar2 - 2;
        local_3c = uVar19;
        do {
          local_58 = (void*)CONCAT44(local_58._4_4_,local_3c);
          lVar8 = puVar5[2];
          puVar3 = *(void**)(lVar8 + (uint64_t)uVar20 * 8);
          pVar11 = uVar20;
          if (local_50 == puVar3) {
            if (((char)local_90 == '\0') && (local_50 != (void*)0x0)) {
              local_90 = (void*)CONCAT71((int7)((uint64_t)lVar8 >> 8),1);
              FUN_00d50b00();
            }
          }
          else {
            if (puVar3 != (void*)0x0) {
              lVar8 = FUN_00d50b00();
            }
            if (((char)local_90 == '\0') || (local_50 == (void*)0x0)) {
              local_90 = (void*)CONCAT71((int7)((uint64_t)lVar8 >> 8),1);
              local_50 = puVar3;
            }
            else {
              local_50 = puVar3;
              uVar9 = FUN_00d50b20();
              local_90 = (void*)CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
            }
          }
          pvVar4 = _pthread_getspecific(pVar11);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013e61a0();
          if ((local_80[0] != '\0') && (local_88 != (void*)0x0)) {
            FUN_00d50b20();
          }
          local_108 = local_108 & 0xff;
          if (local_88 != puVar13) {
            local_108 = 1;
          }
          local_1c8 = 0;
          puVar14 = local_178;
          local_1d0 = puVar13;
          uVar9 = FUN_0136bb10(puVar14,&local_1d0,(char)local_48,
                               unaff_R12 == (void*)((int64_t)&MACH_HEADER.magic + 2));
          pVar11 = (void*)CONCAT71((int7)((uint64_t)puVar14 >> 8),0 < iStack_174);
          uVar10 = (undefined7)((uint64_t)uVar9 >> 8);
          if (((byte)uVar9 & 0 < iStack_174) == 1) {
            local_140 = local_f0;
            local_138 = '\0';
            FUN_015b4ee0();
            if ((local_138 != '\0') && (local_140 != (void*)0x0)) {
              FUN_00d50b20();
            }
            local_80[0] = '\0';
            FUN_00d235a0();
            uVar10 = extraout_var;
            local_88 = puVar13;
            if ((local_80[0] != '\0') && (puVar13 != (void*)0x0)) {
              FUN_00d50b20();
              uVar10 = extraout_var_00;
            }
          }
          puVar16 = local_50;
          puVar3 = puVar13;
          if (puVar13 == local_50) {
            if ((((char)local_90 == '\0') || ((char)local_58 != '\0')) ||
               (puVar13 == (void*)0x0)) {
              local_3c = (uint)local_58;
              local_38 = puVar13;
            }
            else {
              local_3c = (uint)CONCAT71(uVar10,1);
              local_58 = (void*)((uint64_t)local_58 & 0xffffffff00000000);
              FUN_00d50b00();
              local_38 = puVar13;
            }
          }
          else {
            if (((char)local_90 != '\0') && (local_50 != (void*)0x0)) {
              FUN_00d50b00();
            }
            uVar19 = (uint)local_90;
            local_3c = uVar19;
            local_38 = puVar16;
            if (((char)local_58 != '\0') && (local_38 = puVar16, puVar13 != (void*)0x0)) {
              FUN_00d50b20();
              local_38 = puVar16;
              puVar3 = puVar16;
              local_3c = uVar19;
            }
          }
          puVar16 = local_50;
          unaff_R12 = (void*)((int64_t)unaff_R12 + -1);
          uVar20 = uVar20 - 1;
          puVar13 = local_38;
        } while (1 < (int64_t)unaff_R12);
        local_80[0] = '\0';
        FUN_00d21140();
        if ((local_80[0] != '\0') && (puVar16 != (void*)0x0)) {
          FUN_00d50b20();
        }
        unaff_R13 = local_50;
        local_88 = local_50;
        local_80[0] = '\0';
        FUN_00d235a0();
        if ((local_80[0] != '\0') && (unaff_R13 != (void*)0x0)) {
          FUN_00d50b20();
        }
        pvVar4 = _pthread_getspecific(pVar11);
        if ((pvVar4 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          pVar11 = (void*)local_50;
        }
        FUN_013de560();
        if ((((local_80[0] == '\0') && (unaff_R13 != (void*)0x0)) &&
            (FUN_00d50b00(), local_80[0] != '\0')) && (unaff_R13 != (void*)0x0)) {
          FUN_00d50b20();
        }
        pvVar4 = _pthread_getspecific(pVar11);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc420();
        if (local_80[0] == '\0') {
          if (unaff_R13 != (void*)0x0) {
            local_58 = unaff_R13;
            FUN_00d50b00();
            if ((local_80[0] != '\0') && (unaff_R13 != (void*)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_0136f930;
          }
        }
        else {
          local_58 = unaff_R13;
          if (unaff_R13 != (void*)0x0) {
LAB_0136f930:
            pvVar4 = _pthread_getspecific(pVar11);
            if ((pvVar4 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              pVar11 = (void*)local_50;
            }
            FUN_013dfcb0();
            pvVar4 = _pthread_getspecific(pVar11);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dd790();
            if (local_80[0] == '\0') {
              if (((unaff_R13 != (void*)0x0) && (FUN_00d50b00(), local_80[0] != '\0')) &&
                 (unaff_R13 != (void*)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_80[0] = '\0';
            }
            if ((local_e0 != '\0') && (local_e8 != 0)) {
              FUN_00d50b20();
            }
            if (unaff_R13 != (void*)0x0) {
              local_80[0] = '\0';
              local_88 = (void*)0x0;
              local_78 = unaff_R13;
              local_70 = 0xffffffff;
              local_68 = 0;
              local_70._4_4_ = 0;
              puVar3 = (void*)0x0;
              while( true ) {
                if (local_70._4_4_ != 0) {
                  if (local_70._4_4_ < 1) {
                    iVar2 = -local_70._4_4_;
                  }
                  else {
                    iVar2 = (int)local_70 - local_70._4_4_;
                    local_70 = CONCAT44(local_70._4_4_,iVar2);
                    FUN_00d23690();
                    local_68 = local_68 + local_70._4_4_;
                    iVar2 = 0;
                  }
                  local_70 = CONCAT44(iVar2,(int)local_70);
                }
                lVar8 = (int64_t)(int)local_70;
                iVar2 = (int)local_70 + 1;
                local_70 = CONCAT44(local_70._4_4_,iVar2);
                if (*(int *)((int64_t)local_78 + 0xc) <= iVar2) break;
                lVar15 = local_78[2];
                local_88 = *(void**)(lVar15 + 8 + lVar8 * 8);
                pvVar4 = _pthread_getspecific((void*)lVar15);
                pVar11 = (void*)lVar15;
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_011ef8d0();
                lVar8 = local_e8;
                if ((((local_e0 == '\0') && (local_e8 != 0)) && (FUN_00d50b00(), local_e0 != '\0'))
                   && (local_e8 != 0)) {
                  FUN_00d50b20();
                }
                pvVar4 = _pthread_getspecific(pVar11);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                cVar1 = FUN_012686d0();
                uVar19 = 1;
                if (cVar1 == '\0') {
                  uVar19 = (uint)puVar3;
                }
                if (lVar8 != 0) {
                  FUN_00d50b20();
                }
                puVar3 = (void*)(uint64_t)uVar19;
              }
              puVar16 = local_78;
              FUN_0015edf0();
              if (puVar3 != (void*)0x0) {
                local_1c0 = local_50;
                local_1b8 = 0;
                pvVar4 = _pthread_getspecific((void*)puVar16);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_013e61a0();
                if (local_80[0] == '\0') {
                  if (local_88 != (void*)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_80[0] = '\0';
                }
                FUN_013710d0();
                if (local_88 != (void*)0x0) {
                  FUN_00d50b20();
                }
                if ((local_80[0] != '\0') && (local_88 != (void*)0x0)) {
                  FUN_00d50b20();
                }
              }
              FUN_00d50b20();
            }
            FUN_00d50b20();
            unaff_R12 = unaff_R13;
          }
        }
        if (unaff_R13 != (void*)0x0) {
          FUN_00d50b20();
        }
        if (puVar5 != (void*)0x0) goto LAB_0136e707;
      }
      puVar16 = (void*)((uint64_t)local_90 & 0xffffffff);
      local_58 = (void*)CONCAT44(local_58._4_4_,local_3c);
    } while (*(int *)((int64_t)local_c0 + 0xc) != 0);
  }
  puVar3 = (void*)((uint64_t)local_90 & 0xffffffff);
  if (((*(int64_t *)(arg1 + 0x1f8) == 0) && (*(int64_t *)(arg1 + 0x200) == 0)) &&
     (*(int64_t *)(arg1 + 0x148) != 0)) {
    pvVar4 = _pthread_getspecific((void*)local_90);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar2 = FUN_0141bab0();
    if (iVar2 != 3) goto LAB_0136fd2f;
  }
  else {
LAB_0136fd2f:
    cVar1 = FUN_01334f30();
    if (cVar1 == '\0') goto LAB_0136fd91;
  }
  if (0xe < *(int *)(local_f0 + 3) + 7U) {
    if (((*(int64_t *)(arg1 + 0x1f8) == 0) && (*(int64_t *)(arg1 + 0x200) == 0)) &&
       (*(int64_t *)(arg1 + 0x148) != 0)) {
      pvVar4 = _pthread_getspecific((void*)local_90);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar2 = FUN_0141bab0();
      if (iVar2 == 3) {
        if ((local_108 & 1) == 0) {
          if (0 < *(int *)((int64_t)local_b8 + 0xc)) {
            lVar8 = 0;
            local_58 = puVar3;
            do {
              pvVar4 = _pthread_getspecific((void*)local_90);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_013de560();
              if ((((local_80[0] == '\0') && (local_88 != (void*)0x0)) &&
                  (FUN_00d50b00(), local_80[0] != '\0')) && (local_88 != (void*)0x0)) {
                FUN_00d50b20();
              }
              pvVar4 = _pthread_getspecific((void*)local_90);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_110 = 0;
              FUN_00d50b00();
              local_110 = '\x01';
              local_118 = arg1;
              FUN_014d0690();
              puVar3 = local_58;
              if ((local_110 != '\0') && (local_118 != 0)) {
                FUN_00d50b20();
              }
              if (local_88 != (void*)0x0) {
                FUN_00d50b20();
              }
              lVar8 = lVar8 + 1;
            } while (lVar8 < *(int *)((int64_t)local_b8 + 0xc));
          }
        }
        else {
          local_1b0 = local_f0;
          local_1a8 = 0;
          FUN_01353f80();
        }
        goto LAB_0136fd91;
      }
    }
    local_1a0 = local_f0;
    local_198 = 0;
    FUN_01353f80();
  }
LAB_0136fd91:
  if (((*local_120 != 0) && (local_b0 != (void*)0x0)) &&
     (FUN_00d216c0(), local_b8 != (void*)0x0)) {
    local_80[0] = '\0';
    local_78 = local_b8;
    local_68 = 0;
    local_70 = 0;
    if (0 < *(int *)((int64_t)local_b8 + 0xc)) {
      uVar19 = 0;
      do {
        lVar8 = *(int64_t *)(local_b8[2] + (uint64_t)uVar19 * 8);
        pvVar4 = _pthread_getspecific(uVar19);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_128 = '\0';
        local_130 = lVar8;
        FUN_012eb1d0();
        lVar8 = local_e8;
        if (local_e0 == '\0') {
          if (((local_e8 != 0) && (FUN_00d50b00(), local_e0 != '\0')) && (local_e8 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_e0 = '\0';
        }
        if ((local_128 != '\0') && (local_130 != 0)) {
          FUN_00d50b20();
        }
        if (lVar8 != 0) {
          local_e0 = '\0';
          local_e8 = 0;
          local_d8 = lVar8;
          local_d0 = 0xffffffff;
          local_c8 = 0;
          local_d0._4_4_ = 0;
          while( true ) {
            if (local_d0._4_4_ != 0) {
              if (local_d0._4_4_ < 1) {
                iVar2 = -local_d0._4_4_;
              }
              else {
                iVar2 = (int)local_d0 - local_d0._4_4_;
                local_d0 = CONCAT44(local_d0._4_4_,iVar2);
                FUN_00d23690();
                local_c8 = local_c8 + local_d0._4_4_;
                iVar2 = 0;
              }
              local_d0 = CONCAT44(iVar2,(int)local_d0);
            }
            lVar8 = (int64_t)(int)local_d0;
            iVar2 = (int)local_d0 + 1;
            local_d0 = CONCAT44(local_d0._4_4_,iVar2);
            if (*(int *)(local_d8 + 0xc) <= iVar2) break;
            local_160 = *(int64_t *)(*(int64_t *)(local_d8 + 0x10) + 8 + lVar8 * 8);
            local_158 = '\0';
            local_e8 = local_160;
            FUN_00d235a0();
            if ((local_158 != '\0') && (local_160 != 0)) {
              FUN_00d50b20();
            }
          }
          FUN_001159b0();
          FUN_00d50b20();
        }
        uVar19 = uVar19 + 1;
        local_70 = CONCAT44(local_70._4_4_,uVar19);
      } while ((int)uVar19 < *(int *)((int64_t)local_b8 + 0xc));
    }
    FUN_001150f0();
  }
  *this_ptr = local_b8;
  *(void*)(this_ptr + 1) = 1;
  if (local_100 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_f0 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_f8 != '\0') && (local_b0 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_98 != '\0') && (local_60 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_3c != '\0') && (local_38 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (((char)puVar3 != '\0') && (local_50 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (local_c0 != (void*)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

