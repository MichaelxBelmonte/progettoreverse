// Function: FUN_01d61100
// Address: 01d61100
// Size: 531 bytes
// Class: GNMenu
// === GNMenu properties ===
//                   _mainWindow
//                   _keyWindow
//                   _infoController


uint64_t FUN_01d61100(void)

{
  uint8_t auVar1 [16];
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t this_ptr;
  int64_t *plVar5;
  int64_t lVar6;
  uint64_t uVar7;
  float fVar8;
  float extraout_XMM0_Dc;
  float fVar9;
  float extraout_XMM0_Dd;
  uint8_t auVar10 [16];
  uint8_t local_88 [8];
  float fStack_80;
  float fStack_7c;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01cb4790();
  plVar3 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01cb4790();
  (**(code **)(*local_78 + 0x370))();
  plVar5 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar4 = *(int64_t *)(this_ptr + 0x18);
  if (*(int *)(lVar4 + 0xc) < 1) {
    local_88 = (uint8_t  [8])0x0;
  }
  else {
    _local_88 = ZEXT816(0);
    lVar6 = 0;
    local_58 = plVar5;
    do {
      lVar4 = *(int64_t *)(*(int64_t *)(lVar4 + 0x10) + lVar6 * 8);
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      FUN_01d65230();
      local_50 = local_40;
      local_48 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
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
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
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
      auVar10._4_4_ = (float)local_88._4_4_ + (float)((uint64_t)uVar7 >> 0x20);
      auVar10._8_4_ = fStack_80 + extraout_XMM0_Dc;
      auVar10._12_4_ = fStack_7c + extraout_XMM0_Dd;
      auVar1._8_4_ = fVar8;
      auVar1._0_8_ = uVar2;
      auVar1._12_4_ = fVar9;
      _local_88 = blendps(auVar10,auVar1,0xd);
      lVar6 = lVar6 + 1;
      lVar4 = *(int64_t *)(this_ptr + 0x18);
    } while (lVar6 < *(int *)(lVar4 + 0xc));
  }
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return local_88;
}

