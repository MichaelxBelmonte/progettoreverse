// Function: FUN_01efa5d0
// Address: 01efa5d0
// Size: 2449 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01efa5d0(ulonglong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  longlong *plVar5;
  char cVar6;
  longlong *plVar7;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  int iVar8;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  undefined8 in_XMM0_Qb;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float local_148;
  longlong *local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong *local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  local_88 = param_1;
  uStack_80 = in_XMM0_Qb;
  FUN_01efa480();
  plVar5 = local_40;
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if (DAT_028ba659 == '\0') {
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
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
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
    if ((local_118 != '\0') && (local_120 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar7 == (longlong *)0x0) {
      DAT_028ba659 = '\x01';
    }
    else {
      cVar6 = (**(code **)(*plVar7 + 0x398))();
      if (cVar6 != '\0') {
        DAT_028ba658 = '\x01';
      }
      DAT_028ba659 = '\x01';
      FUN_00d50b20();
    }
  }
  if (DAT_028ba658 == '\0') {
    local_110 = *unaff_RSI;
    local_108 = '\0';
    FUN_01cc2c10();
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if ((DAT_028ba628 == (longlong *)0x0) || (DAT_028ba631 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028ba628 == (longlong *)0x0) {
        local_100 = plVar5;
        local_f8 = '\0';
        FUN_01d51a40();
        plVar7 = DAT_028ba628;
        if (DAT_028ba628 != local_40) {
          if (local_38 == '\0') {
            if (local_40 == (longlong *)0x0) {
              plVar7 = (longlong *)0x0;
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
          bVar4 = DAT_028ba628 != (longlong *)0x0;
          DAT_028ba628 = plVar7;
          if (bVar4) {
            FUN_00d50b20();
            plVar7 = local_40;
          }
        }
        if ((plVar7 != (longlong *)0x0) && (DAT_028ba630 == '\0')) {
          DAT_028ba630 = '\x01';
          FUN_00e8cb90();
          plVar7 = local_40;
        }
        if ((local_38 != '\0') && (plVar7 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        DAT_028ba631 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028ba631 = '\x01';
        FUN_00e8cb70();
      }
    }
    if ((DAT_028ba638 != (longlong *)0x0) && (DAT_028ba600 == '\0')) {
      DAT_028ba638 = (longlong *)0x0;
      FUN_00d50b20();
      DAT_028ba600 = '\x01';
    }
    if ((DAT_028ba638 == (longlong *)0x0) || (DAT_028ba641 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028ba638 == (longlong *)0x0) {
        FUN_01d4ead0();
        plVar7 = DAT_028ba638;
        if (DAT_028ba638 != local_40) {
          if (local_38 == '\0') {
            if (local_40 == (longlong *)0x0) {
              plVar7 = (longlong *)0x0;
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
          bVar4 = DAT_028ba638 != (longlong *)0x0;
          DAT_028ba638 = plVar7;
          if (bVar4) {
            FUN_00d50b20();
            plVar7 = local_40;
          }
        }
        if ((plVar7 != (longlong *)0x0) && (DAT_028ba640 == '\0')) {
          DAT_028ba640 = '\x01';
          FUN_00e8cb90();
          plVar7 = local_40;
        }
        if ((local_38 != '\0') && (plVar7 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (DAT_028ba638 != (longlong *)0x0) {
          FUN_01d52700();
          local_88 = local_88 & 0xffffffff00000000;
          iVar8 = 1;
          do {
            FUN_01d52740();
            lVar1 = *(longlong *)(unaff_RDI + 0x180);
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
            local_a0 = 0;
            lVar2 = *(longlong *)(unaff_RDI + 0x188);
            if (lVar2 != 0) {
              FUN_00d50b00();
            }
            local_a0 = '\x01';
            local_a8 = lVar2;
            FUN_01cfd290((float)local_88 / _DAT_024229fc,&local_a8);
            local_60 = local_50;
            local_58 = 0;
            if (local_48 == '\0') {
              if (local_50 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_48 = '\0';
            }
            local_58 = '\x01';
            FUN_01d488d0();
            if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_a0 != '\0') && (local_a8 != 0)) {
              FUN_00d50b20();
            }
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))();
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))
                      (DAT_0241126c - (float)local_88,0,DAT_0241126c - (float)local_88);
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            local_88 = CONCAT44(local_88._4_4_,(float)iVar8);
            iVar8 = iVar8 + 1;
          } while (iVar8 != 0x102);
          FUN_01d52770();
        }
        DAT_028ba641 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028ba641 = '\x01';
        FUN_00e8cb70();
      }
    }
    if (((DAT_028ba628 != (longlong *)0x0) && (FUN_01d526f0(), 0.0 < extraout_XMM0_Da)) &&
       (0.0 < extraout_XMM0_Db)) {
      fVar10 = (float)((ulonglong)param_2 >> 0x20) + 0.0 + DAT_02390d00;
      if (0.0 < fVar10) {
        fVar12 = (float)param_2 + 0.0 + DAT_02390d00;
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
              auVar9._8_4_ = (undefined4)uStack_80;
              auVar9._12_4_ = uStack_80._4_4_;
              auVar9 = insertps(auVar9,local_148,0x10);
              cVar6 = FUN_00d054a0(auVar9._0_8_,extraout_XMM0_Da,param_3,param_4);
              plVar7 = DAT_028ba628;
              if (cVar6 != '\0') {
                plVar3 = (longlong *)*unaff_RSI;
                local_90 = 0;
                if (DAT_028ba628 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
                local_98 = plVar7;
                local_90 = '\x01';
                (**(code **)(*plVar3 + 0x400))();
                if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
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
    plVar7 = DAT_028ba638;
    if (DAT_028ba638 != (longlong *)0x0) {
      if (DAT_028ba628 == (longlong *)0x0) {
        local_c8 = 0;
        FUN_00d50b00();
        local_d0 = plVar7;
        local_c8 = '\x01';
        FUN_01d49070();
        if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_d8 = 0;
        FUN_00d50b00();
        local_e0 = plVar7;
        local_d8 = '\x01';
        FUN_01d49240();
        if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


