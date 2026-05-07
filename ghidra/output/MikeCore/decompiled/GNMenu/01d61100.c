// Function: FUN_01d61100
// Address: 01d61100
// Size: 531 bytes
// Class: GNMenu


undefined8 FUN_01d61100(void)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong unaff_RDI;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  float fVar8;
  float extraout_XMM0_Dc;
  float fVar9;
  float extraout_XMM0_Dd;
  undefined1 auVar10 [16];
  undefined1 local_88 [8];
  float fStack_80;
  float fStack_7c;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01cb4790();
  plVar3 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01cb4790();
  (**(code **)(*local_78 + 0x370))();
  plVar5 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar4 = *(longlong *)(unaff_RDI + 0x18);
  if (*(int *)(lVar4 + 0xc) < 1) {
    local_88 = (undefined1  [8])0x0;
  }
  else {
    _local_88 = ZEXT816(0);
    lVar6 = 0;
    local_58 = plVar5;
    do {
      lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + lVar6 * 8);
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      FUN_01d65230();
      local_50 = local_40;
      local_48 = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      plVar5 = local_58;
      local_48 = '\x01';
      local_68 = local_58;
      local_60 = '\0';
      uVar7 = (**(code **)(*plVar3 + 0x5d0))(0,&local_68);
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      fVar8 = extraout_XMM0_Dc;
      fVar9 = extraout_XMM0_Dd;
      uVar2 = uVar7;
      if ((float)uVar7 <= (float)local_88._0_4_) {
        fVar8 = fStack_80;
        fVar9 = fStack_7c;
        uVar2 = local_88;
      }
      auVar10._0_4_ = (float)local_88._0_4_ + (float)uVar7;
      auVar10._4_4_ = (float)local_88._4_4_ + (float)((ulonglong)uVar7 >> 0x20);
      auVar10._8_4_ = fStack_80 + extraout_XMM0_Dc;
      auVar10._12_4_ = fStack_7c + extraout_XMM0_Dd;
      auVar1._8_4_ = fVar8;
      auVar1._0_8_ = uVar2;
      auVar1._12_4_ = fVar9;
      _local_88 = blendps(auVar10,auVar1,0xd);
      lVar6 = lVar6 + 1;
      lVar4 = *(longlong *)(unaff_RDI + 0x18);
    } while (lVar6 < *(int *)(lVar4 + 0xc));
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return local_88;
}


