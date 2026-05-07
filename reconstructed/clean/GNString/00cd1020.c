// Function: FUN_00cd1020
// Address: 00cd1020
// Size: 3665 bytes
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


void FUN_00cd1020(void)

{
  int64_t *plVar1;
  bool bVar2;
  int64_t *plVar3;
  char cVar4;
  void*puVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  int64_t **pplVar10;
  int iVar11;
  int64_t *arg1;
  void*this_ptr;
  bool bVar12;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar13;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Da_04;
  uint32_t extraout_XMM0_Da_05;
  int64_t local_150;
  char local_148;
  int64_t *local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t *local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  uint64_t local_80;
  int64_t *local_78;
  int64_t *local_70;
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
    return;
  }
  if ((g_028a7350 == (void*)0x0) || (g_028a7359 == '\0')) {
    FUN_00e8cb50();
    if (g_028a7350 == (void*)0x0) {
      puVar5 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar5 = &g_02572358;
      (*g_02572370)();
      bVar12 = g_028a7350 == (void*)0x0;
      g_028a7350 = puVar5;
      if (((bVar12) || (FUN_00d50b20(), g_028a7350 != (void*)0x0)) &&
         (g_028a7358 == '\0')) {
        g_028a7358 = '\x01';
        FUN_00e8cb90();
      }
      plVar6 = (int64_t *)FUN_00e8fc40();
      FUN_00d4ff40();
      *plVar6 = (int64_t)&g_025736a8;
      plVar6[3] = 0;
      *(void*)(plVar6 + 4) = 0;
      (*g_025736c0)();
      bVar12 = g_028a7360 == (int64_t *)0x0;
      g_028a7360 = plVar6;
      if (((bVar12) || (FUN_00d50b20(), g_028a7360 != (int64_t *)0x0)) && (g_028a7368 == '\0'))
      {
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
  bVar12 = false;
  if (g_028a7350 != (void*)0x0) {
    local_58 = '\0';
    local_60 = (int64_t *)0x0;
    local_50 = g_028a7350;
    local_48 = 0xffffffff;
    local_40 = 0;
    while( true ) {
      lVar7 = (int64_t)(int)local_48;
      iVar11 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar11);
      if (*(int *)((int64_t)local_50 + 0xc) <= iVar11) break;
      local_60 = *(int64_t **)(local_50[2] + 8 + lVar7 * 8);
      plVar6 = (int64_t *)local_60[5];
      if (plVar6 == (int64_t *)0x0) {
        (**(code **)(*(int64_t *)local_60[3] + 0x370))();
      }
      else {
        local_68 = 0;
        FUN_00d50b00();
        local_68 = '\x01';
        local_70 = plVar6;
      }
      cVar4 = (**(code **)(*local_70 + 0x50))();
      uVar13 = extraout_XMM0_Da;
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b20();
      }
      plVar6 = local_60;
      if (cVar4 != '\0') {
        if (local_60 != (int64_t *)0x0) {
          if (local_58 == '\0') {
            FUN_00d50b00();
          }
          else {
            local_58 = '\0';
          }
          bVar2 = true;
          FUN_00cdd7d0();
          bVar12 = true;
          if (plVar6 == (int64_t *)0x0) goto LAB_00cd1314;
          goto LAB_00cd15a3;
        }
        break;
      }
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar11 = -local_48._4_4_;
        }
        else {
          local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
          FUN_00d23690(uVar13,local_48._4_4_);
          local_40 = local_40 + local_48._4_4_;
          iVar11 = 0;
        }
        local_48 = CONCAT44(iVar11,(int)local_48);
      }
    }
    FUN_00cdd7d0();
    bVar12 = false;
  }
