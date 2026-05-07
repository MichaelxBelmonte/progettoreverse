// Function: FUN_00338e90
// Address: 00338e90
// Size: 2532 bytes
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


uint64_t FUN_00338e90(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  uint uVar4;
  int64_t lVar5;
  int64_t **pplVar6;
  int64_t **pplVar7;
  int iVar8;
  int iVar9;
  int64_t *this_ptr;
  uint32_t uVar10;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t *local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  uint local_e4;
  int64_t *local_e0;
  char local_d8;
  undefined7 uStack_d7;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  char local_88;
  undefined7 uStack_87;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  uint64_t local_60;
  int local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  if (param_2 == 0) {
    return 1;
  }
  FUN_01d3a560();
  plVar1 = local_78;
  if ((((local_70 == '\0') && (local_78 != (int64_t *)0x0)) && (FUN_00d50b00(), local_70 != '\0'))
     && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_e0 = plVar1;
  uVar4 = FUN_01d3b590();
  if ((uVar4 & 2) == 0) {
    (**(code **)(*this_ptr + 0x4a0))();
    plVar1 = local_78;
    if (local_70 == '\0') {
      if (local_78 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00339106;
      }
    }
    else if (local_78 != (int64_t *)0x0) {
LAB_00339106:
      local_70 = '\0';
      local_78 = (int64_t *)0x0;
      local_68 = plVar1;
      local_60 = 0xffffffff;
      local_58 = 0;
      local_60._4_4_ = 0;
      local_e4 = uVar4;
      while( true ) {
        if (local_60._4_4_ != 0) {
          if (local_60._4_4_ < 1) {
            iVar8 = -local_60._4_4_;
          }
          else {
            iVar8 = (int)local_60 - local_60._4_4_;
            local_60 = CONCAT44(local_60._4_4_,iVar8);
            FUN_00d23690();
            local_58 = local_58 + local_60._4_4_;
            iVar8 = 0;
          }
          local_60 = CONCAT44(iVar8,(int)local_60);
        }
        lVar5 = (int64_t)(int)local_60;
        iVar8 = (int)local_60 + 1;
        local_60 = CONCAT44(local_60._4_4_,iVar8);
        if (*(int *)((int64_t)local_68 + 0xc) <= iVar8) break;
        plVar1 = *(int64_t **)(local_68[2] + 8 + lVar5 * 8);
        local_78 = plVar1;
        local_40 = plVar1;
        FUN_000f5df0();
        pplVar7 = (int64_t **)&g_02802688;
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x360))();
          cVar3 = FUN_00e85ea0();
          pplVar7 = &local_40;
          if (cVar3 == '\0') {
            pplVar7 = (int64_t **)&g_02802688;
          }
        }
        if (*pplVar7 != (int64_t *)0x0) {
          FUN_01e4ec80();
          FUN_01caeb00();
          uVar10 = FUN_00d46300();
          local_b0 = 0;
          local_b8 = CONCAT71(uStack_87,local_88);
          plVar1 = g_02702958;
          if (local_80 == '\0') {
            if (local_b8 != 0) {
              uVar10 = FUN_00d50b00();
              plVar1 = g_02702958;
            }
          }
          else {
            local_80 = '\0';
          }
          local_b0 = '\x01';
          g_02702958 = plVar1;
          if (plVar1 != (int64_t *)0x0) {
            local_b0 = '\x01';
            uVar10 = FUN_00d50b00();
          }
          local_38 = '\0';
          local_40 = plVar1;
          FUN_00ca0840(uVar10,&local_40);
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
            FUN_00d50b20();
          }
          if ((local_d0 != '\0') && (CONCAT71(uStack_d7,local_d8) != 0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      FUN_0033c540();
      FUN_00d50b20();
    }
  }
  else {
    FUN_01caeb00();
    uVar10 = FUN_01e4ec80();
    local_118 = g_02702958;
    if (g_02702958 != (int64_t *)0x0) {
      uVar10 = FUN_00d50b00();
    }
    local_110 = '\x01';
    pplVar7 = &local_78;
    FUN_000175c0(uVar10,&local_118);
    plVar1 = local_78;
    FUN_00053ac0();
    if (plVar1 == (int64_t *)0x0) {
LAB_00338fc4:
      pplVar7 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_00338fc4;
    }
    plVar1 = *pplVar7;
    local_d8 = *(char *)(pplVar7 + 1);
    pplVar6 = (int64_t **)&local_d8;
    if (local_d8 != '\0') {
      pplVar6 = pplVar7 + 1;
    }
    *(void*)pplVar6 = 0;
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      cVar3 = FUN_00d45ad0();
      if ((cVar3 == '\0') || (iVar8 = FUN_00339ee0(), iVar8 != 1)) {
        FUN_01caeb00();
        FUN_01e4ec80();
        FUN_00d45ad0();
        uVar10 = FUN_00d46300();
        local_c0 = 0;
        local_c8 = CONCAT71(uStack_87,local_88);
        plVar1 = g_02702958;
        if (local_80 == '\0') {
          if (local_c8 != 0) {
            uVar10 = FUN_00d50b00();
            plVar1 = g_02702958;
          }
        }
        else {
          local_80 = '\0';
        }
        local_c0 = '\x01';
        g_02702958 = plVar1;
        if (plVar1 != (int64_t *)0x0) {
          local_c0 = '\x01';
          uVar10 = FUN_00d50b00();
        }
        local_70 = '\0';
        local_78 = plVar1;
        FUN_00ca0840(uVar10,&local_78);
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      if (local_d8 != '\0') {
        FUN_00d50b20();
      }
    }
  }
  FUN_0009c8e0();
  uVar10 = (**(code **)(*this_ptr + 0x4a0))();
  plVar1 = local_78;
  if (local_70 == '\0') {
    if (local_78 == (int64_t *)0x0) goto LAB_00339876;
    uVar10 = FUN_00d50b00();
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
  }
  else if (local_78 == (int64_t *)0x0) goto LAB_00339876;
  local_70 = '\0';
  local_78 = (int64_t *)0x0;
  local_68 = plVar1;
  local_60 = 0xffffffff;
  local_58 = 0;
  iVar8 = 0;
  while( true ) {
    iVar9 = 0;
    if (iVar8 != 0) {
      if (iVar8 < 1) {
        iVar9 = -iVar8;
      }
      else {
        local_60 = CONCAT44(local_60._4_4_,(int)local_60 - iVar8);
        FUN_00d23690(uVar10,iVar8);
        local_58 = local_58 + iVar8;
        iVar9 = 0;
      }
      local_60 = CONCAT44(iVar9,(int)local_60);
    }
    lVar5 = (int64_t)(int)local_60;
    iVar8 = (int)local_60 + 1;
    local_60 = CONCAT44(local_60._4_4_,iVar8);
    if (*(int *)((int64_t)local_68 + 0xc) <= iVar8) break;
    plVar1 = *(int64_t **)(local_68[2] + 8 + lVar5 * 8);
    local_78 = plVar1;
    local_40 = plVar1;
    uVar10 = FUN_000f5df0();
    pplVar7 = (int64_t **)&g_02802688;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      pplVar7 = &local_40;
      uVar10 = extraout_XMM0_Da;
      if (cVar3 == '\0') {
        pplVar7 = (int64_t **)&g_02802688;
      }
    }
    iVar8 = iVar9;
    if (*pplVar7 != (int64_t *)0x0) {
      uVar10 = FUN_01e4ec80();
      plVar1 = g_02702958;
      if (g_02702958 != (int64_t *)0x0) {
        uVar10 = FUN_00d50b00();
      }
      local_108 = plVar1;
      local_100 = '\x01';
      FUN_000175c0(uVar10,&local_108);
      plVar1 = local_40;
      FUN_00053ac0();
      pplVar7 = (int64_t **)&g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar3 = FUN_00e85ea0();
        pplVar7 = &local_40;
        if (cVar3 == '\0') {
          pplVar7 = (int64_t **)&g_02802688;
        }
      }
      plVar1 = *pplVar7;
      local_88 = *(char *)(pplVar7 + 1);
      pplVar7 = pplVar7 + 1;
      if (local_88 == '\0') {
        pplVar7 = (int64_t **)&local_88;
      }
      *(void*)pplVar7 = 0;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      cVar3 = FUN_00d45ad0();
      uVar10 = extraout_XMM0_Da_00;
      if (cVar3 != '\0') {
        uVar10 = FUN_01e4ec80();
        lVar5 = g_02702950;
        if (g_02702950 != 0) {
          uVar10 = FUN_00d50b00();
        }
        local_f8 = lVar5;
        local_f0 = '\x01';
        FUN_000175c0(uVar10,&local_f8);
        plVar2 = local_40;
        if ((g_026fd0c0 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
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
        pplVar7 = (int64_t **)&g_02802688;
        if (plVar2 != (int64_t *)0x0) {
          (**(code **)(*plVar2 + 0x360))();
          cVar3 = FUN_00e85ea0();
          pplVar7 = &local_40;
          if (cVar3 == '\0') {
            pplVar7 = (int64_t **)&g_02802688;
          }
        }
        local_a0 = 0;
        plVar2 = *pplVar7;
        if (*(char *)(pplVar7 + 1) == '\0') {
          if (plVar2 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(void*)(pplVar7 + 1) = 0;
        }
        local_a0 = '\x01';
        local_a8 = plVar2;
        uVar10 = FUN_0009ce00();
        if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
          uVar10 = FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          uVar10 = FUN_00d50b20();
        }
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          uVar10 = FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          uVar10 = FUN_00d50b20();
        }
      }
      if ((local_88 != '\0') && (plVar1 != (int64_t *)0x0)) {
        uVar10 = FUN_00d50b20();
      }
      iVar8 = local_60._4_4_;
    }
  }
  FUN_0033c540();
  FUN_00d50b20();
LAB_00339876:
  FUN_003372c0();
  if (local_e0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return 1;
}

