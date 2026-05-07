// Function: FUN_009fa4cc
// Address: 009fa4cc
// Size: 862 bytes
// Class: Unknown

uint FUN_009fa4cc(byte *param_1,int64_t *param_2,byte *param_3)

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
  uint16_t local_70;
  undefined6 uStack_6e;
  uint64_t local_68;
  uint64_t local_60;
  uint local_58;
  uint local_38;
  
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
LAB_009fa564:
      plVar11 = (int64_t *)0x0;
    }
    else if (plVar11[3] == plVar11[4]) {
      iVar5 = (**(code **)(*plVar11 + 0x48))();
      if (iVar5 == -1) {
        *arg1 = 0;
        goto LAB_009fa564;
      }
      plVar11 = (int64_t *)*arg1;
    }
    plVar1 = (int64_t *)*param_2;
    if (plVar1 == (int64_t *)0x0) {
LAB_009fa5a5:
      if (plVar11 == (int64_t *)0x0) break;
    }
    else if (plVar1[3] == plVar1[4]) {
      iVar5 = (**(code **)(*plVar1 + 0x48))();
      if (iVar5 == -1) {
        *param_2 = 0;
        goto LAB_009fa5a5;
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
  local_38 = 0;
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
LAB_009fa65e:
      plVar10 = (int64_t *)0x0;
    }
    else if (plVar10[3] == plVar10[4]) {
      iVar5 = (**(code **)(*plVar10 + 0x48))();
      if (iVar5 == -1) {
        *arg1 = 0;
        goto LAB_009fa65e;
      }
      plVar10 = (int64_t *)*arg1;
    }
    plVar11 = (int64_t *)*param_2;
    if (plVar11 == (int64_t *)0x0) {
LAB_009fa6a5:
      if (plVar10 == (int64_t *)0x0) break;
    }
    else if (plVar11[3] == plVar11[4]) {
      iVar5 = (**(code **)(*plVar11 + 0x48))();
      if (iVar5 == -1) {
        *param_2 = 0;
        goto LAB_009fa6a5;
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
      else if (bVar3 == 0x41) {
LAB_009fa769:
        plVar10 = param_2;
        FUN_009fb55e();
        if ((*param_3 & 1) != 0) {
          operator_delete(plVar10);
        }
        *(void*)(param_3 + 0x10) = local_60;
        *(void*)(param_3 + 8) = local_68;
        *(uint64_t *)param_3 = CONCAT62(uStack_6e,local_70);
        local_70 = 0;
        *(uint *)(param_3 + 0x18) = local_58;
        local_38 = local_58 >> 0x10;
        if ((*param_3 & 1) == 0) {
          uVar6 = (uint64_t)(*param_3 >> 1);
        }
        else {
          uVar6 = *(uint64_t *)(param_3 + 8);
        }
        if ((local_58 & 0xffff) < uVar6) {
          bVar7 = true;
        }
      }
      else if (bVar3 == 0x77) {
        local_38 = FUN_009fb5c3(pbVar9 + uVar6,2);
      }
      else if (bVar3 == 0x61) goto LAB_009fa769;
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
  if (6 < (ushort)local_38) {
    local_38 = 0;
    FUN_009fb7c0();
  }
  return local_38;
}

