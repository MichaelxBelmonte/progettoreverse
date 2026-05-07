// Function: FUN_0199e390
// Address: 0199e390
// Size: 1394 bytes
// Class: GNToolBoxTool
// === GNToolBoxTool properties ===
//                   _cellSize
//                   _sendsNotificationActionsOnOpenAndClose
//                   _showsSelectedTool
//                   _isHighlightingSubTools
//                   _allowedScreenFrame
//                   _toolBoxRect
//                   _subtoolsRect
//                   _contextMenusRect


void FUN_0199e390(void)

{
  int64_t lVar1;
  code *pcVar2;
  char cVar3;
  void*puVar4;
  void *pvVar5;
  uint64_t uVar6;
  uint uVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  float fVar8;
  uint64_t uVar9;
  int64_t local_b0;
  char local_a8;
  int64_t local_78;
  double local_58;
  uint64_t local_50;
  double local_48;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  if (this_ptr[0x94] != 0) goto LAB_0199e8ba;
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  pcVar2 = g_02572370;
  (*g_02572370)();
  lVar1 = this_ptr[0x94];
  this_ptr[0x94] = (int64_t)puVar4;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  (*pcVar2)();
  lVar1 = this_ptr[0x95];
  this_ptr[0x95] = (int64_t)puVar4;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (*arg1 == 0) {
    local_78 = this_ptr[0x41];
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    FUN_01d3abf0();
    uVar9 = FUN_01e466c0();
    fVar8 = (float)(**(code **)(*this_ptr + 0xc00))((int)((uint64_t)uVar9 >> 0x20));
    local_58 = (double)fVar8;
    local_50 = (**(code **)(*this_ptr + 0x930))((int)uVar9);
    fVar8 = (float)(**(code **)(*this_ptr + 3000))();
    local_48 = (double)(**(code **)(*this_ptr + 0x928))();
    local_48 = (double)fVar8 / local_48;
    FUN_004f2260(&local_58,FUN_019bfe10);
    local_78 = local_b0;
    if (local_a8 == '\0') {
      if (local_b0 == 0) {
        local_78 = 0;
      }
      else {
        FUN_00d50b00();
      }
    }
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  (*pcVar2)();
  if (local_78 == 0) {
LAB_0199e8a3:
    FUN_00d50b20();
  }
  else {
    if (0 < *(int *)(local_78 + 0xc)) {
      uVar7 = 0;
      do {
        uVar6 = (uint64_t)uVar7;
        lVar1 = *(int64_t *)(*(int64_t *)(local_78 + 0x10) + uVar6 * 8);
        FUN_00d216c0();
        FUN_00d21140();
        cVar3 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                            *this_ptr + 8))();
        if (cVar3 != '\0') {
          while( true ) {
            pvVar5 = _pthread_getspecific((void*)uVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01274b60();
            if (lVar1 == 0) break;
            pvVar5 = _pthread_getspecific((void*)uVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01274b60();
          }
          cVar3 = FUN_00d24090();
          if (cVar3 == '\0') {
            FUN_00d21140();
            FUN_00d21140();
          }
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < *(int *)(local_78 + 0xc));
    }
    FUN_001159b0();
    if (puVar4 != (void*)0x0) goto LAB_0199e8a3;
  }
  if (local_78 != 0) {
    FUN_00d50b20();
  }
LAB_0199e8ba:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return;
}

