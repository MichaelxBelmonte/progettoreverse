// Function: FUN_01efa5d0
// Address: 01efa5d0
// Size: 2449 bytes
// Class: Unknown

void FUN_01efa5d0(uint64_t param_1,uint64_t param_2,uint32_t param_3,uint32_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  bool bVar4;
  int64_t *plVar5;
  char cVar6;
  int64_t *plVar7;
  int64_t *arg1;
  int64_t this_ptr;
  int iVar8;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  uint64_t in_XMM0_Qb;
  uint8_t auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float local_148;
  int64_t *local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  uint64_t local_88;
  uint64_t uStack_80;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  local_88 = param_1;
  uStack_80 = in_XMM0_Qb;
  FUN_01efa480();
  plVar5 = local_40;
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if (g_028ba659 == '\0') {
    FUN_01f27fe0();
    plVar7 = local_50;
    local_120 = plVar5;
    local_118 = '\0';
    FUN_01ea01c0();
    local_70 = local_f0;
    local_68 = 0;
    if (local_e8 == '\0') {
      if (local_f0 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_e8 = '\0';
    }
    local_68 = '\x01';
    (**(code **)(*plVar7 + 0x5f8))(&local_70,&local_120);
    plVar7 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_118 != '\0') && (local_120 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar7 == (int64_t *)0x0) {
      g_028ba659 = '\x01';
    }
    else {
      cVar6 = (**(code **)(*plVar7 + 0x398))();
      if (cVar6 != '\0') {
        g_028ba658 = '\x01';
      }
      g_028ba659 = '\x01';
      FUN_00d50b20();
    }
  }
  if (g_028ba658 == '\0') {
    local_110 = *arg1;
    local_108 = '\0';
    FUN_01cc2c10();
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if ((g_028ba628 == (int64_t *)0x0) || (g_028ba631 == '\0')) {
      FUN_00e8cb50();
      if (g_028ba628 == (int64_t *)0x0) {
        local_100 = plVar5;
        local_f8 = '\0';
        FUN_01d51a40();
        plVar7 = g_028ba628;
        if (g_028ba628 != local_40) {
          if (local_38 == '\0') {
            if (local_40 == (int64_t *)0x0) {
              plVar7 = (int64_t *)0x0;
            }
            else {
              FUN_00d50b00();
              plVar7 = local_40;
            }
          }
          else {
            local_38 = '\0';
            plVar7 = local_40;
          }
          bVar4 = g_028ba628 != (int64_t *)0x0;
          g_028ba628 = plVar7;
          if (bVar4) {
            FUN_00d50b20();
            plVar7 = local_40;
          }
        }
        if ((plVar7 != (int64_t *)0x0) && (g_028ba630 == '\0')) {
          g_028ba630 = '\x01';
          FUN_00e8cb90();
          plVar7 = local_40;
        }
        if ((local_38 != '\0') && (plVar7 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        g_028ba631 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028ba631 = '\x01';
        FUN_00e8cb70();
      }
    }
    if ((g_028ba638 != (int64_t *)0x0) && (g_028ba600 == '\0')) {
      g_028ba638 = (int64_t *)0x0;
      FUN_00d50b20();
      g_028ba600 = '\x01';
    }
    if ((g_028ba638 == (int64_t *)0x0) || (g_028ba641 == '\0')) {
      FUN_00e8cb50();
      if (g_028ba638 == (int64_t *)0x0) {
        FUN_01d4ead0();
        plVar7 = g_028ba638;
        if (g_028ba638 != local_40) {
          if (local_38 == '\0') {
            if (local_40 == (int64_t *)0x0) {
              plVar7 = (int64_t *)0x0;
            }
            else {
              FUN_00d50b00();
              plVar7 = local_40;
            }
          }
          else {
            local_38 = '\0';
            plVar7 = local_40;
          }
          bVar4 = g_028ba638 != (int64_t *)0x0;
          g_028ba638 = plVar7;
          if (bVar4) {
            FUN_00d50b20();
            plVar7 = local_40;
          }
        }
        if ((plVar7 != (int64_t *)0x0) && (g_028ba640 == '\0')) {
          g_028ba640 = '\x01';
          FUN_00e8cb90();
          plVar7 = local_40;
        }
        if ((local_38 != '\0') && (plVar7 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (g_028ba638 != (int64_t *)0x0) {
          FUN_01d52700();
          local_88 = local_88 & 0xffffffff00000000;
          iVar8 = 1;
          do {
            FUN_01d52740();
            lVar1 = *(int64_t *)(this_ptr + 0x180);
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
            local_a0 = 0;
            lVar2 = *(int64_t *)(this_ptr + 0x188);
            if (lVar2 != 0) {
              FUN_00d50b00();
            }
            local_a0 = '\x01';
            local_a8 = lVar2;
            FUN_01cfd290((float)local_88 / g_024229fc,&local_a8);
            local_60 = local_50;
            local_58 = 0;
            if (local_48 == '\0') {
              if (local_50 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_48 = '\0';
            }
            local_58 = '\x01';
            FUN_01d488d0();
            if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_a0 != '\0') && (local_a8 != 0)) {
              FUN_00d50b20();
            }
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))();
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))
                      (g_0241126c - (float)local_88,0,g_0241126c - (float)local_88);
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            local_88 = CONCAT44(local_88._4_4_,(float)iVar8);
            iVar8 = iVar8 + 1;
          } while (iVar8 != 0x102);
          FUN_01d52770();
        }
        g_028ba641 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028ba641 = '\x01';
        FUN_00e8cb70();
      }
    }
    if (((g_028ba628 != (int64_t *)0x0) && (FUN_01d526f0(), 0.0 < extraout_XMM0_Da)) &&
       (0.0 < extraout_XMM0_Db)) {
      fVar10 = (float)((uint64_t)param_2 >> 0x20) + 0.0 + g_02390d00;
      if (0.0 < fVar10) {
        fVar12 = (float)param_2 + 0.0 + g_02390d00;
        if (fVar12 <= 0.0) {
          fVar12 = 0.0;
          do {
            local_88 = CONCAT44(local_88._4_4_,fVar12);
            FUN_01d526f0();
            fVar12 = (float)local_88 + extraout_XMM0_Db_01;
          } while (fVar12 < fVar10);
        }
        else {
          local_148 = 0.0;
          do {
            fVar11 = 0.0;
            local_88._4_4_ = 0;
            uStack_80._0_4_ = 0;
            uStack_80._4_4_ = 0;
            do {
              local_88 = CONCAT44(local_88._4_4_,fVar11);
              auVar9._4_4_ = local_88._4_4_;
              auVar9._0_4_ = fVar11;
              auVar9._8_4_ = (uint32_t)uStack_80;
              auVar9._12_4_ = uStack_80._4_4_;
              auVar9 = insertps(auVar9,local_148,0x10);
              cVar6 = FUN_00d054a0(auVar9._0_8_,extraout_XMM0_Da,param_3,param_4);
              plVar7 = g_028ba628;
              if (cVar6 != '\0') {
                plVar3 = (int64_t *)*arg1;
                local_90 = 0;
                if (g_028ba628 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
                local_98 = plVar7;
                local_90 = '\x01';
                (**(code **)(*plVar3 + 0x400))();
                if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              fVar11 = (float)FUN_01d526f0();
              fVar11 = (float)local_88 + fVar11;
            } while (fVar11 < fVar12);
            FUN_01d526f0();
            local_148 = local_148 + extraout_XMM0_Db_00;
          } while (local_148 < fVar10);
        }
      }
    }
    plVar7 = g_028ba638;
    if (g_028ba638 != (int64_t *)0x0) {
      if (g_028ba628 == (int64_t *)0x0) {
        local_c8 = 0;
        FUN_00d50b00();
        local_d0 = plVar7;
        local_c8 = '\x01';
        FUN_01d49070();
        if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_d8 = 0;
        FUN_00d50b00();
        local_e0 = plVar7;
        local_d8 = '\x01';
        FUN_01d49240();
        if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

