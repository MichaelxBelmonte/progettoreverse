// Function: FUN_01d87940
// Address: 01d87940
// Size: 1819 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01d87940(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t *plVar5;
  int in_EDX;
  int iVar6;
  int64_t *plVar7;
  int64_t *this_ptr;
  int iVar8;
  int64_t lVar9;
  uint32_t uVar10;
  uint32_t uVar11;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dd;
  uint32_t uVar12;
  uint32_t in_XMM1_Dc;
  uint32_t in_XMM1_Dd;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  uint64_t local_88;
  uint64_t uStack_80;
  uint64_t local_78;
  uint64_t uStack_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  uVar12 = (uint32_t)((uint64_t)param_2 >> 0x20);
  uVar11 = (uint32_t)param_2;
  if ((char)this_ptr[0x2b] != '\0') {
    return;
  }
  *(void*)(this_ptr + 0x2b) = 1;
  FUN_00c8e2b0(param_1,in_EDX << 4);
  plVar5 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  (**(code **)(*this_ptr + 0x9a0))();
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01d87a05;
    }
  }
  else if (local_40 != (int64_t *)0x0) {
LAB_01d87a05:
    (**(code **)(*this_ptr + 0x640))();
    plVar7 = local_40;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar7 != (int64_t *)0x0) {
      (**(code **)(*this_ptr + 0x640))();
      FUN_01cc5a70();
      FUN_01d4ab50();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    uVar10 = FUN_01d480c0();
    local_a8 = plVar5;
    local_a0 = '\0';
    (**(code **)(*plVar2 + 0x568))(uVar10,&local_a8);
    plVar7 = local_40;
    if (plVar5 == local_40) {
LAB_01d87aed:
      plVar7 = plVar5;
      if (local_38 != '\0') {
LAB_01d87af3:
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if (plVar5 != (int64_t *)0x0) {
          FUN_00d50b20();
          plVar5 = plVar7;
          goto LAB_01d87aed;
        }
        if (local_38 == '\0') goto LAB_01d87b01;
        goto LAB_01d87af3;
      }
      if (plVar5 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      local_38 = '\0';
    }
LAB_01d87b01:
    if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d48370();
    (**(code **)(*plVar2 + 0x530))();
    local_48 = plVar7;
    if (g_028b8638 != '\0') {
      if ((g_028b8650 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
        g_028b8648 = '\0';
        g_028b8649 = '\0';
        ram_00000000028b864a = 0;
        g_028b8640._0_7_ = 0;
        g_028b8640._7_1_ = 0;
        ___cxa_atexit(extraout_XMM0_Da,0);
        ___cxa_guard_release();
      }
      if ((CONCAT17(g_028b8640._7_1_,(undefined7)g_028b8640) == 0) || (g_028b8649 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(g_028b8640._7_1_,(undefined7)g_028b8640) == 0) {
          uVar12 = 0;
          in_XMM1_Dc = 0;
          in_XMM1_Dd = 0;
          uVar11 = g_02390124;
          FUN_01cfcdc0(g_02390124,g_02390124,0,g_02390124);
          plVar5 = (int64_t *)CONCAT17(g_028b8640._7_1_,(undefined7)g_028b8640);
          plVar3 = plVar5;
          if (plVar5 != local_40) {
            if (local_38 == '\0') {
              if (local_40 == (int64_t *)0x0) {
                plVar3 = (int64_t *)0x0;
              }
              else {
                FUN_00d50b00();
                plVar5 = (int64_t *)CONCAT17(g_028b8640._7_1_,(undefined7)g_028b8640);
                plVar3 = local_40;
              }
            }
            else {
              local_38 = '\0';
              plVar3 = local_40;
            }
            g_028b8640._0_7_ = SUB87(plVar3,0);
            g_028b8640._7_1_ = (uint8_t)((uint64_t)plVar3 >> 0x38);
            if (plVar5 != (int64_t *)0x0) {
              FUN_00d50b20();
              plVar3 = local_40;
            }
          }
          if ((plVar3 != (int64_t *)0x0) && (g_028b8648 == '\0')) {
            g_028b8648 = '\x01';
            FUN_00e8cb90();
            plVar3 = local_40;
          }
          if ((local_38 != '\0') && (plVar3 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          g_028b8649 = '\x01';
          FUN_00e8cb70();
        }
        else {
          g_028b8649 = '\x01';
          FUN_00e8cb70();
        }
      }
      if ((g_028b8668 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
        g_028b8660 = '\0';
        g_028b8661 = '\0';
        ram_00000000028b8662 = 0;
        g_028b8658._0_7_ = 0;
        g_028b8658._7_1_ = 0;
        ___cxa_atexit(extraout_XMM0_Da_00,0);
        ___cxa_guard_release();
      }
      if ((CONCAT17(g_028b8658._7_1_,(undefined7)g_028b8658) == 0) || (g_028b8661 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(g_028b8658._7_1_,(undefined7)g_028b8658) == 0) {
          uVar11 = 0;
          uVar12 = 0;
          in_XMM1_Dc = 0;
          in_XMM1_Dd = 0;
          FUN_01cfcdc0(g_0239011c,0,0,g_02390124);
          plVar5 = (int64_t *)CONCAT17(g_028b8658._7_1_,(undefined7)g_028b8658);
          plVar3 = plVar5;
          if (plVar5 != local_40) {
            if (local_38 == '\0') {
              if (local_40 == (int64_t *)0x0) {
                plVar3 = (int64_t *)0x0;
              }
              else {
                FUN_00d50b00();
                plVar5 = (int64_t *)CONCAT17(g_028b8658._7_1_,(undefined7)g_028b8658);
                plVar3 = local_40;
              }
            }
            else {
              local_38 = '\0';
              plVar3 = local_40;
            }
            g_028b8658._0_7_ = SUB87(plVar3,0);
            g_028b8658._7_1_ = (uint8_t)((uint64_t)plVar3 >> 0x38);
            if (plVar5 != (int64_t *)0x0) {
              FUN_00d50b20();
              plVar3 = local_40;
            }
          }
          if ((plVar3 != (int64_t *)0x0) && (g_028b8660 == '\0')) {
            g_028b8660 = '\x01';
            FUN_00e8cb90();
            plVar3 = local_40;
          }
          if ((local_38 != '\0') && (plVar3 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          g_028b8661 = '\x01';
          FUN_00e8cb70();
        }
        else {
          g_028b8661 = '\x01';
          FUN_00e8cb70();
        }
      }
      if (plVar7 != (int64_t *)0x0) {
        iVar8 = -1;
        lVar9 = 8;
        while( true ) {
          iVar8 = iVar8 + 1;
          iVar6 = (int)plVar7[3];
          iVar4 = iVar6 + 0xf;
          if (-1 < iVar6) {
            iVar4 = iVar6;
          }
          if (iVar4 >> 4 <= iVar8) break;
          local_88 = *(void*)(plVar7[2] + -8 + lVar9);
          uStack_80 = 0;
          local_78 = *(void*)(plVar7[2] + lVar9);
          uStack_70 = 0;
          local_60 = 0;
          lVar1 = CONCAT17(g_028b8640._7_1_,(undefined7)g_028b8640);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          local_60 = '\x01';
          local_68 = lVar1;
          FUN_01d488d0();
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          (**(code **)(*plVar2 + 0x3b0))((uint32_t)local_88,(uint32_t)local_78);
          local_50 = 0;
          lVar1 = CONCAT17(g_028b8658._7_1_,(undefined7)g_028b8658);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          local_50 = '\x01';
          local_58 = lVar1;
          FUN_01d488d0();
          plVar7 = local_48;
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          lVar9 = lVar9 + 0x10;
          uVar11 = (uint32_t)local_78;
          uVar12 = local_78._4_4_;
          in_XMM1_Dc = (uint32_t)uStack_70;
          in_XMM1_Dd = uStack_70._4_4_;
          (**(code **)(*plVar2 + 0x3b8))((uint32_t)local_88);
        }
      }
      (**(code **)(*plVar2 + 0x540))();
    }
    plVar5 = (int64_t *)0x0;
    if (plVar7 != (int64_t *)0x0) {
      iVar8 = -1;
      lVar9 = 8;
      while( true ) {
        iVar8 = iVar8 + 1;
        iVar6 = (int)local_48[3];
        iVar4 = iVar6 + 0xf;
        if (-1 < iVar6) {
          iVar4 = iVar6;
        }
        plVar5 = local_48;
        if (iVar4 >> 4 <= iVar8) break;
        local_88 = *(void*)(local_48[2] + -8 + lVar9);
        uStack_80 = 0;
        local_78 = *(void*)(local_48[2] + lVar9);
        uStack_70 = 0;
        FUN_01e3f820();
        local_88 = FUN_00d05360();
        uStack_80 = CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
        local_78 = CONCAT44(uVar12,uVar11);
        uStack_70 = CONCAT44(in_XMM1_Dd,in_XMM1_Dc);
        FUN_01d48370();
        (**(code **)(*plVar2 + 0x390))((uint32_t)local_88,(uint32_t)local_78);
        local_98 = plVar2;
        local_90 = '\0';
        uVar11 = (uint32_t)local_78;
        uVar12 = local_78._4_4_;
        in_XMM1_Dc = (uint32_t)uStack_70;
        in_XMM1_Dd = uStack_70._4_4_;
        (**(code **)(*this_ptr + 0x610))((uint32_t)local_88);
        if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        lVar9 = lVar9 + 0x10;
        FUN_01d48390();
      }
    }
    uVar11 = FUN_01d48390();
    iVar8 = (int)plVar5[3];
    iVar6 = iVar8 + 0xf;
    if (-1 < iVar8) {
      iVar6 = iVar8;
    }
    FUN_01d481d0(uVar11,iVar6 >> 4);
    *(void*)(this_ptr + 0x2b) = 0;
    FUN_00d50b20();
    goto LAB_01d87f9d;
  }
  *(void*)(this_ptr + 0x2b) = 0;
LAB_01d87f9d:
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

