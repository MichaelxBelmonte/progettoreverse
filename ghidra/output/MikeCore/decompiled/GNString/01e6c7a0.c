// Function: FUN_01e6c7a0
// Address: 01e6c7a0
// Size: 709 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01e6c92e) */
/* WARNING: Removing unreachable block (ram,0x01e6c937) */

void FUN_01e6c7a0(float param_1)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  bool bVar9;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  float fVar15;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar13 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar14 [16];
  undefined4 uVar16;
  float fVar17;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 extraout_XMM0_Qb_01;
  
  FUN_01d8c6e0();
  uVar12 = FUN_01e59080();
  uStack_50 = (undefined4)extraout_XMM0_Qb;
  uStack_4c = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d8c6e0();
  auVar5._8_4_ = uStack_50;
  auVar5._0_8_ = uVar12;
  auVar5._12_4_ = uStack_4c;
  fVar15 = (float)((ulonglong)uVar12 >> 0x20);
  auVar13._4_4_ = fVar15;
  auVar13._0_4_ = fVar15 + param_1;
  auVar13._8_4_ = uStack_4c;
  auVar13._12_4_ = uStack_4c;
  auVar13 = insertps(auVar5,auVar13,0x10);
  FUN_01e5bc90(auVar13._0_8_);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d8c6e0();
  uVar12 = FUN_01e59090();
  uStack_50 = (undefined4)extraout_XMM0_Qb_00;
  uStack_4c = (undefined4)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d8c6e0();
  auVar6._8_4_ = uStack_50;
  auVar6._0_8_ = uVar12;
  auVar6._12_4_ = uStack_4c;
  fVar15 = (float)((ulonglong)uVar12 >> 0x20);
  fVar17 = fVar15 + param_1;
  auVar2._4_4_ = fVar15;
  auVar2._0_4_ = fVar17;
  auVar2._8_4_ = uStack_4c;
  auVar2._12_4_ = uStack_4c;
  auVar13 = insertps(auVar6,auVar2,0x10);
  uVar16 = uStack_4c;
  FUN_01e5bcf0(auVar13._0_8_);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x570))();
  (**(code **)(*(longlong *)*unaff_RSI + 0x4d8))();
  FUN_01d8c6e0();
  auVar7._4_4_ = fVar15;
  auVar7._0_4_ = fVar17;
  auVar7._8_4_ = uStack_4c;
  auVar7._12_4_ = uVar16;
  auVar3._4_4_ = fVar15;
  auVar3._0_4_ = fVar15 + param_1;
  auVar3._8_4_ = uVar16;
  auVar3._12_4_ = uVar16;
  auVar13 = insertps(auVar7,auVar3,0x10);
  FUN_01e5bc80(auVar13._0_8_);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x4a0))();
  if (local_40 == 0) {
    bVar9 = true;
    local_40 = 0;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    bVar9 = false;
  }
  else {
    bVar9 = false;
  }
  if (*(int *)(local_40 + 0xc) < 1) {
    bVar8 = false;
    plVar10 = (longlong *)0x0;
  }
  else {
    lVar11 = 0;
    plVar10 = (longlong *)0x0;
    bVar8 = false;
    do {
      plVar1 = *(longlong **)(*(longlong *)(local_40 + 0x10) + lVar11 * 8);
      if (plVar10 == plVar1) {
        if ((!bVar8) && (plVar10 != (longlong *)0x0)) {
          bVar8 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar8) && (plVar10 != (longlong *)0x0)) {
          FUN_00d50b20();
          bVar8 = true;
          plVar10 = plVar1;
        }
        else {
          bVar8 = true;
          plVar10 = plVar1;
        }
      }
      if (unaff_RDI != plVar10) {
        auVar14._0_8_ = (**(code **)(*plVar10 + 0x4d8))();
        auVar14._8_8_ = extraout_XMM0_Qb_01;
        fVar15 = (float)((ulonglong)auVar14._0_8_ >> 0x20);
        uVar16 = (undefined4)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
        auVar4._4_4_ = fVar15;
        auVar4._0_4_ = fVar15 + param_1;
        auVar4._8_4_ = uVar16;
        auVar4._12_4_ = uVar16;
        auVar13 = insertps(auVar14,auVar4,0x10);
        (**(code **)(*plVar10 + 0x4d0))(auVar13._0_8_);
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(local_40 + 0xc));
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x570))();
  if ((bVar8) && (plVar10 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar9) {
    FUN_00d50b20();
  }
  return;
}


