// Function: FUN_01254260
// Address: 01254260
// Size: 1542 bytes
// Class: GNNull


/* WARNING: Removing unreachable block (ram,0x01254886) */

ulonglong FUN_01254260(ulonglong param_1,ulonglong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  pthread_key_t pVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong unaff_RBX;
  longlong lVar12;
  undefined7 uVar13;
  uint7 uVar14;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong local_d0;
  ulonglong local_c8;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  undefined4 local_6c;
  longlong local_68;
  char local_60;
  undefined4 local_54;
  int iStack_4c;
  undefined8 local_40;
  
  lVar15 = *unaff_RSI;
  if (lVar15 == unaff_RDI) {
    uVar10 = CONCAT71((int7)(unaff_RBX >> 8),1);
    goto LAB_0125485b;
  }
  pVar9 = (pthread_key_t)(param_1 >> 0x20);
  uVar10 = param_1;
  if ((param_2 >> 0x20 != 0) || (uVar10 = param_1 >> 0x20, uVar10 != 0)) {
    local_54 = 0xffffffff;
    local_6c = 0xffffffff;
    local_b0 = '\0';
    local_b8 = 0;
    uVar16 = 0;
    lVar15 = 0;
    local_c8 = param_2;
LAB_01254498:
    pvVar6 = _pthread_getspecific((pthread_key_t)uVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar4 = FUN_01252960(param_1,local_c8,&local_b8,&local_d0);
    uVar13 = (undefined7)(unaff_RBX >> 8);
    if (cVar4 == '\0') {
      uVar10 = CONCAT71(uVar13,1);
joined_r0x012547f4:
      cVar4 = (char)uVar16;
      goto joined_r0x012547f4;
    }
    cVar4 = (char)uVar16;
    if (local_d0 >> 0x20 == 0) {
      local_54 = 0;
      FUN_00e7bdb0();
      if (*(int *)(*(longlong *)(unaff_RDI + 0x48) + 0x18) < 8) {
        local_40 = FUN_00e7bdb0();
      }
      else {
        local_40 = **(ulonglong **)(*(longlong *)(unaff_RDI + 0x48) + 0x10);
      }
      lVar7 = **(longlong **)(*(longlong *)(unaff_RDI + 0x50) + 0x10);
      if (lVar15 == lVar7) {
        if ((cVar4 != '\0') || (lVar15 == 0)) goto LAB_01254733;
        unaff_RBX = CONCAT71(uVar13,1);
        FUN_00d50b00();
        lVar7 = lVar15;
      }
      else {
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        unaff_RBX = CONCAT71(uVar13,1);
        if ((cVar4 != '\0') && (lVar15 != 0)) {
          FUN_00d50b20();
        }
      }
LAB_01254680:
      lVar15 = lVar7;
      if (iStack_4c != 0) goto LAB_01254692;
LAB_01254750:
      uVar10 = local_40 >> 0x20;
      if (uVar10 != 0) {
        if (pVar9 != 0) {
          cVar4 = FUN_00e7c020();
          goto LAB_0125476f;
        }
LAB_012547d6:
        unaff_RBX = unaff_RBX & 0xffffffff;
joined_r0x01254836:
        cVar4 = (char)unaff_RBX;
        uVar10 = 0;
joined_r0x012547f4:
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        if ((cVar4 != '\0') && (lVar15 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_0125485b;
      }
    }
    else {
      iVar5 = FUN_01251eb0();
      if (iVar5 < 1) {
        FUN_00e7bdb0();
      }
      iVar1 = *(int *)(*(longlong *)(unaff_RDI + 0x48) + 0x18);
      iVar11 = iVar1 + 7;
      if (-1 < iVar1) {
        iVar11 = iVar1;
      }
      if (iVar5 < iVar11 >> 3) {
        local_40 = *(ulonglong *)
                    (*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + (longlong)iVar5 * 8);
      }
      else {
        local_40 = FUN_00e7bdb0();
      }
      lVar7 = *(longlong *)
               (*(longlong *)(*(longlong *)(unaff_RDI + 0x50) + 0x10) + (longlong)iVar5 * 8);
      uVar14 = (uint7)(uint3)((uint)iVar5 >> 8);
      if (lVar15 != lVar7) {
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        unaff_RBX = CONCAT71(uVar14,1);
        if ((cVar4 != '\0') && (lVar15 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01254680;
      }
      if ((cVar4 == '\0') && (lVar15 != 0)) {
        unaff_RBX = CONCAT71(uVar14,1);
        FUN_00d50b00();
        lVar7 = lVar15;
        goto LAB_01254680;
      }
LAB_01254733:
      unaff_RBX = uVar16;
      if (iStack_4c == 0) goto LAB_01254750;
LAB_01254692:
      uVar10 = local_40 >> 0x20;
      if (uVar10 == 0) {
        if (pVar9 == 0) goto LAB_012547d6;
        if (iStack_4c != 0) {
          cVar4 = FUN_00e7c020();
LAB_0125476f:
          if (cVar4 != '\0') goto LAB_012547d6;
        }
      }
      else if ((iStack_4c == 0) || (cVar4 = FUN_00e7c000(), cVar4 == '\0')) {
        if ((param_1 >> 0x20 == 0) ||
           (((local_40._4_4_ != 0 && (pVar9 != 0)) && (cVar4 = FUN_00e7c020(), cVar4 != '\0'))))
        goto LAB_012547d6;
        if ((iStack_4c != 0) && (pVar9 != 0)) {
          cVar4 = FUN_00e7c020();
          goto LAB_0125476f;
        }
      }
    }
    if (local_b8 != lVar15) {
      if (lVar15 == 0) {
        lVar15 = 0;
        uVar16 = unaff_RBX & 0xffffffff;
        uVar10 = 0;
        goto joined_r0x012547f4;
      }
      unaff_RBX = unaff_RBX & 0xffffffff;
      if (local_b8 == 0) goto joined_r0x01254836;
      local_80 = local_b8;
      local_78 = '\0';
      cVar4 = FUN_00d51e10();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') goto LAB_012547d6;
    }
    uVar16 = unaff_RBX & 0xffffffff;
    goto LAB_01254498;
  }
  plVar2 = *(longlong **)(unaff_RDI + 0x48);
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    lVar15 = *unaff_RSI;
    lVar7 = FUN_00e8b990();
    if (lVar7 != 0) {
      lVar15 = *(longlong *)(lVar15 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
  }
  local_60 = 0;
  lVar15 = *(longlong *)(lVar15 + 0x48);
  if (lVar15 != 0) {
    FUN_00d50b00();
  }
  local_60 = '\x01';
  local_68 = lVar15;
  cVar4 = (**(code **)(*plVar2 + 0x50))();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    uVar10 = 0;
    goto LAB_0125485b;
  }
  lVar15 = *(longlong *)(unaff_RDI + 0x50);
  if (lVar15 == 0) {
LAB_0125480e:
    iVar5 = 0;
  }
  else {
    local_b0 = 0;
    local_b8 = 0;
    local_98 = 0;
    local_a0 = 0;
    local_a8 = lVar15;
    if (0 < *(int *)(lVar15 + 0xc)) {
      lVar7 = 0;
      do {
        lVar3 = *(longlong *)(*(longlong *)(lVar15 + 0x10) + lVar7 * 8);
        lVar12 = *unaff_RSI;
        local_b8 = lVar3;
        pvVar6 = _pthread_getspecific((pthread_key_t)uVar10);
        if (pvVar6 != (void *)0x0) {
          lVar12 = *unaff_RSI;
          lVar8 = FUN_00e8b990();
          if (lVar8 != 0) {
            lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
        }
        lVar12 = *(longlong *)(*(longlong *)(*(longlong *)(lVar12 + 0x50) + 0x10) + lVar7 * 8);
        if (lVar3 != lVar12) {
          iVar5 = 1;
          if ((lVar3 == 0) || (lVar12 == 0)) goto LAB_012547fd;
          local_88 = '\0';
          local_90 = lVar12;
          cVar4 = FUN_00d51e10();
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          if (cVar4 == '\0') {
            iVar5 = 1;
            FUN_00083b20();
            goto LAB_01254810;
          }
        }
        lVar7 = lVar7 + 1;
        local_a0 = CONCAT44(local_a0._4_4_,(int)lVar7);
      } while ((int)lVar7 < *(int *)(lVar15 + 0xc));
    }
    iVar5 = 2;
LAB_012547fd:
    FUN_00083b20();
    if (iVar5 == 2) goto LAB_0125480e;
  }
LAB_01254810:
  uVar10 = (ulonglong)(iVar5 == 0);
LAB_0125485b:
  return uVar10 & 0xffffffff;
}


