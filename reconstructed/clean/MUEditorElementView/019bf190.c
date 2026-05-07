// Function: FUN_019bf190
// Address: 019bf190
// Size: 588 bytes
// Class: MUEditorElementView

void FUN_019bf190(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  bool bVar3;
  int64_t *plVar4;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar5;
  int iVar6;
  int64_t local_98;
  char local_90;
  
  plVar4 = *(int64_t **)(this_ptr + 0x2c8);
  plVar1 = (int64_t *)*arg1;
  if (plVar4 == plVar1) {
    return;
  }
  if (plVar4 == (int64_t *)0x0) {
    plVar5 = (int64_t *)0x0;
    plVar4 = (int64_t *)0x0;
    if (plVar1 != (int64_t *)0x0) goto LAB_019bf1e8;
LAB_019bf214:
    if (plVar4 != (int64_t *)0x0) goto LAB_019bf21d;
LAB_019bf2b8:
    bVar3 = false;
    local_98 = 0;
  }
  else {
    (**(code **)(*plVar4 + 0x418))();
    plVar4 = *(int64_t **)(this_ptr + 0x2c8);
    plVar5 = plVar4;
    plVar1 = (int64_t *)*arg1;
    if (plVar4 == (int64_t *)*arg1) goto LAB_019bf214;
LAB_019bf1e8:
    plVar4 = plVar1;
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    *(int64_t **)(this_ptr + 0x2c8) = plVar4;
    if (plVar5 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar4 = *(int64_t **)(this_ptr + 0x2c8);
      goto LAB_019bf214;
    }
    if (plVar4 == (int64_t *)0x0) goto LAB_019bf2b8;
LAB_019bf21d:
    FUN_00d50b00();
    (**(code **)(*plVar4 + 0x410))();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    (**(code **)(**(int64_t **)(this_ptr + 0x2c8) + 0x388))();
    if (local_98 == 0) {
      bVar3 = false;
      lVar2 = *(int64_t *)(this_ptr + 0x250);
      goto joined_r0x019bf2c7;
    }
    bVar3 = true;
    if (local_90 == '\0') {
      FUN_00d50b00();
    }
  }
  lVar2 = *(int64_t *)(this_ptr + 0x250);
joined_r0x019bf2c7:
  if (lVar2 != 0) {
    if (0 < *(int *)(lVar2 + 0xc)) {
      iVar6 = 0;
      do {
        FUN_01981860();
        FUN_01983f50();
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(lVar2 + 0xc));
    }
    FUN_01a01cb0();
  }
  FUN_01e4ac90();
  if ((bVar3) && (local_98 != 0)) {
    FUN_00d50b20();
  }
  return;
}

