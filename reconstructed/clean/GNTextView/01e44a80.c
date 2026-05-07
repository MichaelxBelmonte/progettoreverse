// Function: FUN_01e44a80
// Address: 01e44a80
// Size: 544 bytes
// Class: GNTextView
// === GNTextView properties ===
//                   _firstResponder
//                   _defaultFirstResponder
//                   _isDisplaying
//                   _ignoreSystemKeyEvents
//                   _bgCache
//                   _toolbarActions
//                   _handeledToolbarActions
//                   _sheetController
//                   _sheetControllerLoadedSize
//                   _sheetControllerLoadedAutoresizingMask


void FUN_01e44a80(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar4;
  uint64_t uVar5;
  float in_XMM0_Dc;
  float extraout_XMM0_Dc;
  float in_XMM0_Dd;
  float extraout_XMM0_Dd;
  float fVar6;
  float fVar7;
  uint64_t local_98;
  float fStack_90;
  float fStack_8c;
  uint64_t local_88;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  fVar7 = (float)((uint64_t)param_2 >> 0x20);
  fVar6 = (float)param_2;
  fStack_74 = (float)((uint64_t)param_1 >> 0x20);
  local_78 = (float)param_1;
  lVar1 = this_ptr[7];
  if (lVar1 != 0) {
    fStack_70 = in_XMM0_Dc;
    fStack_6c = in_XMM0_Dd;
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar4 = 0;
      do {
        plVar2 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + lVar4 * 8);
        cVar3 = (**(code **)(*this_ptr + 0x7a8))();
        if (cVar3 == '\0') {
          (**(code **)(*plVar2 + 0x4e0))();
          cVar3 = FUN_00d054a0();
          if (cVar3 != '\0') goto LAB_01e44b68;
        }
        else {
LAB_01e44b68:
          uVar5 = (**(code **)(*plVar2 + 0x4d8))();
          fStack_80 = extraout_XMM0_Dc;
          fStack_7c = extraout_XMM0_Dd;
          local_88 = uVar5;
          (**(code **)(*(int64_t *)*arg1 + 0x368))();
          (**(code **)(*plVar2 + 0x500))();
          local_78 = local_78 - (float)local_88;
          fStack_74 = fStack_74 - local_88._4_4_;
          fStack_70 = fStack_70 - fStack_80;
          fStack_6c = fStack_6c - fStack_7c;
          uVar5 = FUN_00d05360();
          fStack_90 = fVar6;
          fStack_8c = fVar7;
          local_98 = uVar5;
          if ((g_0239424c < fVar6) && (g_0239424c < fVar7)) {
            local_58 = '\0';
            local_50 = *arg1;
            local_48 = '\0';
            local_60 = plVar2;
            (**(code **)(*this_ptr + 0x7a0))(&local_98,&local_50);
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          cVar3 = (**(code **)(*plVar2 + 0x840))();
          if (cVar3 != '\0') {
            local_40 = *arg1;
            local_38 = '\0';
            fVar6 = fStack_90;
            (**(code **)(*plVar2 + 0x848))((uint32_t)local_98);
            fVar7 = fStack_8c;
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
              fVar7 = fStack_8c;
            }
          }
          (**(code **)(*(int64_t *)*arg1 + 0x368))((uint)(float)local_88 ^ g_023945e0);
          local_78 = local_78 + (float)local_88;
          fStack_74 = fStack_74 + local_88._4_4_;
          fStack_70 = fStack_70 + fStack_80;
          fStack_6c = fStack_6c + fStack_7c;
        }
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_000a9680();
  }
  return;
}

