// Function: FUN_01b65f90
// Address: 01b65f90
// Size: 1774 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01b66152) */
/* WARNING: Removing unreachable block (ram,0x01b6615b) */
/* WARNING: Removing unreachable block (ram,0x01b661cf) */
/* WARNING: Removing unreachable block (ram,0x01b661d8) */
/* WARNING: Removing unreachable block (ram,0x01b6624c) */
/* WARNING: Removing unreachable block (ram,0x01b66255) */

void FUN_01b65f90(void)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  void *pvVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  int iVar9;
  bool bVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined1 local_b8 [16];
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  ulonglong uVar10;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_01d4ab40();
  FUN_01d4ab50();
  FUN_01d48370();
  plVar8 = (longlong *)*unaff_RSI;
  FUN_01e3f820();
  (**(code **)(*plVar8 + 0x390))();
  FUN_01cfb920();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  FUN_01d488d0();
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  FUN_01cfbc00();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  FUN_01d488d0();
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  plVar8 = (longlong *)*unaff_RSI;
  FUN_01e3f820();
  (**(code **)(*plVar8 + 0x3b0))();
  FUN_01cfbee0();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_00d21140();
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_01cfbee0();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_00d21140();
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  fVar15 = 0.0;
  fVar17 = 0.0;
  uVar18 = 0;
  FUN_01cfbee0();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_00d21140();
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_01e3f820();
  FUN_01e3f820();
  if (*(longlong *)(unaff_RDI + 0x138) == 0) {
    plVar8 = (longlong *)0x0;
    bVar2 = false;
  }
  else {
    fVar15 = fVar15 + DAT_02390d00;
    fVar12 = fVar17 + DAT_02390d00;
    bVar2 = false;
    plVar7 = (longlong *)0x0;
    uVar10 = 0;
    do {
      iVar9 = (int)uVar10;
      if (iVar9 == 2) {
        plVar8 = *(longlong **)(unaff_RDI + 0x158);
        if (plVar8 == plVar7) {
          if ((!bVar2) && (plVar8 != (longlong *)0x0)) {
            bVar2 = true;
            FUN_00d50b00();
          }
          goto LAB_01b66460;
        }
        if (plVar8 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar11 = true;
        if (bVar2) {
          if (plVar7 == (longlong *)0x0) goto LAB_01b663ef;
          FUN_00d50b20();
          plVar7 = plVar8;
          bVar2 = bVar11;
          goto LAB_01b66460;
        }
        if ((longlong)*(int *)(unaff_RDI + 0x140) <= (longlong)uVar10) goto LAB_01b66470;
LAB_01b66480:
        lVar5 = *(longlong *)(puVar3[2] + uVar10 * 8);
        bVar2 = bVar11;
        if ((*(float *)(lVar5 + 0x1c) != DAT_0239011c) ||
           (NAN(*(float *)(lVar5 + 0x1c)) || NAN(DAT_0239011c))) {
          *(undefined4 *)(lVar5 + 0x1c) = 0x3f000000;
          *(undefined1 *)(lVar5 + 0xf) = 0x80;
        }
      }
      else {
        if (iVar9 == 1) {
          plVar8 = *(longlong **)(unaff_RDI + 0x150);
          if (plVar8 == plVar7) {
            if ((!bVar2) && (plVar7 != (longlong *)0x0)) {
              FUN_00d50b00();
              bVar2 = true;
            }
            goto LAB_01b66460;
          }
          if (plVar8 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if ((bVar2) && (plVar7 != (longlong *)0x0)) {
            FUN_00d50b20();
            plVar7 = plVar8;
            bVar2 = true;
            goto LAB_01b66460;
          }
LAB_01b663ef:
          iVar1 = *(int *)(unaff_RDI + 0x140);
          bVar11 = true;
        }
        else {
          if (iVar9 == 0) {
            plVar8 = *(longlong **)(unaff_RDI + 0x148);
            if (plVar8 == plVar7) {
              if ((!bVar2) && (plVar7 != (longlong *)0x0)) {
                FUN_00d50b00();
                bVar2 = true;
              }
            }
            else {
              if (plVar8 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              if ((!bVar2) || (plVar7 == (longlong *)0x0)) goto LAB_01b663ef;
              FUN_00d50b20();
              plVar7 = plVar8;
              bVar2 = true;
            }
          }
LAB_01b66460:
          iVar1 = *(int *)(unaff_RDI + 0x140);
          plVar8 = plVar7;
          bVar11 = bVar2;
        }
        if ((longlong)uVar10 < (longlong)iVar1) goto LAB_01b66480;
LAB_01b66470:
        if ((longlong)*(int *)(unaff_RDI + 0x144) < (longlong)uVar10) goto LAB_01b66480;
        lVar5 = *(longlong *)(puVar3[2] + uVar10 * 8);
        bVar2 = bVar11;
        if ((*(float *)(lVar5 + 0x1c) != DAT_02390124) ||
           (NAN(*(float *)(lVar5 + 0x1c)) || NAN(DAT_02390124))) {
          *(undefined4 *)(lVar5 + 0x1c) = 0x3f800000;
          *(undefined1 *)(lVar5 + 0xf) = 0xff;
        }
      }
      lVar5 = *(longlong *)(puVar3[2] + uVar10 * 8);
      puVar6 = puVar3;
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      FUN_01d488d0();
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      fVar16 = (float)iVar9 + (float)iVar9;
      local_b8 = ZEXT416((uint)fVar16);
      while (fVar16 < fVar15) {
        pvVar4 = _pthread_getspecific((pthread_key_t)puVar6);
        plVar7 = plVar8;
        if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          plVar7 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
        }
        auVar13._4_12_ = local_b8._4_12_;
        auVar13._0_4_ = local_b8._0_4_ / fVar15;
        fVar16 = (float)(**(code **)(*plVar7 + 0x390))(auVar13._0_8_);
        auVar14._4_4_ = fVar17;
        auVar14._0_4_ = fVar12 - fVar16 * fVar12;
        auVar14._8_4_ = uVar18;
        auVar14._12_4_ = uVar18;
        auVar14 = insertps(local_b8,auVar14,0x10);
        (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))(auVar14._0_8_,DAT_02390d34);
        fVar16 = local_b8._0_4_ + DAT_02390d30;
        local_b8._4_4_ = 0;
        local_b8._0_4_ = fVar16;
      }
    } while ((*(longlong *)(unaff_RDI + 0x138) != 0) &&
            (bVar11 = uVar10 < 2, plVar7 = plVar8, uVar10 = uVar10 + 1, bVar11));
  }
  FUN_01d48390();
  FUN_01d4ab50();
  if ((bVar2) && (plVar8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar3 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


