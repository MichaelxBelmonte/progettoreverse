// Function: FUN_006c48c0
// Address: 006c48c0
// Size: 623 bytes
// Class: MDWorkspaceView
// === MDWorkspaceView properties ===
//   bool            _isVertical
//   bool            _allowsChainedResize
//   GNCoord         _size
//   GNCoord         _paddingLineSize
//   GNBorderStyle   _borderStyle


void FUN_006c48c0(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  int64_t **pplVar6;
  int64_t this_ptr;
  int64_t lVar7;
  int64_t *local_b0;
  uint8_t local_a8;
  int64_t local_a0;
  uint64_t local_98;
  uint32_t local_90;
  int64_t *local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  
  lVar1 = *(int64_t *)(this_ptr + 0x38);
  if (lVar1 != 0) {
    local_a8 = 0;
    local_b0 = (int64_t *)0x0;
    local_90 = 0;
    local_98 = 0;
    local_a0 = lVar1;
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar7 = 0;
      do {
        plVar2 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + lVar7 * 8);
        local_b0 = plVar2;
        FUN_003b6560();
        pplVar6 = (int64_t **)&g_02802688;
        if (plVar2 != (int64_t *)0x0) {
          (**(code **)(*plVar2 + 0x360))();
          cVar5 = FUN_00e85ea0();
          pplVar6 = &local_b0;
          if (cVar5 == '\0') {
            pplVar6 = (int64_t **)&g_02802688;
          }
        }
        plVar2 = *pplVar6;
        if (*(char *)(pplVar6 + 1) == '\0') {
          if (plVar2 != (int64_t *)0x0) {
            FUN_00d50b00();
            goto LAB_006c49c4;
          }
        }
        else {
          *(void*)(pplVar6 + 1) = 0;
          if (plVar2 != (int64_t *)0x0) {
LAB_006c49c4:
            local_58 = plVar2;
            FUN_00543980();
            lVar3 = local_78;
            if (local_70 == '\0') {
              if (local_78 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_70 = '\0';
            }
            cVar5 = FUN_00d23d70();
            if (cVar5 == '\0') {
              cVar5 = '\0';
            }
            else {
              FUN_005439c0();
              lVar4 = local_68;
              if (local_60 == '\0') {
                if (local_68 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_60 = '\0';
              }
              cVar5 = FUN_00d23d70();
              if (lVar4 != 0) {
                FUN_00d50b20();
              }
              if ((local_60 != '\0') && (local_68 != 0)) {
                FUN_00d50b20();
              }
            }
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
            if ((local_70 != '\0') && (local_78 != 0)) {
              FUN_00d50b20();
            }
            if (cVar5 == '\0') {
              local_88 = local_58;
              local_80 = '\0';
              FUN_01e49bc0();
              if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
              break;
            }
            FUN_00d50b20();
          }
        }
        lVar7 = lVar7 + 1;
        local_98 = CONCAT44(local_98._4_4_,(int)lVar7);
      } while ((int)lVar7 < *(int *)(lVar1 + 0xc));
    }
    FUN_000a9680();
  }
  return;
}

