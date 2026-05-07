// Function: FUN_007f9c50
// Address: 007f9c50
// Size: 1991 bytes
// Class: MDMetaWindowController


/* WARNING: Removing unreachable block (ram,0x007f9c90) */
/* WARNING: Removing unreachable block (ram,0x007f9c9c) */

void FUN_007f9c50(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar5;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar6;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  float fVar7;
  float extraout_XMM0_Db_02;
  float extraout_XMM0_Db_03;
  float extraout_XMM0_Db_04;
  float extraout_XMM0_Db_05;
  float extraout_XMM0_Db_06;
  float fVar8;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  undefined8 local_68;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  fVar7 = (float)((ulonglong)param_2 >> 0x20);
  fVar8 = (float)param_2;
  FUN_01a22d80();
  uVar5 = (**(code **)(*unaff_RDI + 0x640))();
  plVar1 = local_50;
  local_a8 = DAT_026e41f0;
  if (DAT_026e41f0 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_a0 = '\x01';
  (**(code **)(*plVar1 + 0x3b0))(uVar5,&local_a8);
  local_78 = local_40;
  local_70 = 0;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_70 = '\x01';
  FUN_01d488d0();
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40(DAT_02390124);
  cVar2 = FUN_01d951e0();
  if (cVar2 == '\0') {
    (**(code **)(*unaff_RDI + 0x960))();
    plVar1 = local_40;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      lVar4 = unaff_RDI[0x3e];
      if (lVar4 == 0) {
        puVar3 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = &DAT_02680400;
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        *(undefined8 *)((longlong)puVar3 + 0x39) = 0;
        *(undefined8 *)((longlong)puVar3 + 0x41) = 0;
        (*DAT_02680418)();
        lVar4 = unaff_RDI[0x3e];
        unaff_RDI[0x3e] = (longlong)puVar3;
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        (**(code **)(*unaff_RDI + 0x960))();
        local_68 = (**(code **)(*local_40 + 0x4d8))();
        (**(code **)(*unaff_RDI + 0x960))();
        (**(code **)(*local_50 + 0x4d8))();
        fVar7 = extraout_XMM0_Db_04 + fVar7;
        FUN_01d39400((float)local_68 + fVar8 + DAT_02390d00,fVar7 + DAT_02390d00);
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*unaff_RDI + 0x960))();
        uVar6 = (**(code **)(*local_40 + 0x4d8))();
        local_68 = uVar6;
        (**(code **)(*unaff_RDI + 0x960))();
        (**(code **)(*local_50 + 0x4d8))();
        fVar7 = extraout_XMM0_Db_05 + fVar7;
        FUN_01d38ba0((float)local_68,fVar7 + DAT_02390d00);
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*unaff_RDI + 0x960))();
        uVar6 = (**(code **)(*local_40 + 0x4d8))();
        local_68 = uVar6;
        (**(code **)(*unaff_RDI + 0x960))();
        (**(code **)(*local_50 + 0x4d8))();
        FUN_01d38ba0((float)local_68,extraout_XMM0_Db_06 + fVar7 + DAT_02390d00 + DAT_023b2664);
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        lVar4 = unaff_RDI[0x3e];
      }
      plVar1 = (longlong *)*unaff_RSI;
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      local_80 = '\x01';
      local_88 = lVar4;
      (**(code **)(*plVar1 + 0x3a8))();
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_01d97e80();
    plVar1 = local_40;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_01d97ec0();
      plVar1 = local_40;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*unaff_RDI + 0x960))();
        plVar1 = local_40;
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          lVar4 = unaff_RDI[0x3e];
          if (lVar4 == 0) {
            puVar3 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar3 = &DAT_02680400;
            *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
            puVar3[6] = 0;
            puVar3[7] = 0;
            *(undefined8 *)((longlong)puVar3 + 0x39) = 0;
            *(undefined8 *)((longlong)puVar3 + 0x41) = 0;
            (*DAT_02680418)();
            lVar4 = unaff_RDI[0x3e];
            unaff_RDI[0x3e] = (longlong)puVar3;
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
            FUN_01d97e80();
            local_68 = (**(code **)(*local_40 + 0x4d8))();
            FUN_01d97e80();
            (**(code **)(*local_50 + 0x4d8))();
            FUN_01d39400((float)local_68,extraout_XMM0_Db);
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d97ec0();
            uVar6 = (**(code **)(*local_40 + 0x4d8))();
            local_68 = uVar6;
            FUN_01d97e80();
            (**(code **)(*local_50 + 0x4d8))();
            fVar7 = extraout_XMM0_Db_00;
            FUN_01d38ba0((float)local_68,extraout_XMM0_Db_00);
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d97ec0();
            uVar6 = (**(code **)(*local_40 + 0x4d8))();
            local_68 = uVar6;
            (**(code **)(*unaff_RDI + 0x960))();
            (**(code **)(*local_50 + 0x4d8))();
            fVar7 = extraout_XMM0_Db_01 + fVar7;
            FUN_01d38ba0((float)local_68,fVar7 + DAT_02390d00);
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            (**(code **)(*unaff_RDI + 0x960))();
            uVar6 = (**(code **)(*local_40 + 0x4d8))();
            local_68 = uVar6;
            (**(code **)(*unaff_RDI + 0x960))();
            (**(code **)(*local_50 + 0x4d8))();
            fVar7 = extraout_XMM0_Db_02 + fVar7;
            FUN_01d38ba0((float)local_68,fVar7 + DAT_02390d00);
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            (**(code **)(*unaff_RDI + 0x960))();
            uVar6 = (**(code **)(*local_40 + 0x4d8))();
            local_68 = uVar6;
            (**(code **)(*unaff_RDI + 0x960))();
            (**(code **)(*local_50 + 0x4d8))();
            FUN_01d38ba0((float)local_68,extraout_XMM0_Db_03 + fVar7 + DAT_02390d00 + DAT_023b2664);
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            lVar4 = unaff_RDI[0x3e];
          }
          plVar1 = (longlong *)*unaff_RSI;
          if (lVar4 != 0) {
            FUN_00d50b00();
          }
          local_90 = '\x01';
          local_98 = lVar4;
          (**(code **)(*plVar1 + 0x3a8))();
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
        }
      }
    }
  }
  return;
}


