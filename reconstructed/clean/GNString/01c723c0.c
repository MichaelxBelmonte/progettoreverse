// Function: FUN_01c723c0
// Address: 01c723c0
// Size: 2429 bytes
// Class: GNString
// String references:
//   "GNString"
//   "GNDictionary"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01c723c0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  byte bVar8;
  byte bVar9;
  int64_t *plVar10;
  int64_t *plVar11;
  int64_t **pplVar12;
  uint64_t uVar13;
  uint32_t uVar14;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  double dVar15;
  double dVar16;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  uint32_t local_74;
  uint64_t local_70;
  int64_t *local_68;
  int64_t local_60;
  int64_t *local_58;
  char local_50;
  uint64_t local_48;
  
  plVar10 = (int64_t *)*arg1;
  if ((g_026fdd40 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_026cd0e8 = FUN_00d4fe50();
    g_026cd0d0 = "GNDictionary";
    g_026cd0d8 = 0x28;
    g_026cd0e0 = FUN_00022d20;
    g_026cd0f0 = 0;
    ram_00000000026cd0f8 = 0;
    g_026cd100 = 0;
    g_026cd178 = 0;
    ram_00000000026cd180 = 0;
    g_026cd188 = 0;
    g_026cd18a = 6;
    g_026cd108 = 0;
    ram_00000000026cd110 = 0;
    g_026cd118 = 0;
    ram_00000000026cd120 = 0;
    g_026cd128 = 0;
    ram_00000000026cd130 = 0;
    g_026cd138 = 0;
    ram_00000000026cd140 = 0;
    g_026cd148 = 0;
    ram_00000000026cd150 = 0;
    g_026cd158 = 0;
    ram_00000000026cd160 = 0;
    g_026cd168 = 0;
    ram_00000000026cd170 = 0;
    g_026cd193 = 0;
    g_026cd18b = 0;
    ___cxa_guard_release();
  }
  plVar11 = &g_02802688;
  if (plVar10 != (int64_t *)0x0) {
    (**(code **)(*plVar10 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') {
      if ((g_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        g_026d5e58 = FUN_00d4fe50();
        g_026d5e40 = "GNString";
        g_026d5e48 = 0x40;
        g_026d5e50 = FUN_0005d920;
        g_026d5e60 = 0;
        ram_00000000026d5e68 = 0;
        g_026d5e70 = 0;
        ram_00000000026d5e78 = 0;
        g_026d5e80 = 0;
        ram_00000000026d5e88 = 0;
        g_026d5e90 = 0;
        ram_00000000026d5e98 = 0;
        g_026d5ea0 = 0;
        ram_00000000026d5ea8 = 0;
        g_026d5eb0 = 0;
        ram_00000000026d5eb8 = 0;
        g_026d5ec0 = 0;
        ram_00000000026d5ec8 = 0;
        g_026d5ed0 = 0;
        ram_00000000026d5ed8 = 0;
        g_026d5ee0 = 0;
        ram_00000000026d5ee8 = 0;
        g_026d5ef0 = 0;
        ram_00000000026d5ef8 = 0;
        g_026d5f00 = 0;
        ___cxa_guard_release();
      }
      cVar3 = FUN_00e8db60();
      plVar11 = arg1;
      if (cVar3 == '\0') {
        plVar11 = &g_02802688;
      }
    }
  }
  local_60 = *plVar11;
  lVar2 = plVar11[1];
  if (((char)lVar2 == '\0') || (local_60 == 0)) {
    if (local_60 == 0) {
      return;
    }
  }
  else {
    FUN_00d50b00();
  }
  plVar10 = (int64_t *)this_ptr[0x46];
  if (plVar10 == (int64_t *)0x0) {
    cVar3 = '\0';
    plVar10 = (int64_t *)0x0;
    goto LAB_01c72b3d;
  }
  local_68 = plVar10;
  (**(code **)(*plVar10 + 0x10))();
  uVar14 = FUN_00d50b00();
  if ((int64_t *)this_ptr[0x46] != (int64_t *)0x0) {
    lVar5 = (**(code **)(*(int64_t *)this_ptr[0x46] + 0x10))();
    this_ptr[0x46] = 0;
    uVar14 = extraout_XMM0_Da;
    if (lVar5 != 0) {
      uVar14 = FUN_00d50b20();
    }
  }
  lVar5 = g_027ebed8;
  if (g_027ebed8 != 0) {
    uVar14 = FUN_00d50b00();
  }
  local_b8 = lVar5;
  local_b0 = '\x01';
  pplVar12 = &local_58;
  FUN_000175c0(uVar14,&local_b8);
  plVar10 = local_58;
  uVar6 = FUN_00053ac0();
  if (plVar10 == (int64_t *)0x0) {
LAB_01c72532:
    pplVar12 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar10 + 0x360))();
    uVar6 = FUN_00e85ea0();
    if ((char)uVar6 == '\0') goto LAB_01c72532;
  }
  plVar11 = *pplVar12;
  if (plVar11 == (int64_t *)0x0) {
    bVar8 = 1;
    bVar9 = 1;
    local_70 = 0;
    uVar7 = 0;
    plVar11 = (int64_t *)0x0;
  }
  else {
    if (*(char *)(pplVar12 + 1) == '\0') {
      uVar6 = FUN_00d50b00();
    }
    else {
      *(void*)(pplVar12 + 1) = 0;
    }
    local_70 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
    bVar8 = 0;
    bVar9 = 0;
    uVar7 = CONCAT71((int7)((uint64_t)plVar10 >> 8),1);
  }
  if ((local_50 != '\0') && (bVar9 = bVar8, local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if (plVar11 == (int64_t *)0x0) {
    plVar10 = (int64_t *)0x0;
  }
  else {
    uVar14 = FUN_00d459e0();
    local_a8 = g_027ebee0;
    local_74 = uVar14;
    local_48 = uVar7;
    if (g_027ebee0 != 0) {
      uVar14 = FUN_00d50b00();
    }
    local_a0 = '\x01';
    pplVar12 = &local_58;
    FUN_000175c0(uVar14,&local_a8);
    plVar10 = local_58;
    uVar14 = FUN_00053ac0();
    if (plVar10 == (int64_t *)0x0) {
LAB_01c72632:
      pplVar12 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar3 = FUN_00e85ea0();
      uVar14 = extraout_XMM0_Da_00;
      if (cVar3 == '\0') goto LAB_01c72632;
    }
    plVar1 = *pplVar12;
    if (plVar1 == plVar11) {
      if ((bool)(bVar9 & plVar1 != (int64_t *)0x0)) {
        if (*(char *)(pplVar12 + 1) != '\0') goto LAB_01c7267d;
        uVar14 = FUN_00d50b00();
        plVar1 = plVar11;
        goto joined_r0x01c726d1;
      }
      uVar7 = local_48 & 0xffffffff;
      plVar1 = plVar11;
    }
    else {
      if (*(char *)(pplVar12 + 1) == '\0') {
        if (plVar1 != (int64_t *)0x0) {
          uVar14 = FUN_00d50b00();
        }
        if ((char)local_70 != '\0') {
          uVar14 = FUN_00d50b20();
        }
      }
      else {
        plVar11 = plVar1;
        if ((char)local_70 != '\0') {
          uVar14 = FUN_00d50b20();
        }
LAB_01c7267d:
        *(void*)(pplVar12 + 1) = 0;
        plVar1 = plVar11;
      }
joined_r0x01c726d1:
      uVar7 = CONCAT71((int7)((uint64_t)plVar10 >> 8),1);
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      uVar14 = FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      uVar14 = FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      dVar15 = (double)FUN_00d45bc0();
      uVar14 = SUB84(dVar15,0);
      if (((double)this_ptr[0x37] != dVar15) || (NAN((double)this_ptr[0x37]) || NAN(dVar15))) {
        dVar16 = g_0241ea58;
        if (dVar15 <= g_0241ea58) {
          dVar16 = dVar15;
        }
        this_ptr[0x37] = (int64_t)dVar16;
        uVar13 = -(uint64_t)((double)this_ptr[0x38] == 0.0);
        dVar15 = (double)_log(SUB84(dVar16 / (double)(~uVar13 & this_ptr[0x38] |
                                                     g_0238fee8 & uVar13),0));
        *(float *)(this_ptr + 0x55) = (float)dVar15;
        uVar14 = (**(code **)(*this_ptr + 0x620))();
        *(void*)(this_ptr + 0x3a) = 1;
        if ((int64_t *)this_ptr[0x46] != (int64_t *)0x0) {
          uVar14 = (**(code **)(*(int64_t *)this_ptr[0x46] + 0x40))();
        }
      }
    }
    lVar5 = g_027ebee8;
    if (g_027ebee8 != 0) {
      uVar14 = FUN_00d50b00();
    }
    local_98 = lVar5;
    local_90 = '\x01';
    pplVar12 = &local_58;
    FUN_000175c0(uVar14,&local_98);
    plVar10 = local_58;
    uVar14 = FUN_00053ac0();
    if (plVar10 == (int64_t *)0x0) {
LAB_01c72807:
      pplVar12 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar3 = FUN_00e85ea0();
      uVar14 = extraout_XMM0_Da_01;
      if (cVar3 == '\0') goto LAB_01c72807;
    }
    plVar11 = *pplVar12;
    cVar3 = (char)uVar7;
    if (plVar11 == plVar1) {
      if ((cVar3 == '\0') && (plVar11 != (int64_t *)0x0)) {
        plVar11 = plVar1;
        if (*(char *)(pplVar12 + 1) != '\0') goto LAB_01c72854;
        uVar14 = FUN_00d50b00();
        goto joined_r0x01c7288e;
      }
      uVar7 = uVar7 & 0xffffffff;
      plVar11 = plVar1;
    }
    else {
      if (*(char *)(pplVar12 + 1) == '\0') {
        if (plVar11 != (int64_t *)0x0) {
          uVar14 = FUN_00d50b00();
        }
        if ((cVar3 != '\0') && (plVar1 != (int64_t *)0x0)) {
          uVar14 = FUN_00d50b20();
        }
      }
      else {
        if ((cVar3 != '\0') && (plVar1 != (int64_t *)0x0)) {
          uVar14 = FUN_00d50b20();
        }
LAB_01c72854:
        *(void*)(pplVar12 + 1) = 0;
      }
joined_r0x01c7288e:
      uVar7 = CONCAT71((int7)((uint64_t)plVar10 >> 8),1);
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      uVar14 = FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      uVar14 = FUN_00d50b20();
    }
    local_48 = uVar7;
    if (plVar11 != (int64_t *)0x0) {
      dVar15 = (double)FUN_00d45bc0();
      uVar14 = SUB84(dVar15,0);
      if (((double)this_ptr[0x38] != dVar15) || (NAN((double)this_ptr[0x38]) || NAN(dVar15))) {
        dVar16 = g_0241eeb8;
        if (g_0241eeb8 <= dVar15) {
          dVar16 = dVar15;
        }
        this_ptr[0x38] = (int64_t)dVar16;
        dVar15 = (double)_log(SUB84((double)this_ptr[0x37] /
                                    (double)(g_0238fee8 & -(uint64_t)(dVar16 == 0.0) |
                                            ~-(uint64_t)(dVar16 == 0.0) & (uint64_t)dVar16),0));
        *(float *)(this_ptr + 0x55) = (float)dVar15;
        uVar14 = (**(code **)(*this_ptr + 0x620))(local_48);
        *(void*)(this_ptr + 0x3a) = 1;
        if ((int64_t *)this_ptr[0x46] != (int64_t *)0x0) {
          uVar14 = (**(code **)(*(int64_t *)this_ptr[0x46] + 0x40))();
        }
      }
    }
    lVar5 = g_027ebef0;
    if (g_027ebef0 != 0) {
      uVar14 = FUN_00d50b00();
    }
    local_88 = lVar5;
    local_80 = '\x01';
    pplVar12 = &local_58;
    FUN_000175c0(uVar14,&local_88);
    plVar10 = local_58;
    FUN_00053ac0();
    if (plVar10 == (int64_t *)0x0) {
LAB_01c729cd:
      pplVar12 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_01c729cd;
    }
    plVar10 = *pplVar12;
    if (plVar10 == plVar11) {
      if (((char)local_48 == '\0') && (plVar10 != (int64_t *)0x0)) {
        plVar10 = plVar11;
        if (*(char *)(pplVar12 + 1) != '\0') goto LAB_01c72a1c;
        FUN_00d50b00();
        goto joined_r0x01c72a59;
      }
      uVar7 = local_48 & 0xffffffff;
      plVar10 = plVar11;
    }
    else {
      if (*(char *)(pplVar12 + 1) == '\0') {
        if (plVar10 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if (((char)local_48 != '\0') && (plVar11 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (((char)local_48 != '\0') && (plVar11 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01c72a1c:
        *(void*)(pplVar12 + 1) = 0;
      }
joined_r0x01c72a59:
      uVar7 = 1;
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (plVar10 != (int64_t *)0x0) {
      iVar4 = FUN_00d45870();
      if (iVar4 == 0) {
        FUN_01c4e0b0();
      }
      else {
        iVar4 = FUN_00d45870();
        if (iVar4 == 1) {
          FUN_01c4e0b0();
        }
      }
    }
    plVar11 = (int64_t *)this_ptr[0x46];
    if (plVar11 != local_68) {
      if (plVar11 == (int64_t *)0x0) {
        lVar5 = 0;
      }
      else {
        lVar5 = (**(code **)(*plVar11 + 0x10))();
      }
      (**(code **)(*local_68 + 0x10))();
      FUN_00d50b00();
      this_ptr[0x46] = (int64_t)local_68;
      plVar11 = local_68;
      if (lVar5 != 0) {
        FUN_00d50b20();
        plVar11 = (int64_t *)this_ptr[0x46];
      }
    }
    (**(code **)(*plVar11 + 0x30))(local_74);
    *(void*)((int64_t)this_ptr + 0x2e2) = 1;
  }
  cVar3 = (char)uVar7;
  (**(code **)(*local_68 + 0x10))();
  FUN_00d50b20();
LAB_01c72b3d:
  if ((char)lVar2 != '\0') {
    FUN_00d50b20();
  }
  if ((cVar3 != '\0') && (plVar10 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

