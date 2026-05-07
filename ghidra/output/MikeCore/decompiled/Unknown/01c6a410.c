// Function: FUN_01c6a410
// Address: 01c6a410
// Size: 1608 bytes
// Class: Unknown


undefined4 FUN_01c6a410(undefined4 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  void *pvVar8;
  pthread_key_t pVar9;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar10;
  undefined4 uVar11;
  longlong local_108;
  char local_100;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong *local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  longlong local_70;
  char local_63;
  char local_62 [2];
  
  lVar1 = *(longlong *)PTR____stack_chk_guard_024a9898;
  iVar5 = FUN_01d3a5a0();
  if ((((iVar5 != 1) || (iVar5 = FUN_01d3b620(), iVar5 != 1)) ||
      (iVar5 = FUN_01d3b630(), iVar5 != 1)) || (lVar2 = unaff_RDI[0x31], lVar2 == 0)) {
    uVar6 = 0;
    goto LAB_01c6a50c;
  }
  FUN_00d50b00();
  if (*(int *)((longlong)unaff_RDI + 0x1cc) == 0) {
    uVar6 = 0;
  }
  else {
    local_62[0] = '\x01';
    local_62[1] = 0;
    plVar3 = (longlong *)unaff_RDI[0x2f];
    local_a0 = lVar2;
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    FUN_00083c20();
    if (plVar3 == (longlong *)0x0) {
LAB_01c6a4f0:
      plVar10 = DAT_02802688;
      puVar7 = &DAT_02802688;
      if (DAT_02802690 != '\0') goto LAB_01c6a500;
      if (DAT_02802688 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      (**(code **)(*plVar3 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_01c6a4f0;
      puVar7 = (undefined8 *)&stack0xffffffffffffffa0;
      plVar10 = plVar3;
LAB_01c6a500:
      *(undefined1 *)(puVar7 + 1) = 0;
    }
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    local_b8 = plVar10;
    if ((plVar10 != (longlong *)0x0) &&
       ((**(code **)(*plVar10 + 0x3a0))(), plVar3 != (longlong *)0x0)) {
      FUN_00d50b20();
      (**(code **)(*plVar10 + 0x3a0))();
      (**(code **)(*plVar3 + 0x3c8))();
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_01d3b590();
    plVar3 = (longlong *)unaff_RDI[0x2e];
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_70 = (**(code **)(*plVar3 + 0x388))(param_1);
    FUN_00d50b20();
    pVar9 = (int)local_62 + 1;
    FUN_01c6ada0((int)local_70,local_62);
    local_63 = local_62[0];
    if (local_62[0] == '\0') {
      pvVar8 = _pthread_getspecific(pVar9);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_a8 = 0;
      lVar2 = unaff_RDI[0x42];
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      local_a8 = '\x01';
      pVar9 = *(pthread_key_t *)((longlong)unaff_RDI + 0x1cc);
      local_b0 = lVar2;
      FUN_016d8980(pVar9,&local_b0,(int)unaff_RDI[0x39]);
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*unaff_RDI + 0x620))();
    uVar6 = FUN_016bf360();
    if ((char)uVar6 != '\0') {
      FUN_00d50b00();
      FUN_01c427d0();
      FUN_01c45750();
      local_78 = local_98;
      if ((local_90 == '\0') && (local_98 != 0)) {
        FUN_00d50b00();
      }
      uVar11 = FUN_01c84970();
      pvVar8 = _pthread_getspecific(pVar9);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016c9480((int)local_70);
      FUN_01c858c0();
      if (unaff_RDI[0x2d] != 0) {
        FUN_00d50b00();
        lVar2 = unaff_RDI[0x39];
        FUN_00d50b20();
        if ((int)lVar2 == 1) {
          lVar2 = unaff_RDI[0x2d];
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          local_70 = lVar2;
          pvVar8 = _pthread_getspecific(pVar9);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_016c46a0(0,0);
          FUN_00d470c0();
          local_88 = local_98;
          local_80 = 0;
          if (local_90 == '\0') {
            if (local_98 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_90 = '\0';
          }
          lVar2 = local_70;
          local_80 = '\x01';
          FUN_019f1280();
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
        }
      }
      local_d8 = *unaff_RSI;
      local_d0 = '\0';
      FUN_01c67d80(param_1,local_63,&local_d8);
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI[0x2d] != 0) {
        FUN_00d50b00();
        lVar2 = unaff_RDI[0x39];
        FUN_00d50b20();
        if ((int)lVar2 == 1) {
          lVar2 = unaff_RDI[0x2d];
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          local_c0 = '\0';
          local_c8 = 0;
          FUN_019f1280();
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
        }
      }
      FUN_01c858c0(uVar11);
      if (local_78 != 0) {
        FUN_00d50b20();
      }
      FUN_01c429a0();
      FUN_00d50b20();
    }
    if (local_b8 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_01c6a50c:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == lVar1) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


