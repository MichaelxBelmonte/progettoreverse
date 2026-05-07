// Function: FUN_009c8fcc
// Address: 009c8fcc
// Size: 551 bytes
// Class: GNList
// String references:
//   "\nCaused by: "


longlong FUN_009c8fcc(char *param_1,undefined8 param_2,ulong param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  longlong lVar4;
  void *pvVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  char *pcVar11;
  void *pvVar12;
  char *pcVar13;
  longlong unaff_RDI;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  byte local_98;
  undefined2 local_42;
  undefined6 uStack_40;
  
  lVar4 = *(longlong *)PTR____stack_chk_guard_024a9898;
  FUN_009c8eec();
  std::string::assign(param_1);
  lVar16 = *(longlong *)(unaff_RDI + 0x10);
  plVar15 = *(longlong **)(unaff_RDI + 0x18);
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar15[1] = plVar15[1] + 1;
    UNLOCK();
  }
  if (lVar16 != 0) {
    plVar14 = plVar15;
    do {
      FUN_009c8de4();
      if ((*(byte *)(unaff_RDI + 0x58) & 1) == 0) {
        uVar10 = (ulong)(*(byte *)(unaff_RDI + 0x58) >> 1);
        pcVar13 = (char *)(unaff_RDI + 0x59);
      }
      else {
        uVar10 = (ulong)*(undefined8 *)(unaff_RDI + 0x60);
        pcVar13 = *(char **)(unaff_RDI + 0x68);
      }
      puVar8 = (ulonglong *)std::string::insert(uVar10,pcVar13,param_3);
      pcVar13 = (char *)*puVar8;
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      pcVar11 = pcVar13;
      FUN_009c8eec();
      puVar9 = (undefined8 *)std::string::append(pcVar11);
      uVar2 = *(undefined1 *)puVar9;
      uVar3 = *(undefined1 *)((longlong)puVar9 + 1);
      uStack_40 = (undefined6)((ulonglong)puVar9[1] >> 0x10);
      pvVar5 = *(void **)((longlong)puVar9 + 2);
      local_42 = (undefined2)((ulonglong)pvVar5 >> 0x30);
      uVar6 = puVar9[2];
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      if ((*(byte *)(unaff_RDI + 0x58) & 1) != 0) {
        operator_delete(pvVar5);
      }
      *(undefined1 *)(unaff_RDI + 0x58) = uVar2;
      *(undefined1 *)(unaff_RDI + 0x59) = uVar3;
      pvVar12 = (void *)CONCAT62(uStack_40,local_42);
      *(void **)(unaff_RDI + 0x60) = pvVar12;
      *(void **)(unaff_RDI + 0x5a) = pvVar5;
      *(undefined8 *)(unaff_RDI + 0x68) = uVar6;
      if (((ulonglong)pcVar13 & 1) != 0) {
        operator_delete(pvVar12);
      }
      if ((local_98 & 1) != 0) {
        operator_delete(pvVar12);
      }
      lVar7 = *(longlong *)(lVar16 + 0x10);
      plVar15 = *(longlong **)(lVar16 + 0x18);
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar15[1] = plVar15[1] + 1;
        UNLOCK();
      }
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar14 + 1;
        lVar16 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar16 == 0) {
          (**(code **)(*plVar14 + 0x10))();
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar14 = plVar15;
      lVar16 = lVar7;
    } while (lVar7 != 0);
  }
  if ((*(byte *)(unaff_RDI + 0x58) & 1) == 0) {
    lVar16 = unaff_RDI + 0x59;
  }
  else {
    lVar16 = *(longlong *)(unaff_RDI + 0x68);
  }
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar15 + 1;
    lVar7 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plVar15 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == lVar4) {
    return lVar16;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


