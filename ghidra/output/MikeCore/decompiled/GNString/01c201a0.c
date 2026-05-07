// Function: FUN_01c201a0
// Address: 01c201a0
// Size: 2506 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01c20402) */
/* WARNING: Removing unreachable block (ram,0x01c2040e) */
/* WARNING: Removing unreachable block (ram,0x01c202e6) */
/* WARNING: Removing unreachable block (ram,0x01c202f2) */
/* WARNING: Removing unreachable block (ram,0x01c20abd) */
/* WARNING: Removing unreachable block (ram,0x01c20ac9) */
/* WARNING: Removing unreachable block (ram,0x01c205e6) */
/* WARNING: Removing unreachable block (ram,0x01c205f6) */
/* WARNING: Removing unreachable block (ram,0x01c203c7) */
/* WARNING: Removing unreachable block (ram,0x01c203d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c201a0(undefined4 param_1)

{
  double dVar1;
  longlong *plVar2;
  bool bVar3;
  code *pcVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  longlong *local_130;
  char local_128;
  float local_68;
  longlong local_40;
  char local_38;
  
  cVar5 = (**(code **)(*unaff_RDI + 0x628))();
  if (cVar5 != '\0') {
    (**(code **)(*unaff_RDI + 0x640))();
    (**(code **)(*local_130 + 0x480))(0,0x11,0);
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_128 != '\0') && (local_130 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar2 = (longlong *)*unaff_RSI;
    FUN_01e3f820();
    (**(code **)(*plVar2 + 0x3b0))();
  }
  FUN_01e44a80(param_1);
  if ((*(float *)(unaff_RDI + 0x40) != 0.0) || (NAN(*(float *)(unaff_RDI + 0x40)))) {
    fVar10 = 0.0;
    fVar8 = DAT_02390124;
    FUN_01cfc9f0(0);
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    plVar2 = (longlong *)*unaff_RSI;
    FUN_01e3f820();
    (**(code **)(*plVar2 + 0x3b0))();
    if ((DAT_028b64b8 == 0) || (DAT_028b64c1 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028b64b8 == 0) {
        FUN_01cfcdc0(0,0,0,DAT_02390124);
        lVar7 = DAT_028b64b8;
        if (DAT_028b64b8 != local_40) {
          if (local_38 == '\0') {
            if (local_40 == 0) {
              lVar7 = 0;
            }
            else {
              FUN_00d50b00();
              lVar7 = local_40;
            }
          }
          else {
            local_38 = '\0';
            lVar7 = local_40;
          }
          bVar3 = DAT_028b64b8 != 0;
          DAT_028b64b8 = lVar7;
          if (bVar3) {
            FUN_00d50b20();
            lVar7 = local_40;
          }
        }
        if ((lVar7 != 0) && (DAT_028b64c0 == '\0')) {
          DAT_028b64c0 = '\x01';
          FUN_00e8cb90();
          lVar7 = local_40;
        }
        if ((local_38 != '\0') && (lVar7 != 0)) {
          FUN_00d50b20();
        }
        FUN_01cfcdc0(DAT_0239011c,DAT_0239011c,DAT_0239011c,DAT_023b3888);
        lVar7 = DAT_028b64a8;
        if (DAT_028b64a8 != local_40) {
          if (local_38 == '\0') {
            if (local_40 == 0) {
              lVar7 = 0;
            }
            else {
              FUN_00d50b00();
              lVar7 = local_40;
            }
          }
          else {
            local_38 = '\0';
            lVar7 = local_40;
          }
          bVar3 = DAT_028b64a8 != 0;
          DAT_028b64a8 = lVar7;
          if (bVar3) {
            FUN_00d50b20();
            lVar7 = local_40;
          }
        }
        if ((lVar7 != 0) && (DAT_028b64b0 == '\0')) {
          DAT_028b64b0 = '\x01';
          FUN_00e8cb90();
          lVar7 = local_40;
        }
        if ((local_38 != '\0') && (lVar7 != 0)) {
          FUN_00d50b20();
        }
        fVar10 = 0.0;
        fVar8 = DAT_02390124;
        FUN_01cfbee0(DAT_02390124,DAT_02390124,DAT_02390124);
        lVar7 = DAT_028b64c8;
        if (DAT_028b64c8 != local_40) {
          if (local_38 == '\0') {
            if (local_40 == 0) {
              lVar7 = 0;
            }
            else {
              FUN_00d50b00();
              lVar7 = local_40;
            }
          }
          else {
            local_38 = '\0';
            lVar7 = local_40;
          }
          bVar3 = DAT_028b64c8 != 0;
          DAT_028b64c8 = lVar7;
          if (bVar3) {
            FUN_00d50b20();
            lVar7 = local_40;
          }
        }
        if ((lVar7 != 0) && (DAT_028b64d0 == '\0')) {
          DAT_028b64d0 = '\x01';
          FUN_00e8cb90();
          lVar7 = local_40;
        }
        if ((local_38 != '\0') && (lVar7 != 0)) {
          FUN_00d50b20();
        }
        DAT_028b64c1 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028b64c1 = '\x01';
        FUN_00e8cb70();
      }
    }
    uVar9 = FUN_01e3f820();
    lVar7 = DAT_028b64c8;
    if (DAT_028b64c8 != 0) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    fVar11 = fVar10;
    if (fVar8 <= fVar10) {
      fVar11 = fVar8;
    }
    fVar11 = (fVar11 + DAT_023b1608) * DAT_0239011c + DAT_02390d00;
    fVar8 = (float)uVar9 + fVar8 * _DAT_023945d0;
    fVar10 = (float)((ulonglong)uVar9 >> 0x20) + fVar10 * _UNK_023945d4;
    (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))();
    lVar7 = DAT_028b64a8;
    if (DAT_028b64a8 != 0) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (0.0 < *(float *)(unaff_RDI + 0x40)) {
      puVar6 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &DAT_02680400;
      *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      puVar6[6] = 0;
      puVar6[7] = 0;
      *(undefined8 *)((longlong)puVar6 + 0x39) = 0;
      *(undefined8 *)((longlong)puVar6 + 0x41) = 0;
      (*DAT_02680418)();
      FUN_01d39400(fVar8);
      FUN_01d39310(fVar8,fVar10,fVar11,DAT_02394290);
      FUN_01d38ba0(fVar8,fVar10);
      (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
      FUN_00d50b20();
    }
    lVar7 = DAT_028b64b8;
    if (DAT_028b64b8 != 0) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    FUN_01d48b40(DAT_02390124);
    (**(code **)(*(longlong *)*unaff_RSI + 0x3c8))(fVar8,fVar11);
  }
  else if ((char)unaff_RDI[0x37] != '\0') {
    fVar8 = 0.0;
    fVar10 = 0.0;
    if (0.0 < (double)unaff_RDI[0x38]) {
      FUN_01e3f820();
      uVar9 = FUN_00d05510();
      dVar1 = (double)unaff_RDI[0x38];
      FUN_01cfc9f0(0,DAT_0241bdc0);
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_01d488d0();
      FUN_01d48b40(DAT_02394298);
      fVar10 = fVar10 * _UNK_023945d4;
      fVar11 = (float)uVar9 + fVar8 * _DAT_023945d0;
      (**(code **)(*(longlong *)*unaff_RSI + 0x3c8))(fVar11,DAT_023b169c);
      pcVar4 = DAT_02680418;
      local_68 = (float)dVar1;
      fVar8 = DAT_0241bdc0;
      while (DAT_0239424c < fVar8) {
        FUN_01cfc9f0(0);
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01d488d0();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        puVar6 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar6 = &DAT_02680400;
        *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
        puVar6[6] = 0;
        puVar6[7] = 0;
        *(undefined8 *)((longlong)puVar6 + 0x39) = 0;
        *(undefined8 *)((longlong)puVar6 + 0x41) = 0;
        (*pcVar4)();
        FUN_01d39180(fVar11);
        FUN_01d39310(fVar11,(float)((ulonglong)uVar9 >> 0x20) + fVar10,DAT_0241e624,local_68);
        (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
        fVar8 = fVar8 + DAT_02394228;
        local_68 = local_68 + DAT_0241b638;
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}


