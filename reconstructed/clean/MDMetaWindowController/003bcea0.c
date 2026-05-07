// Function: FUN_003bcea0
// Address: 003bcea0
// Size: 4142 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"

void FUN_003bcea0(char param_1,char param_2,uint32_t param_3)

{
  bool bVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  bool bVar5;
  char *pcVar6;
  int64_t lVar7;
  int64_t *plVar8;
  int iVar9;
  byte unaff_SIL;
  int64_t *this_ptr;
  int64_t *plVar10;
  bool bVar11;
  uint32_t uVar12;
  int64_t *local_180;
  char local_178;
  int64_t *local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t *local_150;
  char local_148;
  int64_t *local_140;
  char local_138;
  int64_t *local_130;
  uint32_t local_124;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t local_c8;
  char local_c0;
  void*local_a0;
  char local_88;
  undefined7 uStack_87;
  char local_80;
  int64_t *local_78;
  char local_70 [8];
  int64_t *local_68;
  uint64_t local_60;
  int local_58;
  char local_50 [8];
  int64_t *local_48;
  int64_t *in_stack_ffffffffffffffc0;
  int64_t *plVar13;
  char local_38;
  
  local_124 = param_3;
  FUN_003ba530();
  plVar8 = local_78;
  local_50[0] = local_70[0];
  pcVar6 = local_50;
  if (local_70[0] != '\0') {
    pcVar6 = local_70;
  }
  *pcVar6 = '\0';
  if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 == (int64_t *)0x0) {
    return;
  }
  if (((int64_t *)this_ptr[0x10] == (int64_t *)0x0) ||
     (cVar4 = (**(code **)(*(int64_t *)this_ptr[0x10] + 0x9a0))(), cVar4 == '\0'))
  goto LAB_003bde9f;
  FUN_01e40eb0();
  plVar3 = local_78;
  if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 == (int64_t *)0x0) goto LAB_003bde9f;
  if (unaff_SIL == 0) {
    if (param_2 != '\0') {
      FUN_01c00e50();
      FUN_01bbfb40();
      FUN_01beea30();
      plVar3 = local_78;
      if (local_70[0] == '\0') {
        if (((local_78 != (int64_t *)0x0) && (FUN_00d50b00(), local_70[0] != '\0')) &&
           (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_70[0] = '\0';
      }
      if ((local_38 != '\0') && (in_stack_ffffffffffffffc0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
        FUN_00d50b20();
      }
      FUN_01c00e50();
      if (local_38 == '\0') {
        if (in_stack_ffffffffffffffc0 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_70[0] = '\0';
      local_78 = in_stack_ffffffffffffffc0;
      FUN_00d23f50();
      if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (in_stack_ffffffffffffffc0 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (in_stack_ffffffffffffffc0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01c00e50();
      FUN_01bbfb40();
      (**(code **)(*local_78 + 0x9d0))();
      if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (in_stack_ffffffffffffffc0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  else if (param_2 == '\0') {
    if ((param_1 == '\0') && ((char)local_124 == '\0')) {
      FUN_01c00e50();
      FUN_01bbfb40();
      plVar3 = local_78;
      FUN_01c00e50();
      local_108 = 0;
      if (local_c0 == '\0') {
        if (local_c8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_c0 = '\0';
      }
      local_108 = '\x01';
      local_110 = local_c8;
      FUN_003bc740();
      local_118 = 0;
      local_120 = CONCAT71(uStack_87,local_88);
      if (local_80 == '\0') {
        if (local_120 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_80 = '\0';
      }
      local_118 = '\x01';
      (**(code **)(*plVar3 + 0x9d0))();
      if ((local_118 != '\0') && (local_120 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
        FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (in_stack_ffffffffffffffc0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_01c00e50();
    FUN_01bbfb40();
    FUN_01beea30();
    plVar3 = local_78;
    if (local_70[0] == '\0') {
      if (((local_78 != (int64_t *)0x0) && (FUN_00d50b00(), local_70[0] != '\0')) &&
         (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_70[0] = '\0';
    }
    if ((local_38 != '\0') && (in_stack_ffffffffffffffc0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
      FUN_00d50b20();
    }
    FUN_01c00e50();
    if (local_38 == '\0') {
      if (in_stack_ffffffffffffffc0 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_70[0] = '\0';
    local_78 = in_stack_ffffffffffffffc0;
    FUN_00d235a0();
    if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (in_stack_ffffffffffffffc0 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (in_stack_ffffffffffffffc0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01c00e50();
    FUN_01bbfb40();
    (**(code **)(*local_78 + 0x9d0))();
    if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (in_stack_ffffffffffffffc0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_003bb820();
  plVar3 = local_78;
  if ((local_70[0] == '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if (param_1 == '\0') {
    bVar11 = false;
LAB_003bd86f:
    local_a0 = (void*)0x0;
    bVar1 = true;
    plVar10 = (int64_t *)0x0;
  }
  else {
    local_48 = plVar8;
    FUN_00d50b00();
    local_88 = '\0';
    in_stack_ffffffffffffffc0 = this_ptr;
    do {
      (**(code **)(*in_stack_ffffffffffffffc0 + 0x370))();
      plVar8 = local_78;
      if (local_78 == in_stack_ffffffffffffffc0) {
        if (((local_88 == '\0') && (local_78 != (int64_t *)0x0)) &&
           (plVar8 = in_stack_ffffffffffffffc0, local_70[0] != '\0')) goto LAB_003bd507;
      }
      else {
        if (local_70[0] == '\0') {
          if (local_88 == '\0') {
            pcVar6 = &local_88;
          }
          else {
            FUN_00d50b20();
            pcVar6 = &local_88;
          }
        }
        else {
          if (local_88 != '\0') {
            FUN_00d50b20();
          }
LAB_003bd507:
          local_88 = '\x01';
          pcVar6 = local_70;
        }
        *pcVar6 = '\0';
        in_stack_ffffffffffffffc0 = plVar8;
      }
      if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((g_026fddb0 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
        g_026e0ab8 = FUN_00015ff0();
        g_026e0aa0 = "MDMetaWindowController";
        g_026e0aa8 = 0x198;
        g_026e0ab0 = FUN_0006dea0;
        g_026e0ac0 = 0;
        ram_00000000026e0ac8 = 0;
        g_026e0ad0 = 0;
        g_026e0b48 = 0;
        ram_00000000026e0b50 = 0;
        g_026e0b58 = 0;
        g_026e0b5a = 1;
        g_026e0ad8 = 0;
        ram_00000000026e0ae0 = 0;
        g_026e0ae8 = 0;
        ram_00000000026e0af0 = 0;
        g_026e0af8 = 0;
        ram_00000000026e0b00 = 0;
        g_026e0b08 = 0;
        ram_00000000026e0b10 = 0;
        g_026e0b18 = 0;
        ram_00000000026e0b20 = 0;
        g_026e0b28 = 0;
        ram_00000000026e0b30 = 0;
        g_026e0b38 = 0;
        ram_00000000026e0b40 = 0;
        g_026e0b63 = 0;
        g_026e0b5b = 0;
        ___cxa_guard_release();
      }
      plVar8 = &g_02802688;
      if (in_stack_ffffffffffffffc0 != (int64_t *)0x0) {
        (**(code **)(*in_stack_ffffffffffffffc0 + 0x360))();
        cVar4 = FUN_00e85ea0();
        plVar8 = (int64_t *)&stack0xffffffffffffffc0;
        if (cVar4 == '\0') {
          plVar8 = &g_02802688;
        }
      }
      if (*plVar8 != 0) {
        if ((local_88 == '\0') && (in_stack_ffffffffffffffc0 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        bVar11 = in_stack_ffffffffffffffc0 != (int64_t *)0x0;
        plVar10 = in_stack_ffffffffffffffc0;
        goto LAB_003bd696;
      }
    } while (in_stack_ffffffffffffffc0 != (int64_t *)0x0);
    bVar11 = false;
    plVar10 = (int64_t *)0x0;
LAB_003bd696:
    plVar8 = local_48;
    FUN_00d50b20();
    if (plVar10 == (int64_t *)0x0) goto LAB_003bd86f;
    local_a0 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *local_a0 = &g_02572358;
    uVar12 = (*g_02572370)();
    if (plVar3 != (int64_t *)0x0) {
      local_70[0] = '\0';
      local_78 = (int64_t *)0x0;
      local_68 = plVar3;
      local_60 = 0xffffffff;
      local_58 = 0;
      iVar9 = 0;
      while( true ) {
        if (iVar9 != 0) {
          if (iVar9 < 1) {
            iVar9 = -iVar9;
          }
          else {
            local_60 = CONCAT44(local_60._4_4_,(int)local_60 - iVar9);
            FUN_00d23690(uVar12,iVar9);
            local_58 = local_58 + local_60._4_4_;
            iVar9 = 0;
          }
          local_60 = CONCAT44(iVar9,(int)local_60);
        }
        lVar7 = (int64_t)(int)local_60;
        iVar9 = (int)local_60 + 1;
        local_60 = CONCAT44(local_60._4_4_,iVar9);
        if (*(int *)((int64_t)local_68 + 0xc) <= iVar9) break;
        local_180 = *(int64_t **)(local_68[2] + 8 + lVar7 * 8);
        local_178 = '\0';
        local_78 = local_180;
        uVar12 = FUN_006500a0(local_68[2],&local_180);
        if (local_38 == '\0') {
          if (in_stack_ffffffffffffffc0 != (int64_t *)0x0) {
            uVar12 = FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_178 != '\0') && (local_180 != (int64_t *)0x0)) {
          uVar12 = FUN_00d50b20();
        }
        if (in_stack_ffffffffffffffc0 != (int64_t *)0x0) {
          cVar4 = FUN_003b7710();
          plVar8 = local_78;
          if (cVar4 != '\0') {
            local_38 = '\0';
            FUN_00d21140();
            in_stack_ffffffffffffffc0 = plVar8;
          }
          uVar12 = FUN_00d50b20();
        }
        iVar9 = local_60._4_4_;
      }
      FUN_000be170();
    }
    bVar1 = false;
    plVar8 = local_48;
  }
  uVar12 = FUN_003bb720();
  local_130 = local_78;
  uVar12 = FUN_003bef50(uVar12,(char)local_124);
  local_f8 = 0;
  if (local_38 == '\0') {
    if (in_stack_ffffffffffffffc0 != (int64_t *)0x0) {
      uVar12 = FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_f8 = '\x01';
  local_170 = plVar3;
  local_168 = '\0';
  local_100 = in_stack_ffffffffffffffc0;
  FUN_003b7a90(uVar12,&local_170);
  local_e8 = 0;
  local_f0 = CONCAT71(uStack_87,local_88);
  local_160 = g_026fe4a8;
  if (local_80 == '\0') {
    if (local_f0 != 0) {
      FUN_00d50b00();
      local_160 = g_026fe4a8;
    }
  }
  else {
    local_80 = '\0';
  }
  local_e8 = '\x01';
  g_026fe4a8 = local_160;
  if (local_160 != 0) {
    local_e8 = '\x01';
    FUN_00d50b00();
  }
  plVar2 = local_130;
  local_158 = '\x01';
  FUN_004b1320(&local_f0,(uint)unaff_SIL * 2,&local_160,1);
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
    FUN_00d50b20();
  }
  if ((local_168 != '\0') && (local_170 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70[0] != '\0') && (plVar2 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_a0 != (void*)0x0) {
    FUN_01c00e50();
    FUN_01bbfb40();
    FUN_002eacb0();
    local_d8 = 0;
    if (local_38 == '\0') {
      if (in_stack_ffffffffffffffc0 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_d8 = '\x01';
    local_e0 = in_stack_ffffffffffffffc0;
    FUN_003231a0();
    plVar2 = local_78;
    if (local_70[0] == '\0') {
      if (((local_78 != (int64_t *)0x0) && (FUN_00d50b00(), local_70[0] != '\0')) &&
         (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_70[0] = '\0';
    }
    if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (in_stack_ffffffffffffffc0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      local_70[0] = '\0';
      local_78 = (int64_t *)0x0;
      local_68 = plVar3;
      local_60 = 0xffffffff;
      local_58 = 0;
      local_60._4_4_ = 0;
      bVar5 = false;
      local_48 = plVar8;
      while( true ) {
        if (local_60._4_4_ != 0) {
          if (local_60._4_4_ < 1) {
            iVar9 = -local_60._4_4_;
          }
          else {
            iVar9 = (int)local_60 - local_60._4_4_;
            local_60 = CONCAT44(local_60._4_4_,iVar9);
            FUN_00d23690();
            local_58 = local_58 + local_60._4_4_;
            iVar9 = 0;
          }
          local_60 = CONCAT44(iVar9,(int)local_60);
        }
        lVar7 = (int64_t)(int)local_60;
        iVar9 = (int)local_60 + 1;
        local_60 = CONCAT44(local_60._4_4_,iVar9);
        if (*(int *)((int64_t)local_68 + 0xc) <= iVar9) break;
        local_150 = *(int64_t **)(local_68[2] + 8 + lVar7 * 8);
        local_148 = '\0';
        local_78 = local_150;
        FUN_006500a0(local_68[2],&local_150);
        if (local_38 == '\0') {
          if (in_stack_ffffffffffffffc0 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_148 != '\0') && (local_150 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (in_stack_ffffffffffffffc0 != (int64_t *)0x0) {
          cVar4 = FUN_003b7710();
          plVar8 = local_78;
          if (cVar4 == '\0') {
LAB_003bdcc5:
            cVar4 = FUN_003b7710();
            plVar8 = local_78;
            if (cVar4 == '\0') {
              local_38 = '\0';
              cVar4 = FUN_00d23d70();
              plVar13 = local_78;
              in_stack_ffffffffffffffc0 = plVar8;
              if (cVar4 != '\0') {
                FUN_00d23f50();
                goto LAB_003bdbc0;
              }
            }
          }
          else {
            local_38 = '\0';
            cVar4 = FUN_00d23d70();
            plVar13 = local_78;
            in_stack_ffffffffffffffc0 = plVar8;
            if (cVar4 != '\0') goto LAB_003bdcc5;
            FUN_00d235a0();
LAB_003bdbc0:
            local_38 = '\0';
            bVar5 = true;
            in_stack_ffffffffffffffc0 = plVar13;
          }
          FUN_00d50b20();
        }
      }
      FUN_000be170();
      if (bVar5) {
        FUN_01c00e50();
        FUN_01bbfb40();
        local_140 = plVar2;
        local_138 = '\0';
        FUN_002ea230();
        if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (in_stack_ffffffffffffffc0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (!bVar1) {
      FUN_00d50b20();
    }
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar11) && (plVar10 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_003bde9f:
  if (local_50[0] != '\0') {
    FUN_00d50b20();
  }
  return;
}