LAB_00cd1314:
  bVar2 = bVar12;
  FUN_00cd2540();
  plVar6 = local_60;
  if (local_60 != (int64_t *)0x0) {
    bVar2 = true;
    if (local_58 == '\0') {
      FUN_00d50b00();
    }
    if (plVar6 != (int64_t *)0x0) {
      bVar2 = true;
      uVar13 = FUN_00cd0de0();
      plVar8 = local_70;
      local_150 = g_02774d50;
      if (g_02774d50 != 0) {
        uVar13 = FUN_00d50b00();
      }
      local_148 = '\x01';
      (**(code **)(*plVar8 + 0x400))(uVar13,&local_150);
      local_88 = local_60;
      plVar8 = local_60;
      if (local_58 == '\0') {
        if (((local_60 != (int64_t *)0x0) &&
            (plVar8 = (int64_t *)FUN_00d50b00(), local_58 != '\0')) &&
           (local_60 != (int64_t *)0x0)) {
          plVar8 = (int64_t *)FUN_00d50b20();
        }
      }
      else {
        local_58 = '\0';
      }
      if ((local_148 != '\0') && (local_150 != 0)) {
        plVar8 = (int64_t *)FUN_00d50b20();
      }
      if (local_68 != '\0') {
        plVar8 = (int64_t *)FUN_00d50b20();
      }
      if (local_88 == (int64_t *)0x0) {
        local_38 = (int64_t *)
                   CONCAT44(local_38._4_4_,(int)CONCAT71((int7)((uint64_t)plVar8 >> 8),1));
        cVar4 = '\0';
      }
      else {
        uVar9 = (**(code **)(*local_88 + 0x398))();
        if ((char)uVar9 != '\0') {
          local_140 = local_88;
          local_138 = '\0';
          uVar9 = FUN_00ca94c0();
          plVar8 = local_60;
          uVar13 = extraout_XMM0_Da_00;
          if (local_58 == '\0') {
            if (((local_60 != (int64_t *)0x0) &&
                (uVar9 = FUN_00d50b00(), uVar13 = extraout_XMM0_Da_03, local_58 != '\0')) &&
               (local_60 != (int64_t *)0x0)) {
              uVar9 = FUN_00d50b20();
              uVar13 = extraout_XMM0_Da_04;
            }
          }
          else {
            local_58 = '\0';
          }
          if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
            uVar9 = FUN_00d50b20();
            uVar13 = extraout_XMM0_Da_01;
          }
          lVar7 = g_027092b8;
          if (plVar8 != (int64_t *)0x0) {
            local_b0 = plVar8;
            if (g_027092b8 != 0) {
              uVar9 = FUN_00d50b00();
              uVar13 = extraout_XMM0_Da_02;
            }
            local_38 = (int64_t *)
                       CONCAT44(local_38._4_4_,(int)CONCAT71((int7)((uint64_t)uVar9 >> 8),1));
            local_130 = lVar7;
            local_128 = '\x01';
            pplVar10 = &local_60;
            FUN_000175c0(uVar13,&local_130);
            plVar8 = local_60;
            if ((g_026fd0c0 == '\0') && (iVar11 = ___cxa_guard_acquire(), iVar11 != 0)) {
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
            if (plVar8 == (int64_t *)0x0) {
              pplVar10 = (int64_t **)&g_02802688;
            }
            else {
              (**(code **)(*plVar8 + 0x360))();
              cVar4 = FUN_00e85ea0();
              if (cVar4 == '\0') {
                pplVar10 = (int64_t **)&g_02802688;
              }
            }
            plVar8 = *pplVar10;
            if (plVar8 == (int64_t *)0x0) {
              local_80 = 0;
              plVar8 = (int64_t *)0x0;
            }
            else {
              if (*(char *)(pplVar10 + 1) == '\0') {
                pplVar10 = (int64_t **)FUN_00d50b00();
              }
              else {
                *(void*)(pplVar10 + 1) = 0;
              }
              local_80 = CONCAT71((int7)((uint64_t)pplVar10 >> 8),1);
            }
            if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_128 != '\0') && (local_130 != 0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            if (plVar8 == (int64_t *)0x0) {
              cVar4 = (char)local_80;
              goto LAB_00cd1557;
            }
            plVar1 = (int64_t *)plVar6[6];
            local_78 = plVar8;
            if (plVar1 != plVar8) {
              FUN_00d50b00();
              plVar6[6] = (int64_t)plVar8;
              if (plVar1 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
            }
            FUN_00d6f370();
            local_120 = g_02774d60;
            if (g_02774d60 != 0) {
              FUN_00d50b00();
            }
            local_118 = '\x01';
            local_110 = 0;
            local_108 = '\0';
            FUN_00d704d0(&local_110,&local_120);
            plVar8 = local_60;
            if (g_026fdd40 == '\0') {
              local_38 = (int64_t *)&g_026fdd40;
              iVar11 = ___cxa_guard_acquire();
              if (iVar11 != 0) {
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
            }
            pplVar10 = (int64_t **)&g_02802688;
            if (plVar8 != (int64_t *)0x0) {
              (**(code **)(*plVar8 + 0x360))();
              cVar4 = FUN_00e85ea0();
              if (cVar4 != '\0') {
                if (g_026fd0c0 == '\0') {
                  local_38 = (int64_t *)&g_026fd0c0;
                  iVar11 = ___cxa_guard_acquire();
                  if (iVar11 != 0) {
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
                cVar4 = FUN_00e8db60();
                if (cVar4 != '\0') {
                  if (g_026fd0c0 == '\0') {
                    local_38 = (int64_t *)&g_026fd0c0;
                    iVar11 = ___cxa_guard_acquire();
                    if (iVar11 != 0) {
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
                  cVar4 = FUN_00e8dc10();
                  pplVar10 = &local_60;
                  if (cVar4 == '\0') {
                    pplVar10 = (int64_t **)&g_02802688;
                  }
                }
              }
            }
            local_38 = *pplVar10;
            if (*(char *)(pplVar10 + 1) == '\0') {
              if (local_38 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              *(void*)(pplVar10 + 1) = 0;
            }
            if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_108 != '\0') && (local_110 != 0)) {
              FUN_00d50b20();
            }
            if ((local_118 != '\0') && (local_120 != 0)) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (local_38 == (int64_t *)0x0) {
LAB_00cd1970:
              plVar3 = local_38;
              local_e8 = '\0';
              local_f0 = local_38;
              FUN_00cd2840();
              plVar1 = local_60;
              plVar8 = local_78;
              if (plVar3 == local_60) {
LAB_00cd19ea:
                if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                if (local_58 == '\0') {
                  if (local_60 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                  if (local_38 == (int64_t *)0x0) {
                    local_38 = plVar1;
                  }
                  else {
                    local_38 = plVar1;
                    FUN_00d50b20();
                  }
                  goto LAB_00cd19ea;
                }
                if (local_38 != (int64_t *)0x0) {
                  local_38 = local_60;
                  FUN_00d50b20();
                }
                local_58 = '\0';
                local_38 = plVar1;
              }
              if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              uVar13 = (**(code **)(*(int64_t *)*arg1 + 0x368))();
              plVar1 = local_38;
              local_98 = local_60;
              local_90 = 0;
              if (local_58 == '\0') {
                if (local_60 != (int64_t *)0x0) {
                  uVar13 = FUN_00d50b00();
                }
              }
              else {
                local_58 = '\0';
              }
              local_90 = '\x01';
              local_e0 = plVar8;
              local_d8 = '\0';
              FUN_00cd2930(uVar13,&local_e0);
              if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              uVar13 = FUN_00d6f370();
              local_c0 = g_02774d60;
              local_d0 = plVar1;
              local_c8 = '\0';
              if (g_02774d60 != 0) {
                uVar13 = FUN_00d50b00();
              }
              local_b8 = '\x01';
              FUN_00d6f570(uVar13,&local_c0);
              if ((local_b8 != '\0') && (local_c0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_60 = local_78;
              local_58 = '\0';
              cVar4 = FUN_00c9ff50();
              uVar13 = extraout_XMM0_Da_05;
              if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                uVar13 = FUN_00d50b20();
              }
              if (cVar4 == '\0') goto LAB_00cd1970;
              local_100 = local_78;
              local_f8 = '\0';
              FUN_01de4130(uVar13,&local_100);
              plVar8 = local_60;
              (**(code **)(*(int64_t *)*arg1 + 0x368))();
              local_a8 = local_70;
              local_a0 = 0;
              if (local_68 == '\0') {
                if (local_70 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_68 = '\0';
              }
              local_a0 = '\x01';
              cVar4 = (**(code **)(*plVar8 + 0x50))();
              if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar4 == '\0') goto LAB_00cd1970;
            }
            if (local_38 == (int64_t *)0x0) {
              local_38 = (int64_t *)0x0;
              cVar4 = (char)local_80;
            }
            else {
              FUN_00d50b20();
              cVar4 = (char)local_80;
              local_38 = (int64_t *)((uint64_t)local_38 & 0xffffffff00000000);
            }
            goto LAB_00cd1557;
          }
        }
        local_38 = (int64_t *)
                   CONCAT44(local_38._4_4_,(int)CONCAT71((int7)((uint64_t)uVar9 >> 8),1));
        cVar4 = '\0';
      }
LAB_00cd1557:
      plVar8 = local_88;
      local_58 = '\0';
      local_60 = plVar6;
      FUN_00d21140();
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar8 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (cVar4 != '\0' && (char)local_38 == '\0') {
        FUN_00d50b20();
      }
      goto LAB_00cd15a3;
    }
  }
  plVar6 = (int64_t *)0x0;
LAB_00cd15a3:
  (**(code **)(*g_028a7360 + 0x378))();
  *(void*)(this_ptr + 1) = 0;
  if ((!bVar2) && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  *this_ptr = plVar6;
  *(void*)(this_ptr + 1) = 1;
  return;
}

