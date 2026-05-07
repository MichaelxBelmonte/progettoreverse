// Function: FUN_01258600
// Address: 01258600
// Size: 1049 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01258600(void)

{
  void*puVar1;
  bool bVar2;
  code *pcVar3;
  int64_t *plVar4;
  bool bVar5;
  char cVar6;
  void*puVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t *this_ptr;
  int64_t *plVar10;
  double dVar11;
  int64_t *local_40;
  char local_38;
  
  FUN_00b341c0();
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_025c8348;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  *(void*)(puVar7 + 6) = 0;
  pcVar3 = g_025c8360;
  (*g_025c8360)();
  puVar1 = (void*)this_ptr[0x1b];
  if (puVar1 == puVar7) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x1b] = (int64_t)puVar7;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  dVar11 = (double)FUN_00b335d0();
  FUN_011edd50(dVar11 * g_023b3bc0);
  FUN_011edcc0();
  FUN_00b33520();
  FUN_011edd90();
  FUN_011edca0();
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_025c8348;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  *(void*)(puVar7 + 6) = 0;
  (*pcVar3)();
  puVar1 = (void*)this_ptr[0x1c];
  if (puVar1 == puVar7) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x1c] = (int64_t)puVar7;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*this_ptr + 0x3a8))();
  FUN_011edd50();
  FUN_011edcc0();
  FUN_00b33590();
  FUN_011edd90();
  FUN_011edca0();
  bVar2 = false;
  plVar10 = (int64_t *)0x0;
  do {
    FUN_00524510();
    if (local_40 == plVar10) {
      if ((bVar2) || (local_40 == (int64_t *)0x0)) {
joined_r0x01258846:
        plVar4 = plVar10;
        bVar5 = bVar2;
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_38 == '\0') {
          FUN_00d50b00();
          goto LAB_01258860;
        }
        plVar4 = plVar10;
        bVar5 = true;
      }
    }
    else {
      plVar4 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar5 = true;
        if ((bVar2) && (plVar10 != (int64_t *)0x0)) {
          FUN_00d50b20();
          plVar10 = local_40;
LAB_01258860:
          bVar2 = true;
          goto joined_r0x01258846;
        }
      }
      else {
        if ((bVar2) && (plVar10 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        bVar5 = true;
      }
    }
    bVar2 = bVar5;
    plVar10 = plVar4;
    if (plVar10 == (int64_t *)0x0) {
      lVar8 = this_ptr[0x12];
      if (0 < *(int *)(lVar8 + 0xc)) {
        lVar9 = 0;
        do {
          lVar8 = *(int64_t *)(*(int64_t *)(lVar8 + 0x10) + lVar9 * 8);
          if (lVar8 != 0) {
            FUN_00d50b00();
          }
          FUN_01257c40();
          if (lVar8 != 0) {
            FUN_00d50b20();
          }
          lVar9 = lVar9 + 1;
          lVar8 = this_ptr[0x12];
        } while (lVar9 < *(int *)(lVar8 + 0xc));
        if (0 < *(int *)(lVar8 + 0xc)) {
          lVar9 = 0;
          do {
            (**(code **)(**(int64_t **)(*(int64_t *)(lVar8 + 0x10) + lVar9 * 8) + 0x368))();
            lVar9 = lVar9 + 1;
            lVar8 = this_ptr[0x12];
          } while (lVar9 < *(int *)(lVar8 + 0xc));
        }
      }
      if (this_ptr[0x19] != 0) {
        FUN_00b33520();
        FUN_00b33530();
        plVar10 = (int64_t *)this_ptr[0x19];
        (**(code **)(*this_ptr + 0x3a8))();
        (**(code **)(*plVar10 + 0x3a0))();
        (**(code **)(*(int64_t *)this_ptr[0x19] + 0x368))();
      }
      if (this_ptr[0x1a] != 0) {
        FUN_00b33590();
        FUN_00b33530();
        plVar10 = (int64_t *)this_ptr[0x1a];
        (**(code **)(*this_ptr + 0x3a8))();
        (**(code **)(*plVar10 + 0x3a0))();
        (**(code **)(*(int64_t *)this_ptr[0x1a] + 0x368))();
      }
      FUN_01256a50();
      return;
    }
    cVar6 = (**(code **)(*plVar10 + 0x390))();
    if (cVar6 != '\0') {
      (**(code **)(*plVar10 + 0x370))();
    }
    local_38 = '\0';
    FUN_00d21140();
    local_40 = plVar10;
  } while( true );
}

