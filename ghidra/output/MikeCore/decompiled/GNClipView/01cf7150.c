// Function: FUN_01cf7150
// Address: 01cf7150
// Size: 622 bytes
// Class: GNClipView


/* WARNING: Removing unreachable block (ram,0x01cf71cc) */
/* WARNING: Removing unreachable block (ram,0x01cf71d5) */
/* WARNING: Removing unreachable block (ram,0x01cf7198) */
/* WARNING: Removing unreachable block (ram,0x01cf71a1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cf7150(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  float fVar3;
  undefined4 uVar4;
  undefined4 extraout_XMM0_Dc;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 in_XMM1_Qb;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float local_98;
  float fStack_94;
  float fStack_8c;
  longlong *local_88;
  char local_80;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 local_58 [16];
  longlong *local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0x7b8))();
  if (local_40 != (longlong *)0x0) {
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x828))();
    if (unaff_RDI[0x27] == 0) {
      local_58._0_8_ = 0;
    }
    else {
      uVar1 = *(undefined8 *)(unaff_RDI[0x27] + 0x10c);
      param_2 = CONCAT44(0.0 - (float)((ulonglong)uVar1 >> 0x20),0.0 - (float)uVar1);
      in_XMM1_Qb = 0;
      local_58._0_8_ = param_2;
    }
    local_58._8_8_ = 0;
    FUN_01e3f820();
    local_68 = (float)param_2;
    fStack_64 = (float)(param_2 >> 0x20);
    fStack_60 = (float)in_XMM1_Qb;
    fStack_5c = (float)((ulonglong)in_XMM1_Qb >> 0x20);
    (**(code **)(*unaff_RDI + 0x4d8))();
    FUN_01d97e80();
    plVar2 = (longlong *)*unaff_RSI;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 == local_40) {
      local_98 = (float)param_2;
      if (local_68 - local_98 <= 0.0) {
        local_58 = blendps(local_58,ZEXT816(0),0xd);
      }
      else {
        fVar3 = (float)(**(code **)(*(longlong *)*unaff_RSI + 0x930))();
        auVar8._0_4_ = (float)(int)((local_68 - local_98) * fVar3);
        auVar8._4_4_ = (float)(int)fStack_64;
        auVar8._8_4_ = (float)(int)fStack_60;
        auVar8._12_4_ = (float)(int)fStack_5c;
        local_58 = blendps(local_58,auVar8,1);
      }
    }
    FUN_01d97ec0();
    plVar2 = (longlong *)*unaff_RSI;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 == local_40) {
      fStack_94 = (float)(param_2 >> 0x20);
      fStack_8c = (float)((ulonglong)in_XMM1_Qb >> 0x20);
      fStack_64 = fStack_64 - fStack_94;
      if (fStack_64 <= 0.0) {
        local_58 = blendps(local_58,ZEXT816(0),2);
      }
      else {
        fVar3 = (float)(**(code **)(*(longlong *)*unaff_RSI + 0x930))();
        auVar5._0_4_ = (float)(int)(fStack_64 * fVar3);
        auVar5._4_4_ = (float)(int)fStack_64;
        auVar5._8_4_ = (float)(int)(fStack_5c - fStack_8c);
        auVar5._12_4_ = (float)(int)(fStack_5c - fStack_8c);
        local_58 = insertps(local_58,auVar5,0x10);
      }
    }
    FUN_01e42030();
    (**(code **)(*local_88 + 0x9a0))();
    uVar4 = (**(code **)(*local_40 + 0x448))();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    auVar7._4_4_ = uVar4;
    auVar7._0_4_ = uVar4;
    auVar7._8_4_ = extraout_XMM0_Dc;
    auVar7._12_4_ = extraout_XMM0_Dc;
    auVar8 = divps(local_58,auVar7);
    auVar6._0_4_ = (float)(_DAT_023945e0 & (uint)auVar8._0_4_ | _DAT_023945f0) + auVar8._0_4_;
    auVar6._4_4_ = (float)(_UNK_023945e4 & (uint)auVar8._4_4_ | _UNK_023945f4) + auVar8._4_4_;
    auVar6._8_4_ = (float)(_UNK_023945e8 & (uint)auVar8._8_4_ | _UNK_023945f8) + auVar8._8_4_;
    auVar6._12_4_ = (float)(_UNK_023945ec & (uint)auVar8._12_4_ | _UNK_023945fc) + auVar8._12_4_;
    roundps(auVar6,auVar6,0xb);
    FUN_01cf5ff0();
    FUN_00d50b20();
  }
  return;
}


