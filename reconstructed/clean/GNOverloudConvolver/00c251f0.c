// Function: FUN_00c251f0
// Address: 00c251f0
// Size: 3521 bytes
// Class: GNOverloudConvolver
// String references:
//   "ir%I_%@"
//   "GNOverloudConvolver"

void FUN_00c251f0(int64_t *param_1,uint64_t param_2,void*param_3)

{
  double dVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t **pplVar5;
  int64_t *plVar6;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t *plVar7;
  bool bVar8;
  bool bVar9;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar10;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  uint64_t extraout_XMM0_Qa_03;
  uint64_t extraout_XMM0_Qa_04;
  int64_t local_180;
  char local_178;
  int64_t *local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  int64_t *local_78;
  int64_t *local_68;
  uint local_60;
  uint32_t local_5c;
  int64_t local_58;
  char local_50;
  char local_41;
  int64_t *local_40;
  char local_31;
  
  lVar2 = g_0276ca70;
  if (g_0276ca70 != 0) {
    FUN_00d50b00();
  }
  cVar3 = FUN_00d90870();
  uVar10 = extraout_XMM0_Qa;
  if (lVar2 != 0) {
    uVar10 = FUN_00d50b20();
  }
  lVar2 = g_0276ca78;
  if (cVar3 != '\0') {
    FUN_00d8f140(uVar10,6);
    local_b0 = local_68;
    local_a8 = 0;
    if ((char)local_60 == '\0') {
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = local_60 & 0xffffff00;
    }
    local_a8 = '\x01';
    iVar4 = FUN_00c716c0();
    if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    dVar1 = *(double *)
             (*(int64_t *)
               (*(int64_t *)(*(int64_t *)(*param_1 + 200) + 0x10) + (int64_t)iVar4 * 8) + 0x20);
    if (((dVar1 != 0.0) || (NAN(dVar1))) &&
       (param_3 = *(void**)(*param_1 + 0xd8), param_3 != (void*)0x0)) {
      FUN_00d50b00();
    }
    FUN_00d46300();
    plVar6 = local_68;
    *(void*)(this_ptr + 1) = 0;
    if ((char)local_60 == '\0') {
      if (local_68 == (int64_t *)0x0) {
        *this_ptr = 0;
        *(void*)(this_ptr + 1) = 1;
      }
      else {
        FUN_00d50b00();
        *this_ptr = (int64_t)plVar6;
        *(void*)(this_ptr + 1) = 1;
        if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      *this_ptr = (int64_t)local_68;
      *(void*)(this_ptr + 1) = 1;
      local_60 = local_60 & 0xffffff00;
    }
    if ((dVar1 == 0.0) && (!NAN(dVar1))) {
      return;
    }
    if (param_3 == (void*)0x0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  if (g_0276ca78 != 0) {
    FUN_00d50b00();
  }
  cVar3 = FUN_00d90870();
  uVar10 = extraout_XMM0_Qa_00;
  if (lVar2 != 0) {
    uVar10 = FUN_00d50b20();
  }
  lVar2 = g_0276ca60;
  if (cVar3 != '\0') {
    FUN_00d8f140(uVar10,7);
    local_a0 = local_68;
    local_98 = 0;
    if ((char)local_60 == '\0') {
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = local_60 & 0xffffff00;
    }
    local_98 = '\x01';
    iVar4 = FUN_00c716c0();
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    dVar1 = *(double *)
             (*(int64_t *)
               (*(int64_t *)(*(int64_t *)(*param_1 + 200) + 0x10) + (int64_t)iVar4 * 8) + 0x20);
    if ((dVar1 != 0.0) || (NAN(dVar1))) {
      FUN_00d50b00();
    }
    FUN_00d46300();
    plVar6 = local_68;
    *(void*)(this_ptr + 1) = 0;
    if ((char)local_60 == '\0') {
      if (local_68 == (int64_t *)0x0) {
        *this_ptr = 0;
        *(void*)(this_ptr + 1) = 1;
      }
      else {
        FUN_00d50b00();
        *this_ptr = (int64_t)plVar6;
        *(void*)(this_ptr + 1) = 1;
        if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      *this_ptr = (int64_t)local_68;
      *(void*)(this_ptr + 1) = 1;
      local_60 = local_60 & 0xffffff00;
    }
    if ((dVar1 == 0.0) && (!NAN(dVar1))) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  if (g_0276ca60 != 0) {
    FUN_00d50b00();
  }
  cVar3 = FUN_00d90870();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    FUN_00d46530();
    plVar6 = local_68;
    *(void*)(this_ptr + 1) = 0;
    if ((char)local_60 == '\0') {
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b00();
        *this_ptr = (int64_t)plVar6;
        *(void*)(this_ptr + 1) = 1;
        if ((char)local_60 == '\0') {
          return;
        }
        if (local_68 == (int64_t *)0x0) {
          return;
        }
        FUN_00d50b20();
        return;
      }
      local_68 = (int64_t *)0x0;
    }
    *this_ptr = (int64_t)local_68;
    *(void*)(this_ptr + 1) = 1;
    return;
  }
  plVar6 = (int64_t *)*param_1;
  if ((g_0276e120 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_0276e070 = FUN_00b10020();
    g_0276e058 = "GNOverloudConvolver";
    g_0276e060 = 0xe0;
    g_0276e068 = FUN_00c41070;
    g_0276e078 = 0;
    ram_000000000276e080 = 0;
    g_0276e088 = 0;
    ram_000000000276e090 = 0;
    g_0276e098 = 0;
    ram_000000000276e0a0 = 0;
    g_0276e0a8 = 0;
    ram_000000000276e0b0 = 0;
    g_0276e0b8 = 0;
    ram_000000000276e0c0 = 0;
    g_0276e0c8 = 0;
    ram_000000000276e0d0 = 0;
    g_0276e0d8 = 0;
    ram_000000000276e0e0 = 0;
    g_0276e0e8 = 0;
    ram_000000000276e0f0 = 0;
    g_0276e0f8 = 0;
    ram_000000000276e100 = 0;
    g_0276e108 = 0;
    ram_000000000276e110 = 0;
    g_0276e118 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (int64_t *)0x0) {
LAB_00c2551c:
    param_1 = &g_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_00c2551c;
  }
  plVar6 = (int64_t *)*param_1;
  local_41 = (char)param_1[1];
  if ((local_41 != '\0') && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  pplVar5 = &local_68;
  local_78 = plVar6;
  FUN_00b37610();
  plVar6 = local_68;
  if ((g_0276e120 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_0276e070 = FUN_00b10020();
    g_0276e058 = "GNOverloudConvolver";
    g_0276e060 = 0xe0;
    g_0276e068 = FUN_00c41070;
    g_0276e078 = 0;
    ram_000000000276e080 = 0;
    g_0276e088 = 0;
    ram_000000000276e090 = 0;
    g_0276e098 = 0;
    ram_000000000276e0a0 = 0;
    g_0276e0a8 = 0;
    ram_000000000276e0b0 = 0;
    g_0276e0b8 = 0;
    ram_000000000276e0c0 = 0;
    g_0276e0c8 = 0;
    ram_000000000276e0d0 = 0;
    g_0276e0d8 = 0;
    ram_000000000276e0e0 = 0;
    g_0276e0e8 = 0;
    ram_000000000276e0f0 = 0;
    g_0276e0f8 = 0;
    ram_000000000276e100 = 0;
    g_0276e108 = 0;
    ram_000000000276e110 = 0;
    g_0276e118 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (int64_t *)0x0) {
LAB_00c2558a:
    pplVar5 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_00c2558a;
  }
  local_80 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (local_80 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar5 + 1) = 0;
  }
  if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_40 = (int64_t *)*param_3;
  local_31 = *(char *)(param_3 + 1);
  bVar8 = local_31 == '\0';
  bVar9 = local_40 == (int64_t *)0x0;
  if (!bVar9 && !bVar8) {
    FUN_00d50b00();
  }
  lVar2 = g_0276ca68;
  if (g_0276ca68 != 0) {
    FUN_00d50b00();
  }
  cVar3 = FUN_00d90870();
  uVar10 = extraout_XMM0_Qa_01;
  if (lVar2 != 0) {
    uVar10 = FUN_00d50b20();
  }
  plVar6 = local_40;
  lVar2 = g_0276ca80;
  if (cVar3 == '\0') {
    if (g_0276ca80 != 0) {
      FUN_00d50b00();
    }
    cVar3 = FUN_00d90870();
    plVar6 = local_40;
    uVar10 = extraout_XMM0_Qa_02;
    if (lVar2 != 0) {
      uVar10 = FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      FUN_00d8f140(uVar10,9);
      plVar7 = local_68;
      if (plVar6 == local_68) {
        plVar7 = plVar6;
        cVar3 = local_31;
        if ((local_31 == '\0') && (plVar6 != (int64_t *)0x0)) {
          if ((char)local_60 != '\0') goto LAB_00c25917;
          FUN_00d50b00();
          cVar3 = '\x01';
        }
      }
      else {
        if ((char)local_60 != '\0') {
          cVar3 = '\x01';
          if (bVar9 || bVar8) goto LAB_00c258cf;
          FUN_00d50b20();
          goto LAB_00c25981;
        }
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        cVar3 = '\x01';
        if (!bVar9 && !bVar8) {
          FUN_00d50b20();
        }
      }
      if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00c25981;
    }
    bVar9 = false;
    bVar8 = false;
    lVar2 = g_0276ca88;
  }
  else {
    FUN_00d8f140(uVar10,8);
    plVar7 = local_68;
    if (plVar6 == local_68) {
      plVar7 = plVar6;
      cVar3 = local_31;
      if ((local_31 == '\0') && (plVar6 != (int64_t *)0x0)) {
        if ((char)local_60 != '\0') {
LAB_00c25917:
          cVar3 = '\x01';
          goto LAB_00c25981;
        }
        FUN_00d50b00();
        cVar3 = '\x01';
      }
    }
    else {
      if ((char)local_60 != '\0') {
        cVar3 = '\x01';
        if (bVar9 || bVar8) {
LAB_00c258cf:
          cVar3 = '\x01';
          plVar7 = local_68;
        }
        else {
          FUN_00d50b20();
        }
        goto LAB_00c25981;
      }
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      cVar3 = '\x01';
      if (!bVar9 && !bVar8) {
        FUN_00d50b20();
      }
    }
    if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_00c25981:
    bVar9 = true;
    bVar8 = true;
    lVar2 = g_0276ca88;
    local_40 = plVar7;
    local_31 = cVar3;
  }
  g_0276ca88 = lVar2;
  if (lVar2 != 0) {
    FUN_00d50b00();
    bVar8 = bVar9;
  }
  cVar3 = FUN_00d90870();
  uVar10 = extraout_XMM0_Qa_03;
  if (lVar2 != 0) {
    uVar10 = FUN_00d50b20();
  }
  lVar2 = g_0276ca90;
  if (cVar3 != '\0') {
    FUN_00d8f140(uVar10,8);
    local_90 = local_68;
    plVar6 = local_78;
    local_88 = 0;
    if ((char)local_60 == '\0') {
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = local_60 & 0xffffff00;
    }
    local_88 = '\x01';
    iVar4 = FUN_00c716c0();
    lVar2 = *(int64_t *)
             (*(int64_t *)(*(int64_t *)(plVar6[0x19] + 0x10) + (int64_t)iVar4 * 8) + 0x10);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar2;
    *(void*)(this_ptr + 1) = 1;
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    cVar3 = local_31;
    if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
      cVar3 = local_31;
    }
    goto LAB_00c25c36;
  }
  if (g_0276ca90 != 0) {
    FUN_00d50b00();
  }
  local_d0 = lVar2;
  local_c8 = '\x01';
  cVar3 = FUN_00d90870();
  uVar10 = extraout_XMM0_Qa_04;
  if (cVar3 == '\0') {
    cVar3 = local_31;
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      uVar10 = FUN_00d50b20();
      cVar3 = local_31;
    }
  }
  else {
    iVar4 = *(int *)(arg1 + 0xb0);
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      uVar10 = FUN_00d50b20();
    }
    cVar3 = local_31;
    if (iVar4 != 0) {
      uVar10 = FUN_00d8f140(uVar10,4);
      local_60 = 2;
      local_5c = *(void*)(arg1 + 0xb0);
      local_68 = &g_0263cdb0;
      local_50 = 0;
      if (local_180 != 0) {
        uVar10 = FUN_00d50b00();
      }
      local_58 = local_180;
      local_50 = '\x01';
      uVar10 = FUN_00d8cb40(uVar10,&local_68);
      plVar6 = local_c0;
      if (local_c0 == local_40) {
        cVar3 = local_31;
        if ((local_31 == '\0') && (local_c0 != (int64_t *)0x0)) {
          plVar6 = local_40;
          if (local_b8 != '\0') goto LAB_00c25d9c;
          uVar10 = FUN_00d50b00();
          cVar3 = '\x01';
        }
LAB_00c25dee:
        if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
          uVar10 = FUN_00d50b20();
        }
      }
      else {
        if (local_b8 == '\0') {
          if (local_c0 != (int64_t *)0x0) {
            uVar10 = FUN_00d50b00();
          }
          cVar3 = '\x01';
          if ((local_31 == '\0') || (local_40 == (int64_t *)0x0)) {
            local_40 = plVar6;
          }
          else {
            local_40 = plVar6;
            uVar10 = FUN_00d50b20();
          }
          goto LAB_00c25dee;
        }
        if ((local_31 != '\0') && (local_40 != (int64_t *)0x0)) {
          local_40 = local_c0;
          uVar10 = FUN_00d50b20();
        }
LAB_00c25d9c:
        local_b8 = '\0';
        cVar3 = '\x01';
        local_40 = plVar6;
      }
      local_68 = &g_0263cdb0;
      if ((local_50 != '\0') && (local_58 != 0)) {
        uVar10 = FUN_00d50b20();
      }
      if ((local_178 != '\0') && (local_180 != 0)) {
        uVar10 = FUN_00d50b20();
      }
    }
  }
  plVar6 = local_78;
  if (local_80 == (int64_t *)0x0) {
    if (bVar8) {
      local_f0 = local_40;
      local_e8 = '\0';
      (**(code **)(*local_78 + 0x608))(uVar10,&local_f0);
      if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_e0 = local_40;
      local_d8 = '\0';
      (**(code **)(*local_78 + 0x88))(uVar10,&local_e0);
      if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else if (bVar8) {
    local_110 = local_40;
    local_108 = '\0';
    (**(code **)(*local_80 + 0x608))(uVar10,&local_110);
    if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_100 = local_40;
    local_f8 = '\0';
    (**(code **)(*local_80 + 0x88))(uVar10,&local_100);
    if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_00c25c36:
  if ((cVar3 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_80 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_41 != '\0') && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

