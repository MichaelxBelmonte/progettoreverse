// Function: FUN_017a5880
// Address: 017a5880
// Size: 3520 bytes
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


uint64_t FUN_017a5880(void)

{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t **pplVar10;
  uint64_t uVar11;
  int64_t lVar12;
  int64_t *arg1;
  int64_t this_ptr;
  uint32_t uVar13;
  int64_t local_118;
  int64_t local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  int64_t *local_48;
  char local_40;
  
  if (((int64_t *)*arg1 == (int64_t *)0x0) ||
     (cVar5 = (**(code **)(*(int64_t *)*arg1 + 0x398))(), cVar5 == '\0')) {
LAB_017a6369:
    uVar11 = 0;
  }
  else {
    (**(code **)(*(int64_t *)*arg1 + 0x370))();
    plVar8 = local_80;
    if (local_78 == '\0') {
      if (local_80 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_017a5901;
      }
    }
    else if (local_80 != (int64_t *)0x0) {
LAB_017a5901:
      FUN_017a52b0();
      local_100 = plVar8;
      local_f8 = '\0';
      cVar5 = (**(code **)(*local_80 + 0x50))();
      if (cVar5 == '\0') {
        FUN_017a5530();
        local_f0 = plVar8;
        local_e8 = '\0';
        bVar6 = (**(code **)(*local_48 + 0x50))();
        if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_40 != '\0') {
          FUN_00d50b20();
        }
        bVar6 = bVar6 ^ 1;
      }
      else {
        bVar6 = 0;
      }
      if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_78 != '\0') {
        FUN_00d50b20();
      }
      if (bVar6 != 0) {
        FUN_00d50b20();
        goto LAB_017a6369;
      }
      FUN_00d50b20();
    }
    lVar12 = *arg1;
    lVar1 = *(int64_t *)(this_ptr + 0x18);
    if (lVar1 != lVar12) {
      if (lVar12 != 0) {
        FUN_00d50b00();
      }
      *(int64_t *)(this_ptr + 0x18) = lVar12;
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    local_78 = '\0';
    local_80 = (int64_t *)0x0;
    FUN_00da5ad0();
    local_68 = local_40 != '\0';
    local_70 = local_48;
    if ((bool)local_68) {
      local_40 = '\0';
    }
    local_60 = FUN_00da7170();
    uVar13 = FUN_00da7180();
    if (local_70 == (int64_t *)0x0) {
      bVar2 = false;
      local_50 = (int64_t *)0x0;
    }
    else {
      local_50 = (int64_t *)0x0;
      local_88 = (int64_t *)&g_026fdd40;
      bVar2 = false;
      do {
        local_a0 = 0;
        lVar12 = *(int64_t *)(this_ptr + 0x18);
        if (lVar12 != 0) {
          uVar13 = FUN_00d50b00();
        }
        local_a0 = '\x01';
        local_a8 = lVar12;
        FUN_00e88a90(uVar13,0);
        plVar8 = local_48;
        if (local_40 == '\0') {
          if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
             (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40 = '\0';
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        lVar12 = g_027c2518;
        if (plVar8 != (int64_t *)0x0) {
          if (g_027c2518 != 0) {
            FUN_00d50b00();
          }
          local_e0 = lVar12;
          local_d8 = '\x01';
          FUN_00e8a230(1,&local_e0,0);
          plVar8 = local_48;
          if ((g_026fdd40 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
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
          pplVar10 = (int64_t **)&g_02802688;
          if (plVar8 != (int64_t *)0x0) {
            (**(code **)(*plVar8 + 0x360))();
            cVar5 = FUN_00e85ea0();
            pplVar10 = (int64_t **)&g_02802688;
            if (cVar5 != '\0') {
              if ((g_026fd0c0 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
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
              cVar5 = FUN_00e8db60();
              pplVar10 = &local_48;
              if (cVar5 == '\0') {
                pplVar10 = (int64_t **)&g_02802688;
              }
            }
          }
          plVar9 = *(int64_t **)(this_ptr + 0x30);
          plVar8 = *pplVar10;
          if (plVar9 != plVar8) {
            if (*(char *)(pplVar10 + 1) == '\0') {
              if (plVar8 == (int64_t *)0x0) {
                *(void*)(this_ptr + 0x30) = 0;
              }
              else {
                FUN_00d50b00();
                plVar9 = *(int64_t **)(this_ptr + 0x30);
                *(int64_t **)(this_ptr + 0x30) = *pplVar10;
              }
            }
            else {
              *(void*)(pplVar10 + 1) = 0;
              *(int64_t **)(this_ptr + 0x30) = plVar8;
            }
            if (plVar9 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_d8 != '\0') && (local_e0 != 0)) {
            FUN_00d50b20();
          }
          lVar12 = g_027d2048;
          if (g_027d2048 != 0) {
            FUN_00d50b00();
          }
          local_d0 = lVar12;
          local_c8 = '\x01';
          FUN_00e89d80(0xd);
          plVar8 = local_48;
          if (local_48 == local_50) {
            plVar8 = local_50;
            bVar4 = bVar2;
            if ((bVar2) || (local_48 == (int64_t *)0x0)) goto joined_r0x017a5d79;
            if (local_40 == '\0') {
              FUN_00d50b00();
              goto LAB_017a5d90;
            }
LAB_017a5d34:
            local_40 = '\0';
            bVar2 = true;
            local_50 = plVar8;
          }
          else {
            if (local_40 != '\0') {
              if ((bVar2) && (local_50 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_017a5d34;
            }
            if (local_48 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            bVar4 = true;
            if ((bVar2) && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
              local_50 = plVar8;
LAB_017a5d90:
              plVar8 = local_50;
              bVar4 = true;
            }
joined_r0x017a5d79:
            bVar2 = bVar4;
            local_50 = plVar8;
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((local_c8 != '\0') && (local_d0 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        uVar13 = FUN_00da7180();
        if (local_70 == (int64_t *)0x0) break;
        local_70 = (int64_t *)0x0;
        if (local_68 == '\0') {
          local_68 = '\0';
          break;
        }
        uVar13 = FUN_00d50b20();
        local_68 = '\0';
      } while (local_70 != (int64_t *)0x0);
    }
    local_70 = (int64_t *)0x0;
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      uVar13 = FUN_00d50b20();
    }
    if ((*(int64_t *)(this_ptr + 0x30) == 0) && (local_50 == (int64_t *)0x0)) {
      local_78 = '\0';
      local_80 = (int64_t *)0x0;
      FUN_00da5ad0();
      local_68 = local_40 != '\0';
      local_70 = local_48;
      if ((bool)local_68) {
        local_40 = '\0';
      }
      local_60 = FUN_00da7170();
      uVar13 = FUN_00da7180();
      local_88 = local_70;
      if (local_70 == (int64_t *)0x0) {
        uVar11 = 0;
      }
      else {
        plVar8 = (int64_t *)FUN_00e8fc40();
        FUN_0002cb50();
        uVar13 = (**(code **)(*plVar8 + 0x18))();
        local_90 = 0;
        local_98 = *(int64_t *)(this_ptr + 0x18);
        if (local_98 != 0) {
          uVar13 = FUN_00d50b00();
        }
        local_90 = '\x01';
        FUN_00e53ff0(uVar13,&local_98);
        plVar8 = local_48;
        if ((g_026fdd40 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
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
        pplVar10 = (int64_t **)&g_02802688;
        if (plVar8 != (int64_t *)0x0) {
          (**(code **)(*plVar8 + 0x360))();
          cVar5 = FUN_00e85ea0();
          if (cVar5 != '\0') {
            if ((g_026fd0c0 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
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
            cVar5 = FUN_00e8db60();
            pplVar10 = &local_48;
            if (cVar5 == '\0') {
              pplVar10 = (int64_t **)&g_02802688;
            }
          }
        }
        plVar8 = *(int64_t **)(this_ptr + 0x30);
        plVar9 = *pplVar10;
        plVar3 = plVar8;
        if (plVar8 != plVar9) {
          if (*(char *)(pplVar10 + 1) == '\0') {
            if (plVar9 == (int64_t *)0x0) {
              plVar9 = (int64_t *)0x0;
            }
            else {
              FUN_00d50b00();
              plVar9 = *pplVar10;
              plVar8 = *(int64_t **)(this_ptr + 0x30);
            }
          }
          else {
            *(void*)(pplVar10 + 1) = 0;
          }
          *(int64_t **)(this_ptr + 0x30) = plVar9;
          plVar3 = plVar9;
          if (plVar8 != (int64_t *)0x0) {
            FUN_00d50b20();
            plVar3 = *(int64_t **)(this_ptr + 0x30);
          }
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        plVar8 = g_027d2050;
        if (plVar3 == (int64_t *)0x0) {
          uVar11 = 0;
        }
        else {
          if (g_027d2050 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          local_48 = plVar8;
          local_40 = '\0';
          cVar5 = FUN_00c9ff50();
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar8 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          uVar11 = CONCAT71((int7)((uint64_t)plVar8 >> 8),1);
          if (cVar5 == '\0') {
            lVar12 = *(int64_t *)(this_ptr + 0x30);
            lVar1 = *(int64_t *)(this_ptr + 0x38);
            if (lVar1 != lVar12) {
              if (lVar12 != 0) {
                FUN_00d50b00();
              }
              *(int64_t *)(this_ptr + 0x38) = lVar12;
              if (lVar1 != 0) {
                FUN_00d50b20();
              }
              lVar12 = *(int64_t *)(this_ptr + 0x30);
            }
            if (lVar12 != 0) {
              *(void*)(this_ptr + 0x30) = 0;
              FUN_00d50b20();
            }
          }
        }
        uVar13 = FUN_00d50b20();
        if ((local_70 != (int64_t *)0x0) && (uVar13 = FUN_00da7180(), local_70 != (int64_t *)0x0))
        {
          local_70 = (int64_t *)0x0;
          if (local_68 != '\0') {
            uVar13 = FUN_00d50b20();
          }
          local_68 = '\0';
        }
      }
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b20();
      }
      if (local_88 == (int64_t *)0x0) goto LAB_017a62c9;
    }
    else {
LAB_017a62c9:
      if (local_50 == (int64_t *)0x0) goto LAB_017a6369;
      lVar12 = *(int64_t *)(this_ptr + 0x30);
      if (lVar12 == 0) {
        FUN_00d46530();
        lVar12 = g_027d2058;
        if (g_027d2058 != 0) {
          FUN_00d50b00();
        }
        local_118 = lVar12;
        FUN_00083ea0(2,&local_118);
        uVar13 = FUN_000b4da0();
        plVar8 = *(int64_t **)(this_ptr + 0x30);
        plVar9 = plVar8;
        if (plVar8 != local_48) {
          if (local_40 == '\0') {
            if (local_48 == (int64_t *)0x0) {
              plVar9 = (int64_t *)0x0;
            }
            else {
              uVar13 = FUN_00d50b00();
              plVar8 = *(int64_t **)(this_ptr + 0x30);
              plVar9 = local_48;
            }
          }
          else {
            local_40 = '\0';
            plVar9 = local_48;
          }
          *(int64_t **)(this_ptr + 0x30) = plVar9;
          if (plVar8 != (int64_t *)0x0) {
            uVar13 = FUN_00d50b20();
            plVar9 = local_48;
          }
        }
        if ((local_40 != '\0') && (plVar9 != (int64_t *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
        local_80 = (int64_t *)&g_0253d630;
        if ((local_58 != '\0') && (local_60 != 0)) {
          uVar13 = FUN_00d50b20();
        }
        local_80 = &g_024c5048;
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
        if (lVar12 != 0) {
          uVar13 = FUN_00d50b20();
        }
        if ((local_108 != '\0') && (local_110 != 0)) {
          uVar13 = FUN_00d50b20();
        }
        lVar12 = *(int64_t *)(this_ptr + 0x30);
      }
      plVar8 = g_027d2050;
      local_c0 = local_50;
      local_b8 = '\0';
      if (g_027d2050 != (int64_t *)0x0) {
        uVar13 = FUN_00d50b00();
      }
      local_80 = plVar8;
      local_78 = '\0';
      FUN_00ca0840(uVar13,&local_80);
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar8 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      uVar11 = CONCAT71((int7)((uint64_t)lVar12 >> 8),1);
      if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((bVar2) && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  return uVar11 & 0xffffffff;
}

