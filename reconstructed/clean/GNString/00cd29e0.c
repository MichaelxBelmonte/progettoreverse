// Function: FUN_00cd29e0
// Address: 00cd29e0
// Size: 1960 bytes
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


void FUN_00cd29e0(void)

{
  bool bVar1;
  int64_t *plVar2;
  char cVar3;
  void*puVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int iVar7;
  int64_t *arg1;
  void*this_ptr;
  int64_t **pplVar8;
  bool bVar9;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar10;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  void*local_50;
  uint64_t local_48;
  int local_40;
  int64_t *local_38;
  
  if (*arg1 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    if ((g_028a7350 == (void*)0x0) || (g_028a7359 == '\0')) {
      FUN_00e8cb50();
      if (g_028a7350 == (void*)0x0) {
        puVar4 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &g_02572358;
        (*g_02572370)();
        bVar9 = g_028a7350 == (void*)0x0;
        g_028a7350 = puVar4;
        if (((bVar9) || (FUN_00d50b20(), g_028a7350 != (void*)0x0)) &&
           (g_028a7358 == '\0')) {
          g_028a7358 = '\x01';
          FUN_00e8cb90();
        }
        plVar5 = (int64_t *)FUN_00e8fc40();
        FUN_00d4ff40();
        *plVar5 = (int64_t)&g_025736a8;
        plVar5[3] = 0;
        *(void*)(plVar5 + 4) = 0;
        (*g_025736c0)();
        bVar9 = g_028a7360 == (int64_t *)0x0;
        g_028a7360 = plVar5;
        if (((bVar9) || (FUN_00d50b20(), g_028a7360 != (int64_t *)0x0)) && (g_028a7368 == '\0')
           ) {
          g_028a7368 = '\x01';
          FUN_00e8cb90();
        }
        g_028a7359 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028a7359 = '\x01';
        FUN_00e8cb70();
      }
    }
    (**(code **)(*g_028a7360 + 0x368))();
    bVar9 = false;
    if (g_028a7350 != (void*)0x0) {
      local_58 = '\0';
      local_60 = (int64_t *)0x0;
      local_50 = g_028a7350;
      local_48 = 0xffffffff;
      local_40 = 0;
      while( true ) {
        lVar6 = (int64_t)(int)local_48;
        iVar7 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,iVar7);
        if (*(int *)((int64_t)local_50 + 0xc) <= iVar7) break;
        local_60 = *(int64_t **)(local_50[2] + 8 + lVar6 * 8);
        plVar5 = (int64_t *)*arg1;
        lVar6 = local_60[6];
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        cVar3 = (**(code **)(*plVar5 + 0x50))();
        uVar10 = extraout_XMM0_Da;
        if (lVar6 != 0) {
          uVar10 = FUN_00d50b20();
        }
        plVar5 = local_60;
        if (cVar3 != '\0') {
          if (local_60 != (int64_t *)0x0) {
            if (local_58 == '\0') {
              FUN_00d50b00();
            }
            else {
              local_58 = '\0';
            }
            bVar1 = true;
            FUN_00cdd7d0();
            bVar9 = true;
            if (plVar5 != (int64_t *)0x0) goto LAB_00cd2f20;
            goto LAB_00cd2c6b;
          }
          break;
        }
        if (local_48._4_4_ != 0) {
          if (local_48._4_4_ < 1) {
            iVar7 = -local_48._4_4_;
          }
          else {
            local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
            FUN_00d23690(uVar10,local_48._4_4_);
            local_40 = local_40 + local_48._4_4_;
            iVar7 = 0;
          }
          local_48 = CONCAT44(iVar7,(int)local_48);
        }
      }
      FUN_00cdd7d0();
      bVar9 = false;
    }
LAB_00cd2c6b:
    bVar1 = bVar9;
    FUN_00d6f370();
    local_b0 = g_02774d60;
    if (g_02774d60 != 0) {
      FUN_00d50b00();
    }
    local_a8 = '\x01';
    local_a0 = 0;
    local_98 = '\0';
    uVar10 = FUN_00d704d0(&local_a0,&local_b0);
    plVar5 = local_60;
    if (g_026fdd40 == '\0') {
      local_38 = (int64_t *)&g_026fdd40;
      iVar7 = ___cxa_guard_acquire();
      uVar10 = extraout_XMM0_Da_03;
      if (iVar7 != 0) {
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
        uVar10 = ___cxa_guard_release();
      }
    }
    pplVar8 = (int64_t **)&g_02802688;
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x360))();
      cVar3 = FUN_00e85ea0();
      uVar10 = extraout_XMM0_Da_00;
      if (cVar3 != '\0') {
        if (g_026fd0c0 == '\0') {
          local_38 = (int64_t *)&g_026fd0c0;
          iVar7 = ___cxa_guard_acquire();
          if (iVar7 != 0) {
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
        }
        cVar3 = FUN_00e8db60();
        uVar10 = extraout_XMM0_Da_01;
        if (cVar3 != '\0') {
          if (g_026fd0c0 == '\0') {
            local_38 = (int64_t *)&g_026fd0c0;
            iVar7 = ___cxa_guard_acquire();
            if (iVar7 != 0) {
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
          }
          cVar3 = FUN_00e8dc10();
          pplVar8 = &local_60;
          uVar10 = extraout_XMM0_Da_02;
          if (cVar3 == '\0') {
            pplVar8 = (int64_t **)&g_02802688;
          }
        }
      }
    }
    plVar5 = *pplVar8;
    if (*(char *)(pplVar8 + 1) == '\0') {
      if (plVar5 != (int64_t *)0x0) {
        uVar10 = FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar8 + 1) = 0;
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      uVar10 = FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      uVar10 = FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      uVar10 = FUN_00d50b20();
    }
    local_90 = *arg1;
    local_88 = '\0';
    local_38 = plVar5;
    FUN_01de4130(uVar10,&local_90);
    plVar2 = local_60;
    if (local_58 == '\0') {
      if (((local_60 != (int64_t *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
         (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58 = '\0';
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if (*arg1 == 0) {
      plVar5 = (int64_t *)0x0;
    }
    else {
      local_80 = plVar2;
      local_78 = '\0';
      FUN_00cddf30();
      lVar6 = local_70;
      if (local_68 == '\0') {
        if (local_70 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      FUN_00cd1020();
      plVar5 = local_60;
      if (local_60 == (int64_t *)0x0) {
        plVar5 = (int64_t *)0x0;
      }
      else {
        bVar1 = true;
        if (local_58 == '\0') {
          FUN_00d50b00();
        }
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
LAB_00cd2f20:
    (**(code **)(*g_028a7360 + 0x378))();
    *(void*)(this_ptr + 1) = 0;
    if ((!bVar1) && (plVar5 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    *this_ptr = plVar5;
    *(void*)(this_ptr + 1) = 1;
  }
  return;
}

