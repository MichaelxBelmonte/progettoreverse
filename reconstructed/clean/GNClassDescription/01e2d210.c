// Function: FUN_01e2d210
// Address: 01e2d210
// Size: 3705 bytes
// Class: GNClassDescription
// === GNClassDescription properties ===
//                   _potentialValues
//                   _derivationSources
//                   _derivationDestinations
//                   _documentation


void* FUN_01e2d210(void)

{
  bool bVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t lVar5;
  char cVar6;
  int64_t *plVar7;
  int64_t arg1;
  void*this_ptr;
  bool bVar8;
  byte bVar9;
  bool bVar10;
  int64_t *local_140;
  char local_138;
  int64_t *local_78;
  char local_70;
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_40;
  char local_38;
  
  lVar2 = g_028b9590;
  if (g_028b9590 != 0) {
    FUN_00d50b00();
  }
  FUN_000175c0();
  if (local_78 == (int64_t *)0x0) {
    cVar6 = '\0';
  }
  else {
    if (local_70 == '\0') {
      FUN_00d50b00();
    }
    else {
      local_70 = '\0';
    }
    local_38 = '\0';
    cVar6 = FUN_00c9ff50();
    local_40 = local_78;
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  plVar7 = g_028b9540;
  if (cVar6 != '\0') {
    FUN_000175c0();
    *(void*)(this_ptr + 1) = 0;
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) {
        *this_ptr = 0;
        *(void*)(this_ptr + 1) = 1;
      }
      else {
        FUN_00d50b00();
        *this_ptr = local_40;
        *(void*)(this_ptr + 1) = 1;
      }
    }
    else {
      *this_ptr = local_40;
      *(void*)(this_ptr + 1) = 1;
    }
    bVar1 = false;
    bVar8 = false;
    local_58 = (int64_t *)0x0;
    plVar7 = (int64_t *)0x0;
    goto joined_r0x01e2dc4b;
  }
  if (g_028b9540 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_40 = plVar7;
  cVar6 = FUN_00c9ff50();
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  plVar3 = g_028b9540;
  lVar2 = g_028b9520;
  if (cVar6 != '\0') {
    if (g_028b9540 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_000175c0();
    local_50 = plVar7;
    if (plVar7 == (int64_t *)0x0) {
      local_50 = (int64_t *)0x0;
    }
    else {
      FUN_00d50b00();
    }
    bVar1 = plVar7 != (int64_t *)0x0;
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    FUN_00c80cd0();
    local_58 = plVar7;
    if (plVar7 == (int64_t *)0x0) {
      local_58 = (int64_t *)0x0;
    }
    else {
      FUN_00d50b00();
    }
    bVar8 = plVar7 != (int64_t *)0x0;
    if ((local_58 == (int64_t *)0x0) || (cVar6 = FUN_00c811c0(), cVar6 == '\0')) {
      *(void*)(arg1 + 0x39) = 1;
      FUN_00d8ede0();
      lVar2 = g_027f3840;
      if ((local_70 == '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b00();
        lVar2 = g_027f3840;
      }
      g_027f3840 = lVar2;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_00ca0840();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (local_78 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      plVar7 = local_50;
    }
    else {
      FUN_00c811e0();
      bVar10 = plVar7 == (int64_t *)0x0;
      if (bVar10) {
        plVar7 = (int64_t *)0x0;
      }
      else {
        FUN_00d50b00();
      }
      (**(code **)(*plVar7 + 0x18))();
      *(void*)(this_ptr + 1) = 0;
      if (bVar10) {
        FUN_00d50b00();
        *this_ptr = plVar7;
        *(void*)(this_ptr + 1) = 1;
        plVar7 = local_50;
      }
      else {
        *this_ptr = plVar7;
        *(void*)(this_ptr + 1) = 1;
        plVar7 = local_50;
      }
    }
    goto joined_r0x01e2dc4b;
  }
  if (g_028b9520 != 0) {
    FUN_00d50b00();
  }
  FUN_000175c0();
  if (plVar7 == (int64_t *)0x0) {
    bVar9 = 1;
    bVar1 = false;
    plVar7 = (int64_t *)0x0;
    bVar8 = false;
    local_58 = (int64_t *)0x0;
    bVar10 = false;
  }
  else {
    FUN_00d50b00();
    lVar4 = g_028b9550;
    if (g_028b9550 != 0) {
      FUN_00d50b00();
    }
    cVar6 = (**(code **)(*plVar7 + 0x50))();
    lVar5 = g_028b9570;
    if (cVar6 == '\0') {
      bVar8 = false;
      local_58 = (int64_t *)0x0;
      bVar10 = false;
    }
    else {
      if (g_028b9570 != 0) {
        FUN_00d50b00();
      }
      FUN_000175c0();
      if (local_78 == plVar7) {
LAB_01e2d8a8:
        cVar6 = FUN_00c817a0();
        if (cVar6 == '\0') {
          bVar8 = false;
          local_58 = (int64_t *)0x0;
          bVar10 = false;
        }
        else {
          FUN_00c80cd0();
          local_58 = local_140;
          if (local_140 == (int64_t *)0x0) {
            bVar8 = false;
            local_58 = (int64_t *)0x0;
          }
          else {
            if (local_138 != '\0') {
              bVar10 = true;
              bVar8 = true;
              goto LAB_01e2d9e7;
            }
            FUN_00d50b00();
            bVar8 = true;
          }
          bVar10 = local_58 != (int64_t *)0x0;
          if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        if (local_70 == '\0') {
          if (local_78 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
        }
        else {
          FUN_00d50b20();
          local_70 = '\0';
        }
        plVar7 = local_78;
        if (local_78 != (int64_t *)0x0) goto LAB_01e2d8a8;
        plVar7 = (int64_t *)0x0;
        bVar10 = false;
        local_58 = (int64_t *)0x0;
        bVar8 = false;
      }
LAB_01e2d9e7:
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
    }
    bVar9 = 0;
    bVar1 = true;
    if (lVar4 != 0) {
      FUN_00d50b20();
      bVar1 = true;
      bVar9 = 0;
    }
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_028b9520;
  if (bVar10) {
    FUN_00d8ede0();
    lVar2 = g_028b9530;
    if ((local_70 == '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b00();
      lVar2 = g_028b9530;
    }
    g_028b9530 = lVar2;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (local_78 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 1) = 0;
    if (bVar8) {
      *this_ptr = local_58;
    }
    else {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *this_ptr = local_58;
    }
    *(void*)(this_ptr + 1) = 1;
    bVar8 = false;
    goto joined_r0x01e2dc4b;
  }
  if (g_028b9520 != 0) {
    FUN_00d50b00();
  }
  FUN_000175c0();
  if (local_78 == plVar7) {
    if ((bool)(bVar9 & local_78 != (int64_t *)0x0)) {
      if (local_70 != '\0') goto LAB_01e2dc1a;
      bVar1 = true;
      FUN_00d50b00();
    }
  }
  else {
    if (local_70 == '\0') {
      if (local_78 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      bVar10 = (bool)(bVar1 & plVar7 != (int64_t *)0x0);
      bVar1 = true;
      plVar7 = local_78;
      if (bVar10) {
        FUN_00d50b20();
        goto LAB_01e2dc93;
      }
    }
    else {
      bVar10 = plVar7 != (int64_t *)0x0;
      plVar7 = local_78;
      if ((bool)(bVar1 & bVar10)) {
        FUN_00d50b20();
      }
LAB_01e2dc1a:
      local_70 = '\0';
    }
    bVar1 = true;
  }
LAB_01e2dc93:
  lVar4 = g_028b9560;
  if (plVar7 == (int64_t *)0x0) {
    cVar6 = '\0';
  }
  else {
    if (g_028b9560 != 0) {
      FUN_00d50b00();
    }
    cVar6 = (**(code **)(*plVar7 + 0x50))();
    plVar3 = g_028b9580;
    if (cVar6 == '\0') {
      cVar6 = '\0';
    }
    else {
      if (g_028b9580 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_40 = plVar3;
      cVar6 = FUN_00c9ff50();
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (cVar6 != '\0') {
    FUN_01cb4790();
    if (local_40 == (int64_t *)0x0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      goto joined_r0x01e2dc4b;
    }
    FUN_00d50b00();
    plVar3 = g_028b9580;
    if (g_028b9580 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_000175c0();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*local_40 + 0x3b8))();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      FUN_01d51d50();
    }
    FUN_01d51a40();
    if (local_40 != (int64_t *)0x0) {
      *(void*)(local_40 + 0xc) = 1;
      *this_ptr = local_40;
      *(void*)(this_ptr + 1) = 1;
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (local_40 != (int64_t *)0x0) goto joined_r0x01e2dc4b;
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
joined_r0x01e2dc4b:
  if (local_78 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar1) && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar8) && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

