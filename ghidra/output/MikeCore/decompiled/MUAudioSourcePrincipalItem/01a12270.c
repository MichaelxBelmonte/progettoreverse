// Function: FUN_01a12270
// Address: 01a12270
// Size: 644 bytes
// Class: MUAudioSourcePrincipalItem


/* WARNING: Removing unreachable block (ram,0x01a122d4) */
/* WARNING: Removing unreachable block (ram,0x01a122dd) */
/* WARNING: Removing unreachable block (ram,0x01a124c5) */
/* WARNING: Removing unreachable block (ram,0x01a124ce) */
/* WARNING: Removing unreachable block (ram,0x01a1230b) */
/* WARNING: Removing unreachable block (ram,0x01a12314) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a12270(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  longlong *unaff_RDI;
  longlong *plVar2;
  float fVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 in_XMM1_Qb;
  undefined8 uVar17;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float local_98;
  float local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  float local_58;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  undefined8 uVar13;
  
  plVar2 = (longlong *)unaff_RDI[0x48];
  uVar10 = param_2;
  if (plVar2 == (longlong *)0x0) {
    FUN_01a18460();
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38 != (longlong *)0x0) {
      FUN_01a18460();
      (**(code **)(*local_48 + 0x958))();
      if (local_38 != (longlong *)0x0) {
        plVar2 = local_38;
        if (local_30 == '\0') {
          FUN_00d50b00();
        }
        else {
          local_30 = '\0';
        }
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_00d50b00();
  }
  FUN_01d919a0();
  if ((local_30 == '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01cf3f40();
  if ((local_30 == '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  (**(code **)(*local_38 + 0x4d8))();
  uVar11 = uVar10;
  uVar17 = in_XMM1_Qb;
  uVar4 = FUN_01cf5cf0();
  (**(code **)(*unaff_RDI + 0xb00))();
  uVar12 = uVar11;
  (**(code **)(*local_38 + 0x4d8))();
  uVar13 = uVar12;
  fVar3 = (float)(**(code **)(*unaff_RDI + 0xb00))();
  fVar9 = (float)uVar13;
  (**(code **)(*unaff_RDI + 0xb00))();
  local_88 = (float)uVar12;
  uStack_84 = (uint)((ulonglong)uVar12 >> 0x20);
  uStack_80 = (uint)uVar17;
  uStack_7c = (uint)((ulonglong)uVar17 >> 0x20);
  local_98 = (float)uVar11;
  local_58 = (float)param_2;
  local_58 = (local_88 * local_98) / local_58;
  auVar6._0_4_ = _DAT_023945e0 & (uint)local_58;
  auVar6._4_4_ = _UNK_023945e4 & uStack_84;
  auVar6._8_4_ = _UNK_023945e8 & uStack_80;
  auVar6._12_4_ = _UNK_023945ec & uStack_7c;
  auVar7._4_12_ = SUB1612(auVar6 | _DAT_023945f0,4);
  auVar7._0_4_ = SUB164(auVar6 | _DAT_023945f0,0) + local_58;
  auVar14._0_12_ = ZEXT812(0);
  auVar14._12_4_ = 0;
  auVar15 = roundss(auVar14,auVar7,0xb);
  auVar1._8_8_ = in_XMM1_Qb;
  auVar1._0_8_ = uVar10;
  auVar8 = blendps(auVar1,auVar15,1);
  (**(code **)(*local_38 + 0x4e8))(auVar8._0_8_);
  auVar8._8_8_ = in_XMM0_Qb;
  auVar8._0_8_ = param_1;
  auVar16._4_12_ = auVar8._4_12_;
  local_58 = auVar15._0_4_;
  auVar16._0_4_ = (((float)param_1 - fVar3) / fVar9) * local_58;
  auVar15._8_8_ = extraout_XMM0_Qb;
  auVar15._0_8_ = uVar4;
  auVar8 = blendps(auVar15,auVar16,1);
  FUN_01cf5c80(auVar8._0_8_);
  dVar5 = (double)(**(code **)(*plVar2 + 0x378))();
  (**(code **)(*plVar2 + 0x3a0))((double)local_58 / dVar5);
  (**(code **)(*local_38 + 0x620))();
  FUN_00d50b20();
  FUN_00d50b20();
  FUN_00d50b20();
  return;
}


