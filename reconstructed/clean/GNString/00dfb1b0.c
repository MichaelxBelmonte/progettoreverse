// Function: FUN_00dfb1b0
// Address: 00dfb1b0
// Size: 5022 bytes
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


void* FUN_00dfb1b0(int64_t *param_1)

{
  bool bVar1;
  char cVar2;
  int64_t *plVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t *plVar7;
  int64_t **pplVar8;
  char *pcVar9;
  int iVar10;
  int64_t *plVar11;
  int64_t lVar12;
  int64_t *arg1;
  void*this_ptr;
  int64_t *plVar13;
  uint32_t uVar14;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  int64_t local_278;
  char local_270;
  int64_t *local_268;
  char local_260;
  int64_t *local_258;
  char local_250;
  int64_t local_248;
  char local_240;
  int64_t *local_238;
  char local_230;
  int64_t local_228;
  char local_220;
  int64_t *local_218;
  char local_210;
  int64_t local_208;
  char local_200;
  int64_t *local_1f8;
  char local_1f0;
  int64_t *local_1e8;
  char local_1e0;
  int64_t *local_1d8;
  char local_1d0;
  int64_t *local_1c8;
  char local_1c0;
  int64_t local_1b8;
  char local_1b0;
  int64_t *local_1a8;
  char local_1a0;
  int64_t local_198;
  char local_190;
  int64_t *local_188;
  char local_180;
  int64_t *local_178;
  char local_170;
  int64_t *local_168;
  char local_160;
  int64_t *local_158;
  char local_150;
  int64_t *local_148;
  char local_140;
  int64_t *local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t *local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t *local_f8;
  int64_t local_f0;
  int64_t *local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8 [8];
  int64_t local_a0;
  uint64_t local_98;
  int local_90;
  int64_t local_88;
  int64_t *local_80;
  int64_t *local_78;
  int64_t *local_70;
  int64_t *local_68;
  uint32_t local_5c;
  int64_t *local_58;
  int64_t *local_50;
  char local_48 [8];
  int64_t *local_40;
  char local_38;
  
  FUN_00dfd1c0();
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00e09be0();
  lVar4 = local_b0;
  if (local_a8[0] == '\0') {
    if (((local_b0 != 0) && (FUN_00d50b00(), local_a8[0] != '\0')) && (local_b0 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_a8[0] = '\0';
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  local_88 = lVar4;
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  uVar14 = (**(code **)(*plVar3 + 0x18))();
  local_278 = g_02784a80;
  if (g_02784a80 != 0) {
    uVar14 = FUN_00d50b00();
  }
  local_270 = '\x01';
  uVar14 = FUN_000175c0(uVar14,&local_278);
  lVar4 = local_b0;
  pcVar9 = local_48;
  if (local_a8[0] != '\0') {
    pcVar9 = local_a8;
  }
  local_48[0] = local_a8[0];
  *pcVar9 = '\0';
  lVar12 = local_88;
  if ((local_a8[0] != '\0') && (local_b0 != 0)) {
    uVar14 = FUN_00d50b20();
  }
  if ((local_270 != '\0') && (local_278 != 0)) {
    uVar14 = FUN_00d50b20();
  }
  if (lVar4 != 0) {
    local_a8[0] = '\0';
    local_b0 = 0;
    local_a0 = lVar4;
    local_98 = 0xffffffff;
    local_90 = 0;
    local_f0 = lVar4;
    while( true ) {
      iVar10 = local_98._4_4_;
      if (local_98._4_4_ != 0) {
        if (local_98._4_4_ < 1) {
          iVar10 = -local_98._4_4_;
        }
        else {
          local_98 = CONCAT44(local_98._4_4_,(int)local_98 - local_98._4_4_);
          uVar14 = FUN_00d23690(uVar14,local_98._4_4_);
          local_90 = local_90 + iVar10;
          iVar10 = 0;
        }
        local_98 = CONCAT44(iVar10,(int)local_98);
      }
      plVar13 = g_02787870;
      lVar4 = (int64_t)(int)local_98;
      iVar10 = (int)local_98 + 1;
      local_98 = CONCAT44(local_98._4_4_,iVar10);
      if (*(int *)(local_a0 + 0xc) <= iVar10) break;
      local_b0 = *(int64_t *)(*(int64_t *)(local_a0 + 0x10) + 8 + lVar4 * 8);
      if (g_02787870 != (int64_t *)0x0) {
        uVar14 = FUN_00d50b00();
      }
      local_268 = plVar13;
      local_260 = '\x01';
      uVar14 = FUN_000175c0(uVar14,&local_268);
      plVar13 = local_40;
      if ((g_026fd0c0 == '\0') &&
         (iVar10 = ___cxa_guard_acquire(), uVar14 = extraout_XMM0_Da_03, iVar10 != 0)) {
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
        uVar14 = ___cxa_guard_release();
      }
      pplVar8 = (int64_t **)&g_02802688;
      if (plVar13 != (int64_t *)0x0) {
        (**(code **)(*plVar13 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar8 = &local_40;
        uVar14 = extraout_XMM0_Da;
        if (cVar2 == '\0') {
          pplVar8 = (int64_t **)&g_02802688;
        }
      }
      plVar13 = *pplVar8;
      if (*(char *)(pplVar8 + 1) == '\0') {
        if (plVar13 != (int64_t *)0x0) {
          uVar14 = FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar8 + 1) = 0;
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        uVar14 = FUN_00d50b20();
      }
      if ((local_260 != '\0') && (local_268 != (int64_t *)0x0)) {
        uVar14 = FUN_00d50b20();
      }
      if (plVar13 != (int64_t *)0x0) {
        local_250 = '\0';
        local_258 = plVar13;
        uVar5 = FUN_00d25fa0();
        plVar11 = local_40;
        if (local_40 == (int64_t *)0x0) {
          local_5c = (uint32_t)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
          plVar11 = (int64_t *)0x0;
        }
        else {
          if (local_38 == '\0') {
            FUN_00d50b00();
            local_5c = 0;
            if ((local_38 == '\0') || (local_40 == (int64_t *)0x0)) goto LAB_00dfb533;
            FUN_00d50b20();
          }
          else {
            local_38 = '\0';
          }
          local_5c = 0;
        }
LAB_00dfb533:
        if ((local_250 != '\0') && (local_258 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar11 != (int64_t *)0x0) {
          local_f8 = plVar11;
          FUN_00d28390();
          cVar2 = (**(code **)(*arg1 + 0x388))();
          if ((cVar2 != '\0') &&
             ((iVar10 = FUN_000030b0(), uVar14 = extraout_XMM0_Da_00, iVar10 == 2 ||
              (uVar6 = FUN_00d28380(), uVar14 = extraout_XMM0_Da_01, (uVar6 & 1) != 0)))) {
            lVar4 = g_02784a88;
            local_58 = plVar13;
            if (g_02784a88 != 0) {
              uVar14 = FUN_00d50b00();
            }
            local_248 = lVar4;
            local_240 = '\x01';
            uVar14 = FUN_000175c0(uVar14,&local_248);
            plVar13 = local_40;
            if (local_38 == '\0') {
              if (((local_40 != (int64_t *)0x0) && (uVar14 = FUN_00d50b00(), local_38 != '\0')) &&
                 (local_40 != (int64_t *)0x0)) {
                uVar14 = FUN_00d50b20();
              }
            }
            else {
              local_38 = '\0';
            }
            if ((local_240 != '\0') && (local_248 != 0)) {
              uVar14 = FUN_00d50b20();
            }
            if (plVar13 == (int64_t *)0x0) {
              iVar10 = -1;
              lVar4 = g_02784a90;
            }
            else {
              local_238 = plVar13;
              local_230 = '\0';
              iVar10 = FUN_00c716c0();
              if ((local_230 != '\0') && (local_238 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              uVar14 = FUN_00d50b20();
              lVar4 = g_02784a90;
            }
            g_02784a90 = lVar4;
            if (lVar4 != 0) {
              uVar14 = FUN_00d50b00();
            }
            local_220 = '\x01';
            local_228 = lVar4;
            FUN_000175c0(uVar14,&local_228);
            plVar13 = local_40;
            if (local_38 == '\0') {
              if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                 (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_38 = '\0';
            }
            if ((local_220 != '\0') && (local_228 != 0)) {
              FUN_00d50b20();
            }
            if (plVar13 != (int64_t *)0x0) {
              local_218 = plVar13;
              local_210 = '\0';
              uVar14 = FUN_00c716c0();
              local_70 = (int64_t *)CONCAT44(local_70._4_4_,uVar14);
              if ((local_210 != '\0') && (local_218 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              uVar14 = FUN_00d50b20();
              lVar4 = g_02784a98;
              if (((iVar10 == 1) && ((int)local_70 != -1)) && (arg1[5] != 0)) {
                if (g_02784a98 != 0) {
                  uVar14 = FUN_00d50b00();
                }
                local_208 = lVar4;
                local_200 = '\x01';
                FUN_000175c0(uVar14,&local_208);
                plVar13 = local_40;
                if ((g_026fd0c0 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
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
                pplVar8 = (int64_t **)&g_02802688;
                if (plVar13 != (int64_t *)0x0) {
                  (**(code **)(*plVar13 + 0x360))();
                  cVar2 = FUN_00e85ea0();
                  pplVar8 = &local_40;
                  if (cVar2 == '\0') {
                    pplVar8 = (int64_t **)&g_02802688;
                  }
                }
                plVar13 = *pplVar8;
                if (*(char *)(pplVar8 + 1) == '\0') {
                  if (plVar13 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  *(void*)(pplVar8 + 1) = 0;
                }
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_200 != '\0') && (local_208 != 0)) {
                  FUN_00d50b20();
                }
                if (plVar13 != (int64_t *)0x0) {
                  local_1f0 = '\0';
                  local_1f8 = plVar13;
                  (**(code **)(*(int64_t *)arg1[5] + 0x18))
                            ((uint64_t)local_70 & 0xffffffff,&local_1f8);
                  if (local_40 == (int64_t *)0x0) {
                    bVar1 = true;
                    local_70 = (int64_t *)0x0;
                  }
                  else {
                    local_70 = local_40;
                    if (local_38 == '\0') {
                      FUN_00d50b00();
                      bVar1 = false;
                      if ((local_38 == '\0') || (bVar1 = false, local_40 == (int64_t *)0x0))
                      goto LAB_00dfb8dd;
                      FUN_00d50b20();
                    }
                    else {
                      local_38 = '\0';
                    }
                    bVar1 = false;
                  }
LAB_00dfb8dd:
                  if ((local_1f0 != '\0') && (local_1f8 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  FUN_00d50b20();
                  if (local_70 != (int64_t *)0x0) {
                    local_1e8 = local_70;
                    local_1e0 = '\0';
                    uVar14 = FUN_00ca9940();
                    plVar13 = local_40;
                    if (local_38 == '\0') {
                      if (((local_40 != (int64_t *)0x0) &&
                          (uVar14 = FUN_00d50b00(), local_38 != '\0')) &&
                         (local_40 != (int64_t *)0x0)) {
                        uVar14 = FUN_00d50b20();
                      }
                    }
                    else {
                      local_38 = '\0';
                    }
                    if ((local_1e0 != '\0') && (local_1e8 != (int64_t *)0x0)) {
                      uVar14 = FUN_00d50b20();
                    }
                    plVar11 = g_02787870;
                    if (plVar13 != (int64_t *)0x0) {
                      local_68 = plVar13;
                      if (g_02787870 != (int64_t *)0x0) {
                        uVar14 = FUN_00d50b00();
                      }
                      local_1d8 = plVar11;
                      local_1d0 = '\x01';
                      FUN_000175c0(uVar14,&local_1d8);
                      plVar13 = local_40;
                      if ((g_026fd0c0 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0))
                      {
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
                      pplVar8 = (int64_t **)&g_02802688;
                      if (plVar13 != (int64_t *)0x0) {
                        (**(code **)(*plVar13 + 0x360))();
                        cVar2 = FUN_00e85ea0();
                        pplVar8 = &local_40;
                        if (cVar2 == '\0') {
                          pplVar8 = (int64_t **)&g_02802688;
                        }
                      }
                      plVar11 = local_58;
                      plVar13 = *pplVar8;
                      if (*(char *)(pplVar8 + 1) == '\0') {
                        if (plVar13 != (int64_t *)0x0) {
                          FUN_00d50b00();
                        }
                      }
                      else {
                        *(void*)(pplVar8 + 1) = 0;
                      }
                      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if ((local_1d0 != '\0') && (local_1d8 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      local_1c0 = '\0';
                      local_1c8 = plVar13;
                      cVar2 = (**(code **)(*plVar11 + 0x50))();
                      uVar14 = extraout_XMM0_Da_02;
                      if ((local_1c0 != '\0') && (local_1c8 != (int64_t *)0x0)) {
                        uVar14 = FUN_00d50b20();
                      }
                      lVar4 = g_027855c0;
                      if (cVar2 != '\0') {
                        if (g_027855c0 != 0) {
                          uVar14 = FUN_00d50b00();
                        }
                        local_1b8 = lVar4;
                        local_1b0 = '\x01';
                        FUN_000175c0(uVar14,&local_1b8);
                        plVar11 = local_40;
                        if ((g_026fd0c0 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)
                           ) {
                          local_50 = plVar13;
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
                          plVar13 = local_50;
                        }
                        pplVar8 = (int64_t **)&g_02802688;
                        if (plVar11 != (int64_t *)0x0) {
                          (**(code **)(*plVar11 + 0x360))();
                          cVar2 = FUN_00e85ea0();
                          pplVar8 = &local_40;
                          if (cVar2 == '\0') {
                            pplVar8 = (int64_t **)&g_02802688;
                          }
                        }
                        lVar4 = local_88;
                        plVar11 = *pplVar8;
                        if (*(char *)(pplVar8 + 1) == '\0') {
                          if (plVar11 != (int64_t *)0x0) {
                            FUN_00d50b00();
                          }
                        }
                        else {
                          *(void*)(pplVar8 + 1) = 0;
                        }
                        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                          FUN_00d50b20();
                        }
                        if ((local_1b0 != '\0') && (local_1b8 != 0)) {
                          FUN_00d50b20();
                        }
                        if (plVar11 != (int64_t *)0x0) {
                          local_1a0 = '\0';
                          local_1a8 = plVar11;
                          uVar14 = FUN_00e09be0();
                          local_80 = local_40;
                          if (local_38 == '\0') {
                            if (((local_40 != (int64_t *)0x0) &&
                                (uVar14 = FUN_00d50b00(), local_38 != '\0')) &&
                               (local_40 != (int64_t *)0x0)) {
                              uVar14 = FUN_00d50b20();
                            }
                          }
                          else {
                            local_38 = '\0';
                          }
                          if ((local_1a0 != '\0') && (local_1a8 != (int64_t *)0x0)) {
                            uVar14 = FUN_00d50b20();
                          }
                          if (local_80 != (int64_t *)0x0) {
                            local_198 = lVar4;
                            local_190 = '\0';
                            local_188 = local_80;
                            local_180 = '\0';
                            cVar2 = FUN_00e0d3d0(uVar14,1);
                            if ((local_180 != '\0') && (local_188 != (int64_t *)0x0)) {
                              FUN_00d50b20();
                            }
                            if ((local_190 != '\0') && (local_198 != 0)) {
                              FUN_00d50b20();
                            }
                            if (cVar2 == '\0') {
                              if (*param_1 != 0) {
                                local_38 = '\0';
                                local_40 = plVar13;
                                FUN_00d21140();
                                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                                  FUN_00d50b20();
                                }
                              }
                            }
                            else {
                              local_50 = plVar13;
                              plVar7 = (int64_t *)FUN_00e8fc40();
                              FUN_00022d50();
                              uVar14 = (**(code **)(*plVar7 + 0x18))();
                              plVar11 = g_02787870;
                              local_170 = '\0';
                              local_178 = plVar13;
                              local_78 = plVar7;
                              if (g_02787870 != (int64_t *)0x0) {
                                uVar14 = FUN_00d50b00();
                              }
                              local_40 = plVar11;
                              local_38 = '\0';
                              uVar14 = FUN_00ca0840(uVar14,&local_40);
                              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                                uVar14 = FUN_00d50b20();
                              }
                              if (plVar11 != (int64_t *)0x0) {
                                uVar14 = FUN_00d50b20();
                              }
                              if ((local_170 != '\0') && (local_178 != (int64_t *)0x0)) {
                                uVar14 = FUN_00d50b20();
                              }
                              plVar13 = g_02784aa0;
                              if (g_02784aa0 != (int64_t *)0x0) {
                                uVar14 = FUN_00d50b00();
                              }
                              local_168 = plVar13;
                              local_160 = '\x01';
                              uVar14 = FUN_000175c0(uVar14,&local_168);
                              plVar13 = local_40;
                              if (local_38 == '\0') {
                                if (((local_40 != (int64_t *)0x0) &&
                                    (uVar14 = FUN_00d50b00(), local_38 != '\0')) &&
                                   (local_40 != (int64_t *)0x0)) {
                                  uVar14 = FUN_00d50b20();
                                }
                              }
                              else {
                                local_38 = '\0';
                              }
                              if ((local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
                                uVar14 = FUN_00d50b20();
                              }
                              plVar11 = g_02784aa0;
                              if (plVar13 != (int64_t *)0x0) {
                                local_158 = plVar13;
                                local_150 = '\0';
                                if (g_02784aa0 != (int64_t *)0x0) {
                                  uVar14 = FUN_00d50b00();
                                }
                                local_40 = plVar11;
                                local_38 = '\0';
                                FUN_00ca0840(uVar14,&local_40);
                                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                                  FUN_00d50b20();
                                }
                                if (plVar11 != (int64_t *)0x0) {
                                  FUN_00d50b20();
                                }
                                if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
                                  FUN_00d50b20();
                                }
                                uVar14 = FUN_00d50b20();
                              }
                              plVar13 = g_02784aa8;
                              if (g_02784aa8 != (int64_t *)0x0) {
                                uVar14 = FUN_00d50b00();
                              }
                              local_148 = plVar13;
                              local_140 = '\x01';
                              uVar14 = FUN_000175c0(uVar14,&local_148);
                              plVar13 = local_40;
                              if (local_38 == '\0') {
                                if (((local_40 != (int64_t *)0x0) &&
                                    (uVar14 = FUN_00d50b00(), local_38 != '\0')) &&
                                   (local_40 != (int64_t *)0x0)) {
                                  uVar14 = FUN_00d50b20();
                                }
                              }
                              else {
                                local_38 = '\0';
                              }
                              if ((local_140 != '\0') && (local_148 != (int64_t *)0x0)) {
                                uVar14 = FUN_00d50b20();
                              }
                              plVar11 = g_02784aa8;
                              if (plVar13 != (int64_t *)0x0) {
                                local_138 = plVar13;
                                local_130 = '\0';
                                if (g_02784aa8 != (int64_t *)0x0) {
                                  uVar14 = FUN_00d50b00();
                                }
                                local_40 = plVar11;
                                local_38 = '\0';
                                FUN_00ca0840(uVar14,&local_40);
                                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                                  FUN_00d50b20();
                                }
                                if (plVar11 != (int64_t *)0x0) {
                                  FUN_00d50b20();
                                }
                                if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
                                  FUN_00d50b20();
                                }
                                uVar14 = FUN_00d50b20();
                              }
                              lVar4 = g_02784ab0;
                              if (g_02784ab0 != 0) {
                                uVar14 = FUN_00d50b00();
                              }
                              local_128 = lVar4;
                              local_120 = '\x01';
                              FUN_000175c0(uVar14,&local_128);
                              plVar13 = local_40;
                              if (local_38 == '\0') {
                                if (((local_40 != (int64_t *)0x0) &&
                                    (FUN_00d50b00(), local_38 != '\0')) &&
                                   (local_40 != (int64_t *)0x0)) {
                                  FUN_00d50b20();
                                }
                              }
                              else {
                                local_38 = '\0';
                              }
                              if ((local_120 != '\0') && (local_128 != 0)) {
                                FUN_00d50b20();
                              }
                              if (plVar13 != (int64_t *)0x0) {
                                local_118 = plVar13;
                                local_110 = '\0';
                                iVar10 = FUN_00c716c0();
                                if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
                                  FUN_00d50b20();
                                }
                                FUN_00d50b20();
                                if (iVar10 != 0) {
                                  (**(code **)(*arg1 + 0x390))();
                                  local_108 = local_78;
                                  local_100 = '\0';
                                  uVar14 = FUN_00d46530();
                                  plVar11 = local_40;
                                  plVar13 = local_50;
                                  local_b8 = 0;
                                  if (local_38 == '\0') {
                                    if (local_40 != (int64_t *)0x0) {
                                      uVar14 = FUN_00d50b00();
                                    }
                                  }
                                  else {
                                    local_38 = '\0';
                                  }
                                  local_b8 = '\x01';
                                  local_c0 = plVar11;
                                  FUN_00dfd350(uVar14,&local_c0);
                                  if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
                                    FUN_00d50b20();
                                  }
                                  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                                    FUN_00d50b20();
                                  }
                                  if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
                                    FUN_00d50b20();
                                  }
                                  FUN_00d50b20();
                                  goto LAB_00dfc1ad;
                                }
                              }
                              FUN_00d50b20();
                              plVar13 = local_50;
                            }
LAB_00dfc1ad:
                            FUN_00d50b20();
                          }
                          FUN_00d50b20();
                        }
                      }
                      if (plVar13 != (int64_t *)0x0) {
                        FUN_00d50b20();
                      }
                      FUN_00d50b20();
                    }
                    if (!bVar1) {
                      FUN_00d50b20();
                    }
                  }
                }
              }
            }
          }
          if ((char)local_5c == '\0') {
            FUN_00d50b20();
          }
        }
        uVar14 = FUN_00d50b20();
      }
    }
    FUN_015ac3a0();
    lVar12 = local_88;
    if (local_48[0] != '\0') {
      FUN_00d50b20();
    }
  }
  *this_ptr = plVar3;
  *(void*)(this_ptr + 1) = 1;
  if (lVar12 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

