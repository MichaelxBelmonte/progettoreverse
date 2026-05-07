// Function: FUN_00dcd0a0
// Address: 00dcd0a0
// Size: 3370 bytes
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


void FUN_00dcd0a0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t **pplVar7;
  int64_t this_ptr;
  int64_t *plVar8;
  uint64_t uVar9;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t *local_120;
  char local_118;
  int64_t local_110;
  char local_108;
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
  int64_t *local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  uint64_t local_40;
  
  if (*(int64_t *)(this_ptr + 0x60) == 0) {
    return;
  }
  uVar9 = FUN_00da5ad0();
  if ((char)local_60[3] == '\0') {
    local_80 = *(int64_t **)(this_ptr + 0x68);
    if (local_58 != '\0') {
      FUN_00d50b20();
    }
    uVar9 = 0;
    if (0.0 < (double)local_80) {
      uVar9 = FUN_00da6b00(*(void*)(this_ptr + 0x68));
    }
  }
  else if (local_58 != '\0') {
    uVar9 = FUN_00d50b20();
  }
  local_c8 = 0;
  lVar1 = *(int64_t *)(this_ptr + 0x60);
  if (lVar1 != 0) {
    uVar9 = FUN_00d50b00();
  }
  local_c8 = '\x01';
  local_b8 = 0;
  lVar2 = *(int64_t *)(this_ptr + 0x80);
  local_d0 = lVar1;
  if (lVar2 != 0) {
    uVar9 = FUN_00d50b00();
  }
  local_b8 = '\x01';
  local_c0 = lVar2;
  FUN_00e91f70(uVar9,&local_c0);
  local_80 = local_60;
  if (local_58 == '\0') {
    if (((local_60 != (int64_t *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
       (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (local_80 == (int64_t *)0x0) {
    return;
  }
  cVar4 = FUN_00e34a50();
  if (cVar4 == '\0') {
    local_58 = '\0';
    local_60 = (int64_t *)0x0;
    FUN_00da5ad0();
    local_48 = local_70 != '\0';
    local_50 = local_78;
    if ((bool)local_48) {
      local_70 = '\0';
    }
    local_40 = FUN_00da7170();
    FUN_00da7180();
    if (local_50 == 0) {
      cVar4 = '\0';
      local_68 = (int64_t *)0x0;
    }
    else {
      local_68 = (int64_t *)0x0;
      cVar4 = '\0';
      do {
        FUN_00e92260(g_02394dd8);
        FUN_00e92290();
        (**(code **)(*local_80 + 0x398))(0,0);
        cVar3 = local_58;
        plVar8 = local_60;
        if (local_60 != (int64_t *)0x0) {
          if (local_60 == local_68) {
            if ((local_58 != '\0') && (cVar4 == '\0')) {
              cVar4 = '\x01';
              FUN_00d50b00();
            }
          }
          else {
            if (local_58 != '\0') {
              FUN_00d50b00();
            }
            if ((cVar4 == '\0') || (local_68 == (int64_t *)0x0)) {
              local_68 = plVar8;
              cVar4 = cVar3;
            }
            else {
              FUN_00d50b20();
              local_68 = plVar8;
              cVar4 = cVar3;
            }
          }
        }
        FUN_00da7180();
        if (local_50 == 0) break;
        local_50 = 0;
        if (local_48 == '\0') {
          local_48 = '\0';
          break;
        }
        FUN_00d50b20();
        local_48 = '\0';
      } while (local_50 != 0);
    }
    local_50 = 0;
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_68 != (int64_t *)0x0) {
      FUN_00e97f30();
      local_b0 = local_78;
      local_a8 = 0;
      if (local_70 == '\0') {
        if (local_78 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      local_a8 = '\x01';
      FUN_006e17f0();
      plVar8 = local_60;
      if (local_58 == '\0') {
        if (((local_60 != (int64_t *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
           (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_58 = '\0';
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      plVar6 = *(int64_t **)(this_ptr + 0x60);
      if (plVar6 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_58 = '\0';
      local_60 = plVar6;
      FUN_00d21140();
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar6 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      uVar9 = FUN_00d92220();
      local_90 = local_78;
      local_88 = 0;
      if (local_70 == '\0') {
        if (local_78 != 0) {
          uVar9 = FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      local_88 = '\x01';
      FUN_00d95130(uVar9,&local_90);
      local_a0 = local_60;
      local_98 = 0;
      if (local_58 == '\0') {
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      local_98 = '\x01';
      FUN_00e97f60();
      if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      FUN_00e971f0();
      FUN_00e34a70();
      if (plVar8 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (cVar4 != '\0') {
        FUN_00d50b20();
      }
      goto LAB_00dcdb77;
    }
  }
  cVar4 = FUN_00e34a50();
  if (cVar4 != '\0') {
    FUN_00e34a60();
  }
  cVar4 = FUN_00e34240();
  if (cVar4 != '\0') goto LAB_00dcdb77;
  uVar9 = FUN_00e925a0();
  if (local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      uVar9 = FUN_00d50b00();
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        uVar9 = FUN_00d50b20();
      }
      goto LAB_00dcd48c;
    }
  }
  else if (local_60 != (int64_t *)0x0) {
LAB_00dcd48c:
    lVar1 = g_02787890;
    if (g_02787890 != 0) {
      uVar9 = FUN_00d50b00();
    }
    local_150 = lVar1;
    local_148 = '\x01';
    pplVar7 = &local_60;
    FUN_000175c0(uVar9,&local_150);
    plVar8 = local_60;
    if ((g_026fd0c0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
LAB_00dcd4fb:
      pplVar7 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar8 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_00dcd4fb;
    }
    plVar8 = *pplVar7;
    if (*(char *)(pplVar7 + 1) == '\0') {
      if (plVar8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar7 + 1) = 0;
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_148 != '\0') && (local_150 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = g_02783d48;
    if (plVar8 != (int64_t *)0x0) {
      if (g_02783d48 != 0) {
        FUN_00d50b00();
      }
      local_140 = lVar1;
      local_138 = '\x01';
      cVar4 = (**(code **)(*plVar8 + 0x50))();
      uVar9 = extraout_XMM0_Qa;
      if ((local_138 != '\0') && (local_140 != 0)) {
        uVar9 = FUN_00d50b20();
      }
      lVar2 = g_027878b0;
      lVar1 = g_02783f20;
      if (cVar4 == '\0') {
        if (g_02783f20 != 0) {
          FUN_00d50b00();
        }
        local_110 = lVar1;
        local_108 = '\x01';
        cVar4 = (**(code **)(*plVar8 + 0x50))();
        uVar9 = extraout_XMM0_Qa_00;
        if ((local_108 != '\0') && (local_110 != 0)) {
          uVar9 = FUN_00d50b20();
        }
        lVar2 = g_027855d0;
        lVar1 = g_02783d50;
        if (cVar4 == '\0') {
          if (g_02783d50 != 0) {
            FUN_00d50b00();
          }
          local_f0 = lVar1;
          local_e8 = '\x01';
          cVar4 = (**(code **)(*plVar8 + 0x50))();
          if ((local_e8 != '\0') && (local_f0 != 0)) {
            FUN_00d50b20();
          }
          if (cVar4 == '\0') {
            FUN_00e34a70();
          }
          else {
            FUN_00e34b50();
            FUN_00e34a60();
          }
        }
        else {
          if (g_027855d0 != 0) {
            uVar9 = FUN_00d50b00();
          }
          local_100 = lVar2;
          local_f8 = '\x01';
          FUN_000175c0(uVar9,&local_100);
          plVar8 = local_60;
          if ((g_026fdd40 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
          pplVar7 = (int64_t **)&g_02802688;
          if (plVar8 != (int64_t *)0x0) {
            (**(code **)(*plVar8 + 0x360))();
            cVar4 = FUN_00e85ea0();
            if (cVar4 != '\0') {
              if ((g_026fd0c0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
              cVar4 = FUN_00e8db60();
              pplVar7 = &local_60;
              if (cVar4 == '\0') {
                pplVar7 = (int64_t **)&g_02802688;
              }
            }
          }
          plVar8 = *(int64_t **)(this_ptr + 0x70);
          plVar6 = *pplVar7;
          if (plVar8 != plVar6) {
            if (*(char *)(pplVar7 + 1) == '\0') {
              if (plVar6 == (int64_t *)0x0) {
                plVar6 = (int64_t *)0x0;
              }
              else {
                FUN_00d50b00();
                plVar6 = *pplVar7;
                plVar8 = *(int64_t **)(this_ptr + 0x70);
              }
            }
            else {
              *(void*)(pplVar7 + 1) = 0;
            }
            *(int64_t **)(this_ptr + 0x70) = plVar6;
            if (plVar8 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_f8 != '\0') && (local_100 != 0)) {
            FUN_00d50b20();
          }
          local_d8 = 0;
          lVar1 = *(int64_t *)(this_ptr + 0x70);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          local_d8 = '\x01';
          local_e0 = lVar1;
          FUN_00e6f880();
          if ((local_d8 != '\0') && (local_e0 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        if (g_027878b0 != 0) {
          uVar9 = FUN_00d50b00();
        }
        local_130 = lVar2;
        local_128 = '\x01';
        FUN_000175c0(uVar9,&local_130);
        plVar8 = local_60;
        if (local_58 == '\0') {
          if (((local_60 != (int64_t *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
             (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_58 = '\0';
        }
        if ((local_128 != '\0') && (local_130 != 0)) {
          FUN_00d50b20();
        }
        if (plVar8 != (int64_t *)0x0) {
          local_120 = plVar8;
          local_118 = '\0';
          iVar5 = FUN_00c716c0();
          if ((local_118 != '\0') && (local_120 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (0.0 < (double)iVar5 / g_023907c0) {
            *(double *)(this_ptr + 0x68) = (double)iVar5 / g_023907c0;
          }
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    goto LAB_00dcdb77;
  }
  FUN_00e34a70();
LAB_00dcdb77:
  FUN_00d50b20();
  return;
}

