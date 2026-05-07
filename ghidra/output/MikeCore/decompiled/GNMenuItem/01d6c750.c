// Function: FUN_01d6c750
// Address: 01d6c750
// Size: 1936 bytes
// Class: GNMenuItem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d6c750(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  int iVar6;
  float fVar7;
  undefined8 uVar8;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float fVar10;
  undefined8 extraout_XMM0_Qb;
  float fVar11;
  undefined1 auVar9 [16];
  float fVar12;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  float local_98;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  if ((DAT_028b84c0 == (longlong *)0x0) || (DAT_028b84c9 == '\0')) {
    FUN_00e8cb50();
    lVar3 = DAT_027f0a88;
    if (DAT_028b84c0 == (longlong *)0x0) {
      if (DAT_027f0a88 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      plVar5 = DAT_028b84c0;
      if (DAT_028b84c0 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (longlong *)0x0) {
            plVar5 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar5 = local_40;
          }
        }
        else {
          local_38 = '\0';
          plVar5 = local_40;
        }
        bVar2 = DAT_028b84c0 != (longlong *)0x0;
        DAT_028b84c0 = plVar5;
        if (bVar2) {
          FUN_00d50b20();
          plVar5 = local_40;
        }
      }
      if ((plVar5 != (longlong *)0x0) && (DAT_028b84c8 == '\0')) {
        DAT_028b84c8 = '\x01';
        FUN_00e8cb90();
        plVar5 = local_40;
      }
      if ((local_38 != '\0') && (plVar5 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_028b84c9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b84c9 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028b84d0 == (longlong *)0x0) || (DAT_028b84d9 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b84d0 == (longlong *)0x0) {
      FUN_01d4ead0();
      plVar5 = DAT_028b84d0;
      if (DAT_028b84d0 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (longlong *)0x0) {
            plVar5 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar5 = local_40;
          }
        }
        else {
          local_38 = '\0';
          plVar5 = local_40;
        }
        bVar2 = DAT_028b84d0 != (longlong *)0x0;
        DAT_028b84d0 = plVar5;
        if (bVar2) {
          FUN_00d50b20();
          plVar5 = local_40;
        }
      }
      if ((plVar5 != (longlong *)0x0) && (DAT_028b84d8 == '\0')) {
        DAT_028b84d8 = '\x01';
        FUN_00e8cb90();
        plVar5 = local_40;
      }
      if ((local_38 != '\0') && (plVar5 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (DAT_028b84d0 != (longlong *)0x0) {
        FUN_01d52700();
        local_98 = 0.0;
        iVar6 = 1;
        do {
          FUN_01d52740();
          (**(code **)(*unaff_RDI + 0x3a0))();
          if (local_b0 == '\0') {
            if (local_b8 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_b0 = '\0';
          }
          (**(code **)(*unaff_RDI + 0x3a8))();
          local_48 = 0;
          if (local_a0 == '\0') {
            if (local_a8 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_a0 = '\0';
          }
          local_48 = '\x01';
          local_50 = local_a8;
          FUN_01cfd290(local_98 / _DAT_024229fc,&local_50);
          if (local_c0 == '\0') {
            if (local_c8 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_c0 = '\0';
          }
          FUN_01d488d0();
          if (local_c8 != 0) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          if (local_b8 != 0) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != 0)) {
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
          (**(code **)(*local_40 + 0x3e0))();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_98 = (float)iVar6;
          iVar6 = iVar6 + 1;
        } while (iVar6 != 0x102);
        FUN_01d52770();
      }
      DAT_028b84d9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b84d9 = '\x01';
      FUN_00e8cb70();
    }
  }
  if (((DAT_028b84c0 != (longlong *)0x0) && (uVar8 = FUN_01d526f0(), 0.0 < (float)uVar8)) &&
     (0.0 < (float)((ulonglong)uVar8 >> 0x20))) {
    fVar10 = in_XMM1_Dc + 0.0;
    fVar11 = in_XMM1_Dd + 0.0;
    fVar13 = (float)((ulonglong)param_2 >> 0x20) + 0.0 + DAT_02390d00;
    if (0.0 < fVar13) {
      fVar14 = (float)param_2 + 0.0 + DAT_02390d00;
      if (fVar14 <= 0.0) {
        fVar10 = 0.0;
        do {
          FUN_01d526f0();
          fVar10 = fVar10 + extraout_XMM0_Db_00;
        } while (fVar10 < fVar13);
      }
      else {
        uVar17 = 0;
        uVar18 = 0;
        uVar15 = extraout_XMM0_Qb;
        do {
          fVar12 = 0.0;
          do {
            auVar9 = insertps(ZEXT416((uint)fVar12),(int)uVar17,0x10);
            cVar4 = FUN_00d054a0(auVar9._0_8_,(int)uVar8,param_3,param_4,fVar14,fVar10,uVar8,uVar15,
                                 fVar13,fVar11,uVar17,uVar18);
            plVar5 = DAT_028b84c0;
            if (cVar4 != '\0') {
              plVar1 = (longlong *)*unaff_RSI;
              if (DAT_028b84c0 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              (**(code **)(*plVar1 + 0x400))();
              if (plVar5 != (longlong *)0x0) {
                FUN_00d50b20();
              }
            }
            fVar7 = (float)FUN_01d526f0();
            fVar16 = (float)uVar17;
            fVar12 = fVar12 + fVar7;
          } while (fVar12 < fVar14);
          FUN_01d526f0();
          uVar17 = (ulonglong)(uint)(fVar16 + extraout_XMM0_Db);
        } while (fVar16 + extraout_XMM0_Db < fVar13);
      }
    }
  }
  plVar5 = DAT_028b84d0;
  if (DAT_028b84d0 != (longlong *)0x0) {
    if (DAT_028b84c0 == (longlong *)0x0) {
      FUN_00d50b00();
      FUN_01d49070();
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
      FUN_01d49240();
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}


