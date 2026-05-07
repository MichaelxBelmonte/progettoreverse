// Function: FUN_0171c800
// Address: 0171c800
// Size: 5337 bytes
// Class: GNString
// String references:
//   "%@%@"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_0171c800(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  void*puVar8;
  uint64_t uVar9;
  int64_t lVar10;
  void *pvVar11;
  int64_t *plVar12;
  void* pVar13;
  int64_t arg1;
  uint64_t this_ptr;
  int iVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  int64_t local_1e0;
  char local_1d8;
  int64_t local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  uint64_t local_170;
  int64_t local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t *local_130;
  int64_t *local_128;
  int64_t *local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  void*local_d0;
  char local_c8;
  int64_t *local_c0;
  int64_t local_98;
  char local_90;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if ((*(int64_t *)(arg1 + 0x38) == 0) || (*param_2 == 0)) goto LAB_0171dc31;
  if ((g_028ada88 == (int64_t *)0x0) || (g_028ada91 == '\0')) {
    FUN_00e8cb50();
    if (g_028ada88 == (int64_t *)0x0) {
      FUN_0177c8c0();
      plVar12 = g_028ada88;
      if (g_028ada88 != local_60) {
        if (local_58 == '\0') {
          if (local_60 == (int64_t *)0x0) {
            plVar12 = (int64_t *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar12 = local_60;
          }
        }
        else {
          local_58 = '\0';
          plVar12 = local_60;
        }
        bVar17 = g_028ada88 != (int64_t *)0x0;
        g_028ada88 = plVar12;
        if (bVar17) {
          FUN_00d50b20();
          plVar12 = local_60;
        }
      }
      if ((plVar12 != (int64_t *)0x0) && (g_028ada90 == '\0')) {
        g_028ada90 = '\x01';
        FUN_00e8cb90();
        plVar12 = local_60;
      }
      if ((local_58 != '\0') && (plVar12 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      g_028ada91 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028ada91 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((g_028ada98 == (void*)0x0) || (g_028adaa1 == '\0')) {
    FUN_00e8cb50();
    if (g_028ada98 == (void*)0x0) {
      puVar8 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar8 = &g_02572358;
      (*g_02572370)();
      bVar17 = g_028ada98 == (void*)0x0;
      g_028ada98 = puVar8;
      if (((bVar17) || (FUN_00d50b20(), g_028ada98 != (void*)0x0)) &&
         (g_028adaa0 == '\0')) {
        g_028adaa0 = '\x01';
        FUN_00e8cb90();
      }
      FUN_00d99300();
      if (local_68 == '\0') {
        if (local_70 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      FUN_00d21140();
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d99300();
      if (local_68 == '\0') {
        if (local_70 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      FUN_00d21140();
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d99300();
      if (local_68 == '\0') {
        if (local_70 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      FUN_00d21140();
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d99300();
      if (local_68 == '\0') {
        if (local_70 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      FUN_00d21140();
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d99300();
      if (local_68 == '\0') {
        if (local_70 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      FUN_00d21140();
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d99300();
      if (local_68 == '\0') {
        if (local_70 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      FUN_00d21140();
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d99300();
      if (local_68 == '\0') {
        if (local_70 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      local_60 = local_70;
      local_58 = '\0';
      FUN_00d21140();
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      g_028adaa1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028adaa1 = '\x01';
      FUN_00e8cb70();
    }
  }
  plVar12 = local_60;
  local_158 = 0;
  lVar10 = *(int64_t *)(arg1 + 0x38);
  if (lVar10 != 0) {
    FUN_00d50b00();
  }
  local_158 = '\x01';
  local_160 = lVar10;
  uVar5 = FUN_01794580();
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  local_170 = 0;
  if (uVar5 < 7) {
    local_170 = (uint64_t)uVar5;
  }
  FUN_00ddb860();
  if (local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_00d95590();
  local_118 = 0;
  if (local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_118 = '\x01';
  local_120 = local_60;
  (**(code **)(*local_60 + 0x3e0))();
  if ((local_118 != '\0') && (local_120 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_0171e8d0();
  local_108 = 0;
  if (local_78 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  local_108 = '\x01';
  local_110 = local_80;
  FUN_00d8ede0();
  local_f8 = 0;
  if (local_90 == '\0') {
    if (local_98 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_90 = '\0';
  }
  local_f8 = '\x01';
  local_100 = local_98;
  FUN_00d95130();
  if (local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  local_c0 = local_60;
  FUN_0171ebf0();
  local_e8 = 0;
  if (local_78 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  local_e8 = '\x01';
  local_f0 = local_80;
  FUN_00d8ede0();
  local_d8 = 0;
  if (local_90 == '\0') {
    if (local_98 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_90 = '\0';
  }
  local_d8 = '\x01';
  local_e0 = local_98;
  FUN_00d95130();
  if (local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  local_128 = local_60;
  FUN_00083ea0(2,&local_128);
  FUN_00d8cb40();
  if (local_78 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_168 = local_80;
  cVar3 = (**(code **)(*local_60 + 0x3e0))();
  iVar14 = 0;
  if (cVar3 != '\0') {
    iVar14 = 0;
    for (iVar15 = 0; iVar6 = FUN_00d8c7a0(), iVar15 < iVar6; iVar15 = iVar15 + 1) {
      FUN_00d8cbc0();
      uVar5 = FUN_00d90d50();
      FUN_00d8cbc0();
      bVar4 = FUN_00d90d50();
      iVar14 = (iVar14 - (uVar5 & 0xff)) + (uint)bVar4;
    }
  }
  FUN_00d95590();
  local_c8 = 0;
  if (local_58 == '\0') {
    FUN_00d50b00();
  }
  else {
    local_58 = '\0';
  }
  local_c8 = '\x01';
  local_d0 = &g_024c5048;
  (**(code **)(*local_60 + 0x3e0))();
  if ((local_c8 != '\0') && (local_d0 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (local_58 != '\0') {
    FUN_00d50b20();
  }
  (**(code **)(*local_60 + 0x380))();
  FUN_00d97ce0();
  if (local_58 == '\0') {
    FUN_00d50b00();
  }
  (**(code **)(*local_60 + 0x380))();
  FUN_00d8f140();
  puVar8 = (void*)*param_2;
  if (puVar8 == &g_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (local_58 != '\0') goto LAB_0171d459;
      FUN_00d50b00();
      goto LAB_0171d493;
    }
LAB_0171d49b:
    if (local_58 != '\0') {
      FUN_00d50b20();
    }
  }
  else {
    lVar10 = param_2[1];
    if (local_58 == '\0') {
      FUN_00d50b00();
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar10 != '\0') && (puVar8 != (void*)0x0)) {
        FUN_00d50b20();
      }
LAB_0171d493:
      *(void*)(param_2 + 1) = 1;
      goto LAB_0171d49b;
    }
    *param_2 = (int64_t)&g_024c5048;
    if (((char)lVar10 != '\0') && (puVar8 != (void*)0x0)) {
      FUN_00d50b20();
    }
LAB_0171d459:
    *(void*)(param_2 + 1) = 1;
  }
  lVar10 = g_027c0a18;
  if (g_027c0a18 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_027cc860;
  local_1a0 = lVar10;
  local_198 = '\x01';
  if (g_027cc860 != 0) {
    FUN_00d50b00();
  }
  local_190 = lVar1;
  local_188 = '\x01';
  FUN_00d98db0(&local_190,&local_1a0,1);
  puVar8 = (void*)*param_2;
  if (puVar8 == &g_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (local_58 != '\0') goto LAB_0171d566;
      FUN_00d50b00();
      goto LAB_0171d5a0;
    }
LAB_0171d5a4:
    if (local_58 != '\0') {
      FUN_00d50b20();
    }
  }
  else {
    lVar10 = param_2[1];
    if (local_58 == '\0') {
      FUN_00d50b00();
      *param_2 = (int64_t)&g_024c5048;
      if (((char)lVar10 != '\0') && (puVar8 != (void*)0x0)) {
        FUN_00d50b20();
      }
LAB_0171d5a0:
      *(void*)(param_2 + 1) = 1;
      goto LAB_0171d5a4;
    }
    *param_2 = (int64_t)&g_024c5048;
    if (((char)lVar10 != '\0') && (puVar8 != (void*)0x0)) {
      FUN_00d50b20();
    }
LAB_0171d566:
    *(void*)(param_2 + 1) = 1;
    local_58 = '\0';
  }
  if ((local_188 != '\0') && (local_190 != 0)) {
    FUN_00d50b20();
  }
  if ((local_198 != '\0') && (local_1a0 != 0)) {
    FUN_00d50b20();
  }
  lVar10 = 0;
  do {
    iVar15 = *(int *)((int64_t)&g_02411aa0 + lVar10);
    lVar1 = *(int64_t *)(g_028ada88[2] + (int64_t)iVar15 * 8);
    local_148 = 0;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_148 = '\x01';
    local_150 = lVar1;
    uVar9 = FUN_00d90650();
    if ((local_148 != '\0') && (local_150 != 0)) {
      FUN_00d50b20();
    }
    iVar6 = (int)((uint64_t)uVar9 >> 0x20);
    if (iVar6 == 0) {
      lVar1 = *(int64_t *)(g_028ada98[2] + (int64_t)iVar15 * 8);
      local_138 = 0;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_138 = '\x01';
      local_140 = lVar1;
      uVar9 = FUN_00d90650();
      iVar6 = (int)((uint64_t)uVar9 >> 0x20);
      if ((local_138 != '\0') && (local_140 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((iVar6 != 0) && ((int)uVar9 == 0)) {
      FUN_00d8f140();
      if (local_58 == '\0') {
        FUN_00d50b00();
      }
      local_130 = &g_024c5048;
      iVar15 = (iVar15 + (int)local_170) % 7;
      pVar13 = (iVar15 >> 0x1f & 7U) + iVar15;
      iVar15 = 0;
      if (pVar13 < 7) {
        lVar10 = (int64_t)(int)pVar13;
        pVar13 = 0x2411d30;
        iVar15 = *(int *)(&g_02411d30 + lVar10 * 4);
      }
      iVar6 = (int)local_170 * 2;
      iVar16 = 6;
      if (iVar6 < 6) {
        iVar16 = iVar6;
      }
      pvVar11 = _pthread_getspecific(pVar13);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar7 = FUN_01743720();
      FUN_0171aac0();
      FUN_01780260(iVar14 * 7,
                   ((iVar15 + iVar14 * 7) -
                   ((((iVar6 - iVar16) + 6U) / 7) * -7 + (int)local_170 * 2)) + iVar7);
      plVar2 = local_130;
      if (local_58 == '\0') {
        FUN_00d50b00();
      }
      else {
        local_58 = '\0';
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      local_128 = plVar2;
      FUN_00083ea0(2,&local_128);
      FUN_00d8cb40();
      lVar10 = *param_2;
      if (lVar10 == local_80) {
        if (((char)param_2[1] == '\0') && (local_80 != 0)) {
          if (local_78 != '\0') goto LAB_0171da2b;
          FUN_00d50b00();
          goto LAB_0171dae2;
        }
LAB_0171daea:
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        lVar1 = param_2[1];
        if (local_78 == '\0') {
          if (local_80 != 0) {
            FUN_00d50b00();
          }
          *param_2 = local_80;
          if (((char)lVar1 != '\0') && (lVar10 != 0)) {
            FUN_00d50b20();
          }
LAB_0171dae2:
          *(void*)(param_2 + 1) = 1;
          goto LAB_0171daea;
        }
        *param_2 = local_80;
        if (((char)lVar1 != '\0') && (lVar10 != 0)) {
          FUN_00d50b20();
        }
LAB_0171da2b:
        *(void*)(param_2 + 1) = 1;
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (local_130 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      goto LAB_0171dbcc;
    }
    lVar10 = lVar10 + 4;
  } while (lVar10 != 0x1c);
  local_128 = (int64_t *)*param_2;
  FUN_00083ea0(2,&local_128);
  FUN_00d8cb40();
  lVar10 = *param_2;
  if (lVar10 == local_80) {
    if (((char)param_2[1] == '\0') && (local_80 != 0)) {
      if (local_78 != '\0') goto LAB_0171da67;
      FUN_00d50b00();
      goto LAB_0171db6b;
    }
LAB_0171db73:
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = param_2[1];
    if (local_78 == '\0') {
      if (local_80 != 0) {
        FUN_00d50b00();
      }
      *param_2 = local_80;
      if (((char)lVar1 != '\0') && (lVar10 != 0)) {
        FUN_00d50b20();
      }
LAB_0171db6b:
      *(void*)(param_2 + 1) = 1;
      goto LAB_0171db73;
    }
    *param_2 = local_80;
    if (((char)lVar1 != '\0') && (lVar10 != 0)) {
      FUN_00d50b20();
    }
LAB_0171da67:
    *(void*)(param_2 + 1) = 1;
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
LAB_0171dbcc:
  local_60 = &g_024c5048;
  FUN_00d50b20();
  if (local_168 != 0) {
    FUN_00d50b20();
  }
  if (plVar12 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_c0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar12 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_0171dc31:
  local_180 = *param_2;
  local_178 = '\0';
  FUN_01407af0();
  FUN_0171aac0();
  FUN_01411410();
  if ((local_1d8 != '\0') && (local_1e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_178 != '\0') && (local_180 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

