// Function: FUN_00655020
// Address: 00655020
// Size: 562 bytes
// Class: MDWorkspaceView
// === MDWorkspaceView properties ===
//   bool            _isVertical
//   bool            _allowsChainedResize
//   GNCoord         _size
//   GNCoord         _paddingLineSize
//   GNBorderStyle   _borderStyle


uint64_t FUN_00655020(uint64_t param_1,byte param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint uVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t *this_ptr;
  int64_t local_80;
  char local_78;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x5e0))();
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00655080;
    }
  }
  else if (local_40 != (int64_t *)0x0) {
LAB_00655080:
    (**(code **)(*plVar1 + 0x468))();
    plVar2 = local_40;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 == (int64_t *)0x0) {
LAB_00655165:
      uVar5 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x478))();
      uVar5 = (uint64_t)uVar3;
      if ((param_2 & (byte)uVar3) == 1) {
        (**(code **)(*this_ptr + 0x5d8))();
        plVar2 = local_40;
        if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
            (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01f27fe0();
        iVar4 = (**(code **)(*local_40 + 0x5c0))();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar4 != 0) {
          if (plVar2 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          goto LAB_00655165;
        }
        FUN_00612250();
        (**(code **)(*plVar1 + 0x468))();
        local_48 = 0;
        if (local_58 == '\0') {
          if (local_60 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        local_48 = '\x01';
        local_50 = local_60;
        (**(code **)(*local_40 + 0x610))(1,&local_50);
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if (local_38 != '\0') {
          FUN_00d50b20();
        }
        uVar5 = CONCAT71((int7)((uint64_t)local_60 >> 8),1);
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00d50b20();
    goto LAB_00655173;
  }
  uVar5 = 0;
LAB_00655173:
  return uVar5 & 0xffffffff;
}

