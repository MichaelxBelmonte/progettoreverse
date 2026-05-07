// Function: FUN_01c025c0
// Address: 01c025c0
// Size: 1772 bytes
// Class: MUMultiTrackDropTarget


/* WARNING: Removing unreachable block (ram,0x01c027f5) */
/* WARNING: Removing unreachable block (ram,0x01c02801) */
/* WARNING: Removing unreachable block (ram,0x01c02885) */
/* WARNING: Removing unreachable block (ram,0x01c02891) */

void FUN_01c025c0(double param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  float fVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 in_RAX;
  char in_CL;
  char *pcVar6;
  undefined7 uVar8;
  longlong *plVar7;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  float fVar15;
  undefined1 auVar14 [16];
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  longlong *local_100;
  char local_f8;
  longlong *local_b0;
  char local_a8 [16];
  int local_98;
  undefined8 local_94;
  undefined8 local_88;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  undefined4 local_3c;
  longlong *local_38;
  
  plVar7 = (longlong *)*param_2;
  local_3c = (undefined4)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)param_2[1]);
  if (((char)param_2[1] != '\0') && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  local_78 = FUN_01c02540();
  uStack_70 = extraout_XMM0_Dc;
  uStack_6c = extraout_XMM0_Dd;
  FUN_01bcb030();
  uVar11 = FUN_01cf5cf0();
  if ((local_a8[0] != '\0') && (local_b0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00ca1380();
  pcVar6 = &local_50;
  if (local_a8[0] != '\0') {
    pcVar6 = local_a8;
  }
  local_50 = local_a8[0];
  *pcVar6 = '\0';
  local_58 = local_b0;
  if ((local_a8[0] != '\0') && (local_b0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_50 == '\0') {
    if (local_58 == (longlong *)0x0) goto LAB_01c02c4d;
    FUN_00d50b00();
  }
  else if (local_58 == (longlong *)0x0) goto LAB_01c02c4d;
  local_a8[0] = '\0';
  local_b0 = (longlong *)0x0;
  local_94 = 0;
  lVar9 = 0;
  auVar14 = ZEXT816(0);
  local_38 = plVar7;
  fVar3 = DAT_0241e400;
  fVar15 = DAT_0241e400;
  uVar12 = local_78;
  do {
    plVar7 = local_38;
    local_78._4_4_ = (float)((ulonglong)uVar12 >> 0x20);
    local_78._0_4_ = (float)uVar12;
    local_98 = (int)lVar9;
    if (*(int *)((longlong)local_58 + 0xc) <= local_98) break;
    local_b0 = *(longlong **)(local_58[2] + lVar9 * 8);
    local_78 = uVar12;
    if (*(char *)(unaff_RDI + 0x21) == '\0') {
      if (local_38 != (longlong *)0x0) {
        FUN_01bcb030();
        local_88 = (double)FUN_01e437f0(0);
        uStack_7c = extraout_XMM0_Dd_00;
        if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*plVar7 + 0x4d8))();
        local_78._0_4_ = local_88._4_4_;
        local_78._4_4_ = local_88._4_4_;
        uStack_70 = uStack_7c;
        uStack_6c = uStack_7c;
        fVar15 = auVar14._4_4_;
      }
    }
    else if (local_98 == 0) {
      if (local_38 != (longlong *)0x0) {
        FUN_01bcb030();
        local_88 = (double)FUN_01e437f0(0);
        if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*plVar7 + 0x4d8))();
        local_78._4_4_ = auVar14._4_4_;
        uStack_70 = auVar14._12_4_;
        local_78._0_4_ = local_78._4_4_ * DAT_0239011c + local_88._4_4_;
        uStack_6c = uStack_70;
        fVar3 = local_78._4_4_;
        fVar15 = local_78._4_4_;
      }
    }
    else {
      local_78._0_4_ = (float)local_78 + fVar3;
    }
    local_88 = param_1 - (double)local_b0[5];
    (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
    cVar5 = (**(code **)(*(longlong *)CONCAT71(uStack_4f,local_50) + 0x3c8))();
    if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
      FUN_00d50b20();
    }
    if (cVar5 != '\0') {
      local_88 = (double)(**(code **)(*(longlong *)*unaff_RSI + 0x370))(SUB84(local_88,0));
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
    uVar12 = (**(code **)(*(longlong *)CONCAT71(uStack_4f,local_50) + 0x390))(SUB84(local_88,0));
    if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
    uVar13 = (**(code **)(*(longlong *)CONCAT71(uStack_4f,local_50) + 0x390))
                       (SUB84((double)local_b0[6] + local_88,0));
    if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
      FUN_00d50b20();
    }
    fVar18 = (float)uVar13 - (float)uVar12;
    fVar16 = (float)uVar12 - (float)uVar11;
    auVar14._4_4_ = (int)((ulonglong)uVar12 >> 0x20);
    auVar14._0_4_ = fVar16;
    auVar14._8_4_ = extraout_XMM0_Dc_00;
    auVar14._12_4_ = extraout_XMM0_Dd_01;
    auVar17._4_4_ = (int)((ulonglong)uVar13 >> 0x20);
    auVar17._0_4_ = fVar18;
    auVar17._8_4_ = extraout_XMM0_Dc_01;
    auVar17._12_4_ = extraout_XMM0_Dd_02;
    if (((((*(float *)(local_b0 + 7) != fVar16) || (NAN(*(float *)(local_b0 + 7)) || NAN(fVar16)))
         || (*(float *)((longlong)local_b0 + 0x3c) != (float)local_78)) ||
        ((NAN(*(float *)((longlong)local_b0 + 0x3c)) || NAN((float)local_78) ||
         (*(float *)(local_b0 + 8) != fVar18)))) || (NAN(*(float *)(local_b0 + 8)) || NAN(fVar18)))
    {
LAB_01c02a20:
      auVar14 = insertps(auVar14,(float)local_78,0x10);
      auVar17 = insertps(auVar17,fVar15,0x10);
      auVar14._8_8_ = auVar17._0_8_;
      *(undefined1 (*) [16])(local_b0 + 7) = auVar14;
      *(undefined1 *)(unaff_RDI + 0x20) = 1;
    }
    else if ((*(float *)((longlong)local_b0 + 0x44) != fVar15) ||
            (NAN(*(float *)((longlong)local_b0 + 0x44)) || NAN(fVar15))) goto LAB_01c02a20;
    FUN_01bcc520();
    uVar10 = (**(code **)(*local_100 + 0x998))(SUB84(local_88,0));
    local_60 = 0;
    lVar1 = CONCAT71(uStack_4f,local_50);
    if (local_48 == '\0') {
      if (lVar1 != 0) {
        uVar10 = FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    plVar7 = local_38;
    local_60 = '\x01';
    local_68 = lVar1;
    FUN_01c03020(uVar10,(undefined1 *)(unaff_RDI + 0x20));
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
      FUN_00d50b20();
    }
    if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (*(char *)(unaff_RDI + 0x21) == '\0') {
      if (plVar7 == (longlong *)0x0) {
        local_78._0_4_ = (float)local_78 + fVar15;
        local_38 = (longlong *)0x0;
      }
      else {
        FUN_01be64b0();
        plVar2 = (longlong *)CONCAT71(uStack_4f,local_50);
        uVar8 = (undefined7)((ulonglong)plVar7 >> 8);
        if (plVar2 == plVar7) {
          uVar10 = local_3c;
          plVar2 = local_38;
          if ((char)local_3c == '\0') {
            if (local_48 != '\0') {
              local_3c = (undefined4)CONCAT71(uVar8,1);
              goto LAB_01c02745;
            }
            FUN_00d50b00();
            uVar10 = (int)CONCAT71(uVar8,1);
            plVar2 = local_38;
          }
LAB_01c02ba9:
          local_38 = plVar2;
          uVar4 = local_3c;
          plVar2 = local_38;
          if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
            FUN_00d50b20();
            uVar4 = local_3c;
            plVar2 = local_38;
          }
        }
        else {
          if (local_48 == '\0') {
            if (plVar2 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            uVar10 = (undefined4)CONCAT71(uVar8,1);
            if ((char)local_3c != '\0') {
              FUN_00d50b20();
            }
            goto LAB_01c02ba9;
          }
          uVar10 = (undefined4)CONCAT71(uVar8,1);
          uVar4 = local_3c;
          if ((char)local_3c != '\0') {
            FUN_00d50b20();
            uVar4 = local_3c;
          }
        }
        local_38 = plVar2;
        local_3c = uVar10;
        if (local_38 == (longlong *)0x0) {
          local_3c = uVar4;
          uVar12 = FUN_01c02540();
          local_78._4_4_ = (float)((ulonglong)uVar12 >> 0x20);
          local_78._0_4_ = (float)uVar12 - (float)((ulonglong)uVar11 >> 0x20);
          local_38 = (longlong *)0x0;
          local_3c = uVar10;
          uStack_70 = extraout_XMM0_Dc_02;
          uStack_6c = extraout_XMM0_Dd_03;
          fVar15 = DAT_0241e400;
        }
      }
    }
LAB_01c02745:
    uVar12 = CONCAT44(local_78._4_4_,(float)local_78);
    lVar9 = lVar9 + 1;
  } while (in_CL != '\0');
  uVar10 = local_3c;
  local_78 = uVar12;
  FUN_01c051e0();
  FUN_00d50b20();
  plVar7 = local_38;
  local_3c = uVar10;
LAB_01c02c4d:
  if (*(char *)(unaff_RDI + 0x20) != '\0') {
    FUN_01bcaf90();
    (**(code **)(*local_b0 + 0x620))();
    if ((local_a8[0] != '\0') && (local_b0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    *(undefined1 *)(unaff_RDI + 0x20) = 0;
  }
  if (((char)local_3c != '\0') && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


