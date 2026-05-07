// Function: FUN_00cd9fa0
// Address: 00cd9fa0
// Size: 1876 bytes
// Class: GNString
// String references:
//   "/%@"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int64_t * FUN_00cd9fa0(void)

{
  int64_t *plVar1;
  bool bVar2;
  bool bVar3;
  int64_t lVar4;
  char cVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int iVar6;
  int64_t lVar7;
  int64_t *plVar8;
  uint uVar9;
  int64_t local_120;
  char local_118;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
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
  int64_t local_70;
  char local_68;
  int64_t local_50;
  char local_48;
  
  lVar7 = g_02704060;
  if (g_02704060 != 0) {
    FUN_00d50b00();
  }
  cVar5 = FUN_00d90870();
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  lVar7 = g_02704060;
  if (cVar5 == '\0') {
    (**(code **)(*arg1 + 0x368))();
    local_f0 = g_02704060;
    if (g_02704060 != 0) {
      FUN_00d50b00();
    }
    local_e8 = '\x01';
    FUN_00d91000(1,&local_f0);
    if (local_70 == 0) {
      local_70 = 0;
      bVar2 = false;
    }
    else if (local_68 == '\0') {
      FUN_00d50b00();
      bVar2 = true;
    }
    else {
      bVar2 = true;
    }
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    lVar7 = g_02704060;
    if (g_02704060 != 0) {
      FUN_00d50b00();
    }
    local_e0 = lVar7;
    local_d8 = '\x01';
    FUN_00d91000(1,&local_e0);
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    FUN_00d214d0();
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (g_02704060 != 0) {
      FUN_00d50b00();
    }
    local_100 = lVar7;
    local_f8 = '\x01';
    FUN_00d91000(1,&local_100);
    if (local_70 == 0) {
      local_70 = 0;
      bVar2 = false;
    }
    else if (local_68 == '\0') {
      FUN_00d50b00();
      bVar2 = true;
    }
    else {
      bVar2 = true;
    }
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
  }
  uVar9 = *(uint *)(local_70 + 0xc);
  if ((int)uVar9 < 1) {
    bVar3 = false;
    plVar8 = (int64_t *)0x0;
  }
  else {
    lVar7 = (uint64_t)uVar9 + 1;
    plVar8 = (int64_t *)0x0;
    bVar3 = false;
    do {
      uVar9 = uVar9 - 1;
      plVar1 = *(int64_t **)(*(int64_t *)(local_70 + 0x10) + (uint64_t)uVar9 * 8);
      if (plVar8 == plVar1) {
        lVar4 = g_02774da0;
        if ((!bVar3) && (plVar8 != (int64_t *)0x0)) {
          bVar3 = true;
          FUN_00d50b00();
          lVar4 = g_02774da0;
        }
      }
      else {
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar3) && (plVar8 != (int64_t *)0x0)) {
          FUN_00d50b20();
          bVar3 = true;
          plVar8 = plVar1;
          lVar4 = g_02774da0;
        }
        else {
          bVar3 = true;
          plVar8 = plVar1;
          lVar4 = g_02774da0;
        }
      }
      g_02774da0 = lVar4;
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      local_c8 = '\x01';
      local_d0 = lVar4;
      cVar5 = (**(code **)(*plVar8 + 0x50))();
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if (cVar5 != '\0') {
        FUN_00d23620();
      }
      lVar7 = lVar7 + -1;
    } while (1 < lVar7);
    if (0 < *(int *)(local_70 + 0xc)) {
      iVar6 = 0;
      do {
        plVar1 = *(int64_t **)(*(int64_t *)(local_70 + 0x10) + (int64_t)iVar6 * 8);
        if (plVar8 == plVar1) {
          lVar7 = g_02775678;
          if (!bVar3) {
            bVar3 = true;
            FUN_00d50b00();
            lVar7 = g_02775678;
          }
        }
        else {
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          plVar8 = plVar1;
          if (bVar3) {
            FUN_00d50b20();
            bVar3 = true;
            lVar7 = g_02775678;
          }
          else {
            bVar3 = true;
            lVar7 = g_02775678;
          }
        }
        g_02775678 = lVar7;
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        local_b8 = '\x01';
        local_c0 = lVar7;
        cVar5 = (**(code **)(*plVar8 + 0x50))();
        if ((local_b8 != '\0') && (local_c0 != 0)) {
          FUN_00d50b20();
        }
        if (cVar5 != '\0') {
          if (iVar6 == 0) {
            *(void*)(this_ptr + 1) = 0;
            *this_ptr = 0;
            goto LAB_00cda6cf;
          }
          FUN_00d23620();
          FUN_00d23620();
          iVar6 = iVar6 + -2;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(local_70 + 0xc));
    }
  }
  lVar7 = arg1[8];
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  lVar4 = g_02704060;
  local_a8 = '\0';
  local_b0 = local_70;
  if (g_02704060 != 0) {
    FUN_00d50b00();
  }
  local_a0 = lVar4;
  local_98 = '\x01';
  FUN_00d95130();
  if (local_120 != 0) {
    FUN_00d50b00();
  }
  FUN_00d8cb40();
  lVar4 = local_90;
  if (local_88 == '\0') {
    if (local_90 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_88 = '\0';
  }
  FUN_00cd0c90();
  *(void*)(this_ptr + 1) = 0;
  if (local_48 == '\0') {
    if (local_50 == 0) {
      *this_ptr = 0;
      *(void*)(this_ptr + 1) = 1;
    }
    else {
      FUN_00d50b00();
      *this_ptr = local_50;
      *(void*)(this_ptr + 1) = 1;
    }
  }
  else {
    *this_ptr = local_50;
    *(void*)(this_ptr + 1) = 1;
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (local_120 != 0) {
    FUN_00d50b20();
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
LAB_00cda6cf:
  if ((bVar3) && (plVar8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar2) {
    FUN_00d50b20();
  }
  return this_ptr;
}

