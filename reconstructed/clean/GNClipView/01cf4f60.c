// Function: FUN_01cf4f60
// Address: 01cf4f60
// Size: 847 bytes
// Class: GNClipView
// === GNClipView properties ===
//   GNClipViewBorderType _rightBorderType
//   GNClipViewBorderType _bottomBorderType
//   GNClipViewBorderType _leftBorderType
//   GNClipViewBorderType _topBorderType
//                   _knobProportion
//                   _increaseButtonPressed
//                   _decreaseButtonPressed
//                   _column


void FUN_01cf4f60(uint64_t param_1,uint param_2)

{
  int64_t *plVar1;
  char cVar2;
  float *pfVar3;
  int64_t *this_ptr;
  int64_t lVar4;
  uint32_t uVar5;
  float fVar6;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  float local_5c;
  uint32_t local_58;
  uint32_t local_54;
  int64_t *local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (param_2 < 4) {
    switch((uint64_t)param_2) {
    case 0:
      pfVar3 = (float *)((int64_t)this_ptr + 0x164);
      break;
    case 1:
      pfVar3 = (float *)((int64_t)this_ptr + 0x16c);
      break;
    case 2:
      pfVar3 = (float *)(this_ptr + 0x2d);
      break;
    case 3:
      pfVar3 = (float *)(this_ptr + 0x2e);
    }
    local_5c = *pfVar3;
    if ((local_5c != 0.0) || (NAN(local_5c))) {
      (**(code **)(*this_ptr + 0x7b8))();
      cVar2 = FUN_01d951e0();
      local_58 = 0;
      if (cVar2 != '\0') {
        (**(code **)(*this_ptr + 0x640))();
        local_58 = (**(code **)(*local_50 + 0x580))();
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*this_ptr + 0x7b8))();
      cVar2 = FUN_01d95200();
      local_54 = 0;
      if (cVar2 != '\0') {
        (**(code **)(*this_ptr + 0x640))();
        local_54 = (**(code **)(*local_50 + 0x578))();
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      uVar5 = (**(code **)(*this_ptr + 0x640))();
      plVar1 = local_50;
      local_80 = g_026e41f0;
      if (g_026e41f0 != 0) {
        uVar5 = FUN_00d50b00();
      }
      local_78 = '\x01';
      (**(code **)(*plVar1 + 0x3b0))(uVar5,&local_80);
      lVar4 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar4 == 0) {
        (**(code **)(*this_ptr + 0x640))();
        (**(code **)(*local_50 + 0x3a0))();
        if (local_40 != 0) {
          lVar4 = local_40;
          if (local_38 == '\0') {
            FUN_00d50b00();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38 = '\0';
          }
        }
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_01d48370();
      local_68 = '\0';
      local_70 = lVar4;
      FUN_01d488d0();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d48b40(g_02390124);
      fVar6 = (float)FUN_01d48a00();
      FUN_01d489d0(local_5c * fVar6);
      FUN_01e3f820();
      if (param_2 < 4) {
                                                (*(&g_01cf5598 + *(int *)(&g_01cf5598 + (uint64_t)param_2 * 4)))
                  (&g_01cf5598 + *(int *)(&g_01cf5598 + (uint64_t)param_2 * 4));
        return;
      }
      FUN_01d48390();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}

