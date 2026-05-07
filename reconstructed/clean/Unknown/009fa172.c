// Function: FUN_009fa172
// Address: 009fa172
// Size: 858 bytes
// Class: Unknown

uint16_t FUN_009fa172(byte *param_1,int64_t *param_2,byte *param_3)

{
  int64_t *plVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint64_t uVar6;
  bool bVar7;
  byte *pbVar8;
  byte *pbVar9;
  int64_t *plVar10;
  int64_t *plVar11;
  int64_t *arg1;
  byte *pbVar12;
  uint16_t local_78;
  undefined6 uStack_76;
  uint64_t local_70;
  uint64_t local_68;
  uint local_60;
  
  pbVar8 = param_1;
  plVar10 = param_2;
  while( true ) {
    plVar11 = (int64_t *)*arg1;
    if ((char *)plVar11[3] == (char *)plVar11[4]) {
      cVar2 = (**(code **)(*plVar11 + 0x48))();
    }
    else {
      cVar2 = *(char *)plVar11[3];
    }
    if ((uint)(int)cVar2 < 0x80) {
      uVar4 = *(uint *)(PTR___DefaultRuneLocale_0249c238 + (uint64_t)(uint)(int)cVar2 * 4 + 0x3c) &
              0x4000;
      pbVar8 = PTR___DefaultRuneLocale_0249c238;
    }
    else {
      uVar4 = ___maskrune((__darwin_ct_rune_t)pbVar8,(ulong)plVar10);
    }
    if (uVar4 == 0) break;
    plVar11 = (int64_t *)*arg1;
    if (plVar11 == (int64_t *)0x0) {
LAB_009fa20a:
      plVar11 = (int64_t *)0x0;
    }
    else if (plVar11[3] == plVar11[4]) {
      iVar5 = (**(code **)(*plVar11 + 0x48))();
      if (iVar5 == -1) {
        *arg1 = 0;
        goto LAB_009fa20a;
      }
      plVar11 = (int64_t *)*arg1;
    }
    plVar1 = (int64_t *)*param_2;
    if (plVar1 == (int64_t *)0x0) {
LAB_009fa24b:
      if (plVar11 == (int64_t *)0x0) break;
    }
    else if (plVar1[3] == plVar1[4]) {
      iVar5 = (**(code **)(*plVar1 + 0x48))();
      if (iVar5 == -1) {
        *param_2 = 0;
        goto LAB_009fa24b;
      }
      pbVar8 = (byte *)(uint64_t)(*param_2 == 0);
      if ((plVar11 == (int64_t *)0x0) == (*param_2 == 0)) break;
    }
    else if (plVar11 != (int64_t *)0x0) break;
    plVar11 = (int64_t *)*arg1;
    if (plVar11[3] == plVar11[4]) {
      (**(code **)(*plVar11 + 0x50))();
    }
    else {
      plVar11[3] = plVar11[3] + 1;
    }
  }
  bVar3 = *param_1;
  if ((bVar3 & 1) == 0) {
    pbVar8 = param_1 + 1;
  }
  else {
    pbVar8 = *(byte **)(param_1 + 0x10);
  }
  bVar7 = false;
  while( true ) {
    if ((bVar3 & 1) == 0) {
      uVar6 = (uint64_t)(bVar3 >> 1);
      pbVar12 = param_1 + 1;
    }
    else {
      uVar6 = *(uint64_t *)(param_1 + 8);
      pbVar12 = *(byte **)(param_1 + 0x10);
    }
    if (pbVar12 + uVar6 == pbVar8) break;
    plVar10 = (int64_t *)*arg1;
    if (plVar10 == (int64_t *)0x0) {
LAB_009fa304:
      plVar10 = (int64_t *)0x0;
    }
    else if (plVar10[3] == plVar10[4]) {
      iVar5 = (**(code **)(*plVar10 + 0x48))();
      if (iVar5 == -1) {
        *arg1 = 0;
        goto LAB_009fa304;
      }
      plVar10 = (int64_t *)*arg1;
    }
    plVar11 = (int64_t *)*param_2;
    if (plVar11 == (int64_t *)0x0) {
LAB_009fa34b:
      if (plVar10 == (int64_t *)0x0) break;
    }
    else if (plVar11[3] == plVar11[4]) {
      iVar5 = (**(code **)(*plVar11 + 0x48))();
      if (iVar5 == -1) {
        *param_2 = 0;
        goto LAB_009fa34b;
      }
      if ((plVar10 == (int64_t *)0x0) == (*param_2 == 0)) break;
    }
    else if (plVar10 != (int64_t *)0x0) break;
    pbVar12 = pbVar8 + 1;
    if (*pbVar8 == 0x25) {
      if ((*param_1 & 1) == 0) {
        uVar6 = (uint64_t)(*param_1 >> 1);
        pbVar9 = param_1 + 1;
      }
      else {
        uVar6 = *(uint64_t *)(param_1 + 8);
        pbVar9 = *(byte **)(param_1 + 0x10);
      }
      if (pbVar12 == pbVar9 + uVar6) break;
      bVar3 = *pbVar12;
      if (bVar3 == 0x25) {
        plVar10 = (int64_t *)*arg1;
        if (plVar10[3] == plVar10[4]) {
          (**(code **)(*plVar10 + 0x50))();
        }
        else {
          plVar10[3] = plVar10[3] + 1;
        }
      }
      else if (bVar3 == 0x42) {
LAB_009fa40f:
        plVar10 = param_2;
        FUN_009fb55e();
        if ((*param_3 & 1) != 0) {
          operator_delete(plVar10);
        }
        *(void*)(param_3 + 0x10) = local_68;
        *(void*)(param_3 + 8) = local_70;
        *(uint64_t *)param_3 = CONCAT62(uStack_76,local_78);
        local_78 = 0;
        *(uint *)(param_3 + 0x18) = local_60;
        if ((*param_3 & 1) == 0) {
          uVar6 = (uint64_t)(*param_3 >> 1);
        }
        else {
          uVar6 = *(uint64_t *)(param_3 + 8);
        }
        if ((local_60 & 0xffff) < uVar6) {
          bVar7 = true;
        }
      }
      else if (bVar3 == 0x6d) {
        FUN_009fb5c3(pbVar9 + uVar6,2);
      }
      else if (bVar3 == 0x62) goto LAB_009fa40f;
      pbVar12 = pbVar8 + 2;
    }
    else if (bVar7) {
      bVar7 = false;
    }
    else {
      plVar10 = (int64_t *)*arg1;
      if (plVar10[3] == plVar10[4]) {
        (**(code **)(*plVar10 + 0x50))();
      }
      else {
        plVar10[3] = plVar10[3] + 1;
      }
    }
    bVar3 = *param_1;
    pbVar8 = pbVar12;
  }
  FUN_0097e070();
  return 1;
}

