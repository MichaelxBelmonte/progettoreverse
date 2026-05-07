// Function: FUN_00a00ec8
// Address: 00a00ec8
// Size: 654 bytes
// Class: MUSpectrumShaper


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00a00ec8(ulong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  void *pvVar12;
  longlong unaff_RDI;
  size_t sVar13;
  undefined4 uVar14;
  byte local_40;
  uint local_38;
  
  if (*(int *)(unaff_RDI + 0x68) == 1) {
    *(longlong *)(unaff_RDI + 0x70) = *(longlong *)(unaff_RDI + 0x70) + 1;
  }
  else if (*(int *)(unaff_RDI + 0x68) == 0) {
    puVar9 = operator_new(param_1);
    puVar9[1] = 0;
    puVar9[2] = 0;
    puVar9[3] = 0;
    puVar9[4] = 0;
    *puVar9 = &DAT_0252c2f0;
    uVar11 = 1;
    sVar13 = 0;
    FUN_00a14fd8(1,0x400);
    puVar10 = operator_new(uVar11);
    puVar10[2] = 0;
    puVar10[1] = 0;
    *puVar10 = &DAT_0251fb50;
    puVar10[3] = puVar9;
    *(undefined8 **)(unaff_RDI + 0x50) = puVar9;
    plVar3 = *(longlong **)(unaff_RDI + 0x58);
    *(undefined8 **)(unaff_RDI + 0x58) = puVar10;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    uVar14 = *(undefined4 *)(unaff_RDI + 0x60);
    uVar8 = FUN_009e9b47();
    uVar7 = _UNK_023d4e7c;
    uVar6 = _UNK_023d4e78;
    uVar5 = _UNK_023d4e74;
    uVar4 = _DAT_023d4e70;
    *(undefined4 *)(unaff_RDI + 0x7c) = 0x40;
    plVar3 = *(longlong **)(unaff_RDI + 0x50);
    puVar10 = (undefined8 *)plVar3[3];
    puVar9 = puVar10 + 8;
    if ((undefined8 *)plVar3[4] < puVar9) {
      (**(code **)(*plVar3 + 0x80))(puVar9,0x40);
    }
    else {
      puVar10[7] = 0;
      puVar10[6] = 0;
      puVar10[5] = 0;
      puVar10[4] = CONCAT44(0x40,uVar14);
      puVar10[3] = 0x6b684354;
      puVar10[2] = CONCAT44(1,uVar7);
      puVar10[1] = CONCAT44(uVar6,uVar5);
      *puVar10 = CONCAT44(uVar4,uVar8);
      plVar3[3] = (longlong)puVar9;
    }
    if (*(char *)(unaff_RDI + 100) == '\0') {
      *(undefined4 *)(unaff_RDI + 0x78) = 0;
    }
    else {
      FUN_0094c1c0();
      uVar14 = FUN_0097e92b();
      if ((local_40 & 1) == 0) {
        local_38 = (uint)(local_40 >> 1);
      }
      plVar3 = *(longlong **)(unaff_RDI + 0x50);
      pvVar12 = (void *)(ulonglong)(local_38 + 1);
      lVar2 = plVar3[3];
      if ((ulonglong)plVar3[4] < (ulonglong)(lVar2 + (longlong)pvVar12)) {
        (**(code **)(*plVar3 + 0x80))(uVar14,pvVar12);
      }
      else {
        _memcpy(puVar9,pvVar12,sVar13);
        plVar3[3] = lVar2 + (longlong)pvVar12;
      }
      *(int *)(unaff_RDI + 0x78) = *(int *)(unaff_RDI + 0x7c);
      *(uint *)(unaff_RDI + 0x7c) = local_38 + 1 + *(int *)(unaff_RDI + 0x7c);
      if ((local_40 & 1) != 0) {
        operator_delete(puVar9);
      }
    }
    plVar3 = *(longlong **)(unaff_RDI + 0x58);
    if (plVar3 == (longlong *)0x0) {
      FUN_00a01188();
    }
    else {
      LOCK();
      plVar3[1] = plVar3[1] + 1;
      UNLOCK();
      FUN_00a01188();
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    *(longlong *)(unaff_RDI + 0x70) = *(longlong *)(unaff_RDI + 0x70) + 1;
    *(undefined4 *)(unaff_RDI + 0x68) = 1;
  }
  return 0;
}


