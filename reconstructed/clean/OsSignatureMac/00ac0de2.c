// Function: FUN_00ac0de2
// Address: 00ac0de2
// Size: 825 bytes
// Class: OsSignatureMac
// String references:
//   "The image is too small to be a valid Mach-O binary: %ld"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libpaceutil/platform/mac/S...
//   "void pace::SimpleMachOBinary::initWithBinaryImage(pace::SharedBinaryImage_T)"
//   "Could not find a valid fat or Mach-O header."

void FUN_00ac0de2(void *param_1,uint64_t param_2,size_t param_3)

{
  int64_t *plVar1;
  int iVar2;
  int64_t lVar3;
  int64_t *plVar4;
  uint8_t (*pauVar5) [16];
  uint uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int *piVar9;
  void*puVar10;
  uint8_t (*pauVar11) [16];
  char *pcVar12;
  void *pvVar13;
  void*arg1;
  int64_t this_ptr;
  uint64_t uVar14;
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  
  lVar3 = *(int64_t *)(this_ptr + 0x38);
  *(void*)(this_ptr + 0x28) = *(void*)(this_ptr + 0x20);
  *(void*)(this_ptr + 0x38) = 0;
  if (lVar3 != 0) {
    operator_delete(param_1);
  }
  lVar3 = *(int64_t *)(this_ptr + 0x40);
  *(void*)(this_ptr + 0x40) = 0;
  if (lVar3 != 0) {
    operator_delete(param_1);
  }
  lVar3 = *(int64_t *)(this_ptr + 0x18);
  *(void*)(this_ptr + 0x18) = 0;
  if (lVar3 != 0) {
    operator_delete(param_1);
  }
  pcVar12 = (char *)*arg1;
  lVar3 = arg1[1];
  if (lVar3 != 0) {
    LOCK();
    *(int64_t *)(lVar3 + 8) = *(int64_t *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(char **)(this_ptr + 8) = pcVar12;
  plVar4 = *(int64_t **)(this_ptr + 0x10);
  *(int64_t *)(this_ptr + 0x10) = lVar3;
  if (plVar4 != (int64_t *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar4 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  uVar7 = (**(code **)(**(int64_t **)(this_ptr + 8) + 0x10))();
  if (uVar7 < 8) {
    FUN_00925fd0();
    uVar8 = FUN_00926010();
    FUN_00983230();
    pcVar12 = "void pace::SimpleMachOBinary::initWithBinaryImage(pace::SharedBinaryImage_T)";
    uVar14 = FUN_00928ab0("void pace::SimpleMachOBinary::initWithBinaryImage(pace::SharedBinaryImage_T)"
                          ,0x56);
    FUN_009cbbdb(uVar14,uVar8);
  }
  piVar9 = (int *)(**(code **)(**(int64_t **)(this_ptr + 8) + 0x18))();
  if ((*piVar9 == -0x35014542) || (*piVar9 == -0x41450136)) {
    puVar10 = operator_new((ulong)pcVar12);
    lVar3 = *(int64_t *)(this_ptr + 0x18);
    *(void**)(this_ptr + 0x18) = puVar10;
    if (lVar3 != 0) {
      operator_delete(pcVar12);
      puVar10 = *(void**)(this_ptr + 0x18);
    }
    *puVar10 = *(void*)piVar9;
    iVar2 = *piVar9;
    pvVar13 = *(void **)(this_ptr + 0x18);
    uVar6 = *(uint *)((int64_t)pvVar13 + 4);
    if (iVar2 == -0x41450136) {
      uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
      *(uint *)((int64_t)pvVar13 + 4) = uVar6;
    }
    if (uVar6 == 0) {
      return;
    }
    FUN_00ac13be();
    _memcpy(pvVar13,(void *)((uint64_t)*(uint *)(*(int64_t *)(this_ptr + 0x18) + 4) * 0x14),
            param_3);
    auVar15 = g_023e0070;
    if (iVar2 != -0x41450136) {
      return;
    }
    pauVar5 = *(uint8_t (**) [16])(this_ptr + 0x28);
    for (pauVar11 = *(uint8_t (**) [16])(this_ptr + 0x20); pauVar11 != pauVar5;
        pauVar11 = (uint8_t (*) [16])(pauVar11[1] + 4)) {
      auVar16 = pshufb(*pauVar11,auVar15);
      *pauVar11 = auVar16;
      uVar6 = *(uint *)pauVar11[1];
      *(uint *)pauVar11[1] =
           uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
    }
    return;
  }
  piVar9 = (int *)(**(code **)(**(int64_t **)(this_ptr + 8) + 0x18))();
  iVar2 = *piVar9;
  if (iVar2 < -0x1120532) {
    if (iVar2 != -0x31051202) {
      if (iVar2 != -0x30051202) {
LAB_00ac10ce:
        FUN_00925fd0();
        uVar8 = FUN_00926010();
        uVar14 = FUN_00928ab0("void pace::SimpleMachOBinary::initWithBinaryImage(pace::SharedBinaryImage_T)"
                              ,0x9c);
        FUN_009cbbdb(uVar14,uVar8);
        return;
      }
LAB_00ac105c:
      pauVar11 = operator_new((ulong)pcVar12);
      lVar3 = *(int64_t *)(this_ptr + 0x40);
      *(uint8_t (**) [16])(this_ptr + 0x40) = pauVar11;
      if (lVar3 != 0) {
        operator_delete(pcVar12);
        pauVar11 = *(uint8_t (**) [16])(this_ptr + 0x40);
      }
      *(void*)(pauVar11[1] + 8) = *(void*)(piVar9 + 6);
      *(void*)pauVar11[1] = *(void*)(piVar9 + 4);
      uVar8 = *(void*)piVar9;
      *(void*)(*pauVar11 + 8) = *(void*)(piVar9 + 2);
      *(void*)*pauVar11 = uVar8;
      if (*piVar9 != -0x30051202) {
        return;
      }
      goto LAB_00ac10a3;
    }
  }
  else {
    if (iVar2 == -0x1120531) goto LAB_00ac105c;
    if (iVar2 != -0x1120532) goto LAB_00ac10ce;
  }
  pauVar11 = operator_new((ulong)pcVar12);
  lVar3 = *(int64_t *)(this_ptr + 0x38);
  *(uint8_t (**) [16])(this_ptr + 0x38) = pauVar11;
  if (lVar3 != 0) {
    operator_delete(pcVar12);
    pauVar11 = *(uint8_t (**) [16])(this_ptr + 0x38);
  }
  *(int *)(pauVar11[1] + 8) = piVar9[6];
  *(void*)pauVar11[1] = *(void*)(piVar9 + 4);
  uVar8 = *(void*)piVar9;
  *(void*)(*pauVar11 + 8) = *(void*)(piVar9 + 2);
  *(void*)*pauVar11 = uVar8;
  if (*piVar9 != -0x31051202) {
    return;
  }
LAB_00ac10a3:
  auVar15 = pshufb(*pauVar11,g_023e0070);
  *pauVar11 = auVar15;
  uVar6 = *(uint *)pauVar11[1];
  *(uint *)pauVar11[1] =
       uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
  uVar6 = *(uint *)(pauVar11[1] + 4);
  *(uint *)(pauVar11[1] + 4) =
       uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
  uVar6 = *(uint *)(pauVar11[1] + 8);
  *(uint *)(pauVar11[1] + 8) =
       uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
  return;
}

