// Function: FUN_01d818b0
// Address: 01d818b0
// Size: 632 bytes
// Class: GNCornerRadius
// === GNCornerRadius properties ===
//                   _outerDrawPath
//                   _innerBlurWidth
//                   _innerBlurColor
//                   _outerBlurWidth
//                   _outerBlurColor
//                   _outerBlurInset
//                   _clipsAlways


void FUN_01d818b0(uint64_t param_1,uint32_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint8_t uVar3;
  uint32_t uVar4;
  int64_t *this_ptr;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t extraout_XMM0_Dc;
  int64_t local_70;
  char local_68;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x640))();
  plVar1 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar5 = FUN_01e3f820();
  uVar6 = extraout_XMM0_Dc;
  uVar4 = (**(code **)(*this_ptr + 0x920))();
  uVar3 = (**(code **)(*this_ptr + 0x9a0))();
  (**(code **)(*this_ptr + 0xa70))();
  (**(code **)(*plVar1 + 0x3f0))(uVar5,3,uVar4,uVar3,uVar5,uVar6);
  uVar6 = FUN_01e3f820();
  (**(code **)(*this_ptr + 0x960))();
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*this_ptr + 0x9e0))();
  local_48 = 0;
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  local_48 = '\x01';
  local_50 = local_70;
  (**(code **)(*this_ptr + 0x9a0))();
  (**(code **)(*this_ptr + 0xa70))();
  (**(code **)(*plVar1 + 0x400))(uVar6,param_2,&local_50,0);
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

