// Function: FUN_0128f850
// Address: 0128f850
// Size: 1936 bytes
// Class: MUAudioSourceAttackItem


/* WARNING: Removing unreachable block (ram,0x0128fde6) */
/* WARNING: Removing unreachable block (ram,0x0128fdef) */
/* WARNING: Removing unreachable block (ram,0x0128fa99) */
/* WARNING: Removing unreachable block (ram,0x0128faa2) */
/* WARNING: Removing unreachable block (ram,0x0128f8d9) */
/* WARNING: Removing unreachable block (ram,0x0128f8e2) */
/* WARNING: Removing unreachable block (ram,0x0128fd1e) */
/* WARNING: Removing unreachable block (ram,0x0128fd2b) */
/* WARNING: Removing unreachable block (ram,0x0128fd52) */
/* WARNING: Removing unreachable block (ram,0x0128fd5f) */
/* WARNING: Removing unreachable block (ram,0x0128fe59) */
/* WARNING: Removing unreachable block (ram,0x0128fe62) */
/* WARNING: Removing unreachable block (ram,0x0128fb57) */
/* WARNING: Removing unreachable block (ram,0x0128fb80) */
/* WARNING: Removing unreachable block (ram,0x0128fb59) */
/* WARNING: Removing unreachable block (ram,0x0128fb82) */

longlong * FUN_0128f850(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  longlong *plVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong local_b8;
  char local_b0;
  undefined4 local_98;
  undefined4 uStack_94;
  char local_90;
  longlong *local_60;
  char local_58;
  pthread_key_t local_48;
  
  plVar2 = local_60;
  plVar6 = (longlong *)*param_2;
  if (plVar6 == (longlong *)0x0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar4 = *unaff_RSI;
    if ((char)unaff_RSI[1] != '\0') {
      *unaff_RDI = lVar4;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      *(undefined1 *)(unaff_RSI + 1) = 0;
      return unaff_RDI;
    }
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar4;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return unaff_RDI;
  }
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar3 != (void *)0x0) {
    plVar6 = (longlong *)*param_2;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x3f8))();
  if ((local_58 == '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  plVar6 = (longlong *)*unaff_RSI;
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar3 != (void *)0x0) {
    plVar6 = (longlong *)*unaff_RSI;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x3f8))();
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d51d20();
  if (local_58 == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_90 != '\0') && (CONCAT44(uStack_94,local_98) != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb6d0();
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb4a0();
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  plVar6 = local_60;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    plVar6 = (longlong *)local_60[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar6 + 0x378))();
  bVar9 = local_60 == (longlong *)0x0;
  if ((local_58 == '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  if (local_58 == '\0') {
    if (local_60 == (longlong *)0x0) {
      bVar10 = true;
      goto LAB_0128fd8c;
    }
    FUN_00d50b00();
  }
  bVar10 = local_60 == (longlong *)0x0;
  if ((local_60 != (longlong *)0x0) && (local_60 != (longlong *)0x0)) {
    local_58 = '\0';
    local_60 = (longlong *)0x0;
    local_48 = 0xffffffff;
    while( true ) {
      lVar4 = (longlong)(int)local_48;
      local_48 = local_48 + 1;
      uVar1 = *(uint *)((longlong)plVar2 + 0xc);
      param_1 = (longlong *)(ulonglong)uVar1;
      if ((int)uVar1 <= (int)local_48) break;
      local_60 = *(longlong **)(plVar2[2] + 8 + lVar4 * 8);
      if ((local_48 != 0) && (pVar5 = uVar1 - 1, local_48 != pVar5)) {
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar11 = FUN_013faf20();
        pvVar3 = _pthread_getspecific(pVar5);
        plVar6 = plVar2;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          plVar6 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
        pvVar3 = _pthread_getspecific(pVar5);
        plVar7 = plVar2;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          plVar7 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
        uVar12 = (**(code **)(*plVar7 + 0x380))(uVar11);
        (**(code **)(*plVar6 + 0x410))(uVar12,uVar11);
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_01a81420();
    bVar10 = false;
    bVar9 = false;
  }
LAB_0128fd8c:
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  if ((local_58 == '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  plVar6 = plVar2;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    plVar6 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar6 + 0x378))();
  if ((local_58 == '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if (local_60 != (longlong *)0x0) {
    for (iVar8 = 0; iVar8 < *(int *)((longlong)local_60 + 0xc); iVar8 = iVar8 + 1) {
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      plVar6 = plVar2;
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        param_1 = plVar2;
        plVar6 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
      }
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013faf20();
      (**(code **)(*plVar6 + 0x3b8))();
      FUN_013faee0();
    }
    FUN_01a81420();
  }
  *unaff_RDI = (longlong)plVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (local_60 != (longlong *)0x0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  if (!bVar10) {
    FUN_00d50b20();
  }
  if (!bVar9) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


