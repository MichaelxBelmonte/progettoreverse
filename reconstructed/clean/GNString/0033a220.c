// Function: FUN_0033a220
// Address: 0033a220
// Size: 1943 bytes
// Class: GNString
// String references:
//   "GNString"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_0033a220(void)

{
  char cVar1;
  int64_t **pplVar2;
  int iVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t *this_ptr;
  int iVar6;
  uint32_t uVar7;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
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
  int64_t *local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  uint64_t local_58;
  int local_50;
  int64_t *local_48;
  char local_40;
  char local_38 [8];
  
  FUN_0009c8e0();
  iVar3 = *(int *)((int64_t)this_ptr + 0x19c);
  if (iVar3 == 0) {
    FUN_000b6980();
    local_c8 = *(int64_t *)(local_70[2] + (int64_t)(int)this_ptr[0x33] * 8);
    local_c0 = 0;
    if (local_c8 != 0) {
      FUN_00d50b00();
    }
    local_c0 = '\x01';
    FUN_0009ce00();
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 == '\0') {
      return;
    }
    if (local_70 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  FUN_000b6980();
  iVar6 = *(int *)((int64_t)local_70 + 0xc);
  if (local_68 != '\0') {
    FUN_00d50b20();
  }
  if (iVar3 == iVar6) {
    FUN_000b6980();
    plVar5 = local_70;
    if (local_68 == '\0') {
      if (local_70 == (int64_t *)0x0) {
        return;
      }
      FUN_00d50b00();
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (local_70 == (int64_t *)0x0) {
      return;
    }
    local_68 = 0;
    local_70 = (int64_t *)0x0;
    local_60 = plVar5;
    local_50 = 0;
    local_58._0_4_ = 0;
    local_58._4_4_ = 0;
    if (0 < *(int *)((int64_t)plVar5 + 0xc)) {
      lVar4 = 0;
      do {
        local_70 = *(int64_t **)(plVar5[2] + lVar4 * 8);
        FUN_0009ce00();
        lVar4 = lVar4 + 1;
        local_58._0_4_ = (int)lVar4;
      } while ((int)local_58 < *(int *)((int64_t)plVar5 + 0xc));
    }
    FUN_00018280();
    FUN_00d50b20();
    return;
  }
  uVar7 = (**(code **)(*this_ptr + 0x4a0))();
  plVar5 = local_70;
  if (local_68 == '\0') {
    if (local_70 == (int64_t *)0x0) goto LAB_0033a934;
    uVar7 = FUN_00d50b00();
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      uVar7 = FUN_00d50b20();
    }
  }
  else if (local_70 == (int64_t *)0x0) goto LAB_0033a934;
  local_68 = '\0';
  local_70 = (int64_t *)0x0;
  local_60 = plVar5;
  local_58 = 0xffffffff;
  local_50 = 0;
  iVar3 = 0;
  while( true ) {
    iVar6 = 0;
    if (iVar3 != 0) {
      if (iVar3 < 1) {
        iVar6 = -iVar3;
      }
      else {
        local_58 = CONCAT44(local_58._4_4_,(int)local_58 - iVar3);
        FUN_00d23690(uVar7,iVar3);
        local_50 = local_50 + iVar3;
        iVar6 = 0;
      }
      local_58 = CONCAT44(iVar6,(int)local_58);
    }
    lVar4 = (int64_t)(int)local_58;
    iVar3 = (int)local_58 + 1;
    local_58 = CONCAT44(local_58._4_4_,iVar3);
    if (*(int *)((int64_t)local_60 + 0xc) <= iVar3) break;
    plVar5 = *(int64_t **)(local_60[2] + 8 + lVar4 * 8);
    local_70 = plVar5;
    local_48 = plVar5;
    uVar7 = FUN_000f5df0();
    pplVar2 = (int64_t **)&g_02802688;
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x360))();
      cVar1 = FUN_00e85ea0();
      pplVar2 = &local_48;
      uVar7 = extraout_XMM0_Da;
      if (cVar1 == '\0') {
        pplVar2 = (int64_t **)&g_02802688;
      }
    }
    iVar3 = iVar6;
    if (*pplVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0xa18))();
      plVar5 = local_48;
      lVar4 = g_02702948;
      if (g_02702948 != 0) {
        FUN_00d50b00();
      }
      cVar1 = (**(code **)(*plVar5 + 0x50))();
      uVar7 = extraout_XMM0_Da_00;
      if (lVar4 != 0) {
        uVar7 = FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        uVar7 = FUN_00d50b20();
      }
      if (cVar1 != '\0') {
        uVar7 = FUN_01e4ec80();
        lVar4 = g_02702960;
        if (g_02702960 != 0) {
          uVar7 = FUN_00d50b00();
        }
        local_e8 = lVar4;
        local_e0 = '\x01';
        FUN_000175c0(uVar7,&local_e8);
        plVar5 = local_48;
        FUN_00053ac0();
        pplVar2 = (int64_t **)&g_02802688;
        if (plVar5 != (int64_t *)0x0) {
          (**(code **)(*plVar5 + 0x360))();
          cVar1 = FUN_00e85ea0();
          pplVar2 = &local_48;
          if (cVar1 == '\0') {
            pplVar2 = (int64_t **)&g_02802688;
          }
        }
        plVar5 = *pplVar2;
        local_38[0] = *(char *)(pplVar2 + 1);
        pplVar2 = pplVar2 + 1;
        if (local_38[0] == '\0') {
          pplVar2 = (int64_t **)local_38;
        }
        *(void*)pplVar2 = 0;
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        cVar1 = FUN_00d45ad0();
        uVar7 = extraout_XMM0_Da_01;
        if (cVar1 != '\0') {
          local_98 = plVar5;
          uVar7 = FUN_01e4ec80();
          lVar4 = g_02702950;
          if (g_02702950 != 0) {
            uVar7 = FUN_00d50b00();
          }
          local_d8 = lVar4;
          local_d0 = '\x01';
          FUN_000175c0(uVar7,&local_d8);
          plVar5 = local_48;
          if ((g_026fd0c0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
          pplVar2 = (int64_t **)&g_02802688;
          if (plVar5 != (int64_t *)0x0) {
            (**(code **)(*plVar5 + 0x360))();
            cVar1 = FUN_00e85ea0();
            pplVar2 = &local_48;
            if (cVar1 == '\0') {
              pplVar2 = (int64_t **)&g_02802688;
            }
          }
          local_78 = 0;
          plVar5 = *pplVar2;
          if (*(char *)(pplVar2 + 1) == '\0') {
            if (plVar5 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            *(void*)(pplVar2 + 1) = 0;
          }
          local_78 = '\x01';
          local_80 = plVar5;
          iVar3 = FUN_000b7060();
          if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_d0 != '\0') && (local_d8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          FUN_000b6980();
          lVar4 = *(int64_t *)(local_48[2] + (int64_t)iVar3 * 8);
          local_a0 = 0;
          if (lVar4 != 0) {
            FUN_00d50b00();
          }
          local_a0 = '\x01';
          local_a8 = lVar4;
          uVar7 = FUN_0009ce00();
          plVar5 = local_98;
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            uVar7 = FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            uVar7 = FUN_00d50b20();
          }
        }
        if ((local_38[0] != '\0') && (plVar5 != (int64_t *)0x0)) {
          uVar7 = FUN_00d50b20();
        }
        iVar3 = local_58._4_4_;
      }
    }
  }
  FUN_0033c540();
  FUN_00d50b20();
LAB_0033a934:
  FUN_000b6980();
  local_b8 = *(int64_t *)(local_70[2] + (int64_t)(int)this_ptr[0x33] * 8);
  local_b0 = 0;
  if (local_b8 != 0) {
    FUN_00d50b00();
  }
  local_b0 = '\x01';
  FUN_0009ce00();
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

