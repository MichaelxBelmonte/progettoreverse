// Function: FUN_019939d0
// Address: 019939d0
// Size: 1508 bytes
// Class: MUScalePitchSystem


/* WARNING: Removing unreachable block (ram,0x01993d06) */
/* WARNING: Removing unreachable block (ram,0x01993d0f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019939d0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  float in_XMM0_Dc;
  float extraout_XMM0_Dc;
  float in_XMM0_Dd;
  float extraout_XMM0_Dd;
  float fVar11;
  float fVar12;
  undefined8 local_128;
  float fStack_120;
  longlong local_118;
  undefined1 local_110;
  undefined8 local_108;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  longlong *local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_48;
  char local_40;
  
  fVar12 = (float)((ulonglong)param_2 >> 0x20);
  fVar11 = (float)param_2;
  fStack_84 = (float)((ulonglong)param_1 >> 0x20);
  local_88 = (float)param_1;
  *(undefined4 *)(unaff_RDI + 0x78) = 0xfffffffe;
  lVar7 = unaff_RDI[7];
  plVar8 = (longlong *)0x0;
  bVar3 = false;
  local_f8 = fVar11;
  fStack_80 = in_XMM0_Dc;
  fStack_7c = in_XMM0_Dd;
  iVar5 = -2;
  do {
    if (0 < *(int *)(lVar7 + 0xc)) {
      lVar9 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(lVar7 + 0x10) + lVar9 * 8);
        if (plVar8 == plVar1) {
          if ((!bVar3) && (plVar8 != (longlong *)0x0)) {
            bVar3 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if ((bVar3) && (plVar8 != (longlong *)0x0)) {
            FUN_00d50b20();
            bVar3 = true;
            plVar8 = plVar1;
          }
          else {
            bVar3 = true;
            plVar8 = plVar1;
          }
        }
        lVar7 = unaff_RDI[0x78];
        iVar5 = FUN_01989fa0();
        if (iVar5 <= (int)lVar7) {
          lVar7 = unaff_RDI[0x78];
          iVar5 = FUN_01989fa0();
          iVar6 = FUN_01989fb0();
          if ((int)lVar7 < iVar6 + iVar5) {
            (**(code **)(*plVar8 + 0x4e0))();
            cVar4 = FUN_00d054a0();
            if (cVar4 != '\0') {
              uVar10 = (**(code **)(*plVar8 + 0x4d8))();
              fStack_100 = extraout_XMM0_Dc;
              fStack_fc = extraout_XMM0_Dd;
              local_108 = uVar10;
              (**(code **)(*(longlong *)*unaff_RSI + 0x368))();
              (**(code **)(*plVar8 + 0x500))();
              local_88 = local_88 - (float)local_108;
              fStack_84 = fStack_84 - local_108._4_4_;
              fStack_80 = fStack_80 - fStack_100;
              fStack_7c = fStack_7c - fStack_fc;
              uVar10 = FUN_00d05360();
              fStack_120 = fVar11;
              local_128 = uVar10;
              if ((DAT_0239424c < fVar11) && (DAT_0239424c < fVar12)) {
                local_e0 = '\0';
                local_d8 = *unaff_RSI;
                local_d0 = '\0';
                local_e8 = plVar8;
                (**(code **)(*unaff_RDI + 0x7a0))(&local_128,&local_d8);
                if ((local_d0 != '\0') && (local_d8 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              (**(code **)(*(longlong *)*unaff_RSI + 0x368))((uint)(float)local_108 ^ _DAT_023945e0)
              ;
              local_88 = local_88 + (float)local_108;
              fStack_84 = fStack_84 + local_108._4_4_;
              fStack_80 = fStack_80 + fStack_100;
              fStack_7c = fStack_7c + fStack_fc;
            }
          }
        }
        lVar9 = lVar9 + 1;
        lVar7 = unaff_RDI[7];
      } while (lVar9 < *(int *)(lVar7 + 0xc));
      iVar5 = (int)unaff_RDI[0x78];
    }
    *(int *)(unaff_RDI + 0x78) = iVar5 + 1;
    bVar2 = iVar5 < 3;
    iVar5 = iVar5 + 1;
  } while (bVar2);
  *(undefined4 *)(unaff_RDI + 0x78) = 0;
  if (*(char *)((longlong)unaff_RDI + 0x441) != '\0') {
    local_118 = *unaff_RSI;
    local_110 = 0;
    FUN_019928f0();
  }
  if (((*(float *)(unaff_RDI + 0x40) != 0.0) || (NAN(*(float *)(unaff_RDI + 0x40)))) &&
     ((*(float *)((longlong)unaff_RDI + 0x204) != 0.0 ||
      (NAN(*(float *)((longlong)unaff_RDI + 0x204)))))) {
    FUN_01d39800((int)unaff_RDI[0x3f],(int)unaff_RDI[0x40],DAT_023908d8);
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    FUN_01cfcdc0(DAT_0239011c,DAT_0239011c,DAT_0239011c,DAT_0239011c);
    local_68 = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_68 = '\x01';
    local_70 = local_48;
    FUN_01d488d0();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    local_c8 = local_48;
    local_c0 = '\0';
    (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    FUN_01cfcdc0(0,0,0,DAT_0239011c);
    local_58 = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_58 = '\x01';
    local_60 = local_48;
    FUN_01d488d0();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    local_b8 = local_48;
    local_b0 = '\0';
    (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 != 0) {
      FUN_00d50b20();
    }
  }
  if ((1 < *(int *)(unaff_RDI[0x41] + 0xc)) && ((char)unaff_RDI[0x51] != '\0')) {
    local_a8 = *unaff_RSI;
    local_a0 = '\0';
    (**(code **)(*unaff_RDI + 0xb90))(local_88,local_f8);
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((*(float *)(unaff_RDI + 0x5c) == (float)DAT_023dccec) &&
     (!NAN(*(float *)(unaff_RDI + 0x5c)) && !NAN((float)DAT_023dccec))) {
    if ((*(float *)((longlong)unaff_RDI + 0x2e4) == DAT_023dccec._4_4_) &&
       (!NAN(*(float *)((longlong)unaff_RDI + 0x2e4)) && !NAN(DAT_023dccec._4_4_))) {
      if ((*(float *)(unaff_RDI + 0x5d) == (float)DAT_023dccf4) &&
         (!NAN(*(float *)(unaff_RDI + 0x5d)) && !NAN((float)DAT_023dccf4))) {
        if ((*(float *)((longlong)unaff_RDI + 0x2ec) == DAT_023dccf4._4_4_) &&
           (!NAN(*(float *)((longlong)unaff_RDI + 0x2ec)) && !NAN(DAT_023dccf4._4_4_)))
        goto LAB_01993fa6;
      }
    }
  }
  local_98 = *unaff_RSI;
  local_90 = '\0';
  (**(code **)(*unaff_RDI + 0xb98))(local_88,local_f8);
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
LAB_01993fa6:
  if ((bVar3) && (plVar8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


