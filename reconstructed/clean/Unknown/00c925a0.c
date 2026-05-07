// Function: FUN_00c925a0
// Address: 00c925a0
// Size: 757 bytes
// Class: Unknown
// String references:
//   "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"

void* FUN_00c925a0(byte param_1,int param_2,uint64_t param_3)

{
  int iVar1;
  void*puVar2;
  int iVar3;
  void *pvVar4;
  byte bVar5;
  undefined7 uVar8;
  uint64_t uVar6;
  void *pvVar7;
  void*puVar9;
  int64_t arg1;
  void*this_ptr;
  byte *pbVar10;
  uint uVar11;
  undefined7 uVar12;
  int iVar13;
  uint uVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint64_t uVar17;
  byte local_34 [4];
  
  iVar13 = *(int *)(arg1 + 0x18);
  if ((int64_t)iVar13 == 0) {
    puVar2 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &g_025683c0;
    FUN_00d500e0();
    FUN_00c8e340();
    *(void*)((int64_t)puVar2 + 0x1e) = 99;
    *this_ptr = puVar2;
  }
  else {
    iVar3 = param_2 + 3;
    if (-1 < param_2) {
      iVar3 = param_2;
    }
    pvVar4 = (void *)(uint64_t)(uint)(iVar3 >> 2);
    puVar2 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &g_025683c0;
    FUN_00d500e0();
    uVar6 = 0;
    FUN_00c8e340();
    puVar9 = (void*)puVar2[2];
    if (0 < iVar13) {
      pbVar16 = *(byte **)(arg1 + 0x10);
      pbVar15 = pbVar16 + iVar13;
      uVar17 = 0;
      iVar13 = 0;
      do {
        bVar5 = *pbVar16;
        uVar8 = (undefined7)(uVar6 >> 8);
        uVar6 = CONCAT71(uVar8,bVar5);
        pbVar16 = pbVar16 + 1;
        uVar12 = (undefined7)(param_3 >> 8);
        if (iVar13 == 2) {
          local_34[2] = local_34[2] | (byte)((uVar6 & 0xffffffff) >> 6) & 3;
          local_34[3] = bVar5 & 0x3f;
          param_3 = CONCAT71(uVar12,pbVar16 == pbVar15);
LAB_00c92725:
          uVar11 = (uint)param_3;
          uVar14 = iVar13 + 2;
          pvVar4 = (void *)(uint64_t)(uVar14 & 3);
          if ((uint64_t)uVar14 - 1 < 3) {
            uVar6 = 0;
          }
          else {
            uVar6 = 0;
            do {
              *(char *)((int64_t)puVar9 + uVar6) =
                   "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                   [local_34[uVar6]];
              *(char *)((int64_t)puVar9 + uVar6 + 1) =
                   "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                   [local_34[uVar6 + 1]];
              *(char *)((int64_t)puVar9 + uVar6 + 2) =
                   "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                   [local_34[uVar6 + 2]];
              *(char *)((int64_t)puVar9 + uVar6 + 3) =
                   "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                   [local_34[uVar6 + 3]];
              uVar6 = uVar6 + 4;
            } while ((uVar14 & 0xfffffffc) != uVar6);
            puVar9 = (void*)((int64_t)puVar9 + uVar6);
          }
          if (pvVar4 != (void *)0x0) {
            pvVar7 = (void *)0x0;
            do {
              *(char *)((int64_t)puVar9 + (int64_t)pvVar7) =
                   "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                   [(local_34 + uVar6)[(int64_t)pvVar7]];
              pvVar7 = (void *)((int64_t)pvVar7 + 1);
            } while (pvVar4 != pvVar7);
            puVar9 = (void*)((int64_t)puVar9 + (int64_t)pvVar7);
          }
          if (uVar14 < 4) {
LAB_00c927de:
            param_3 = (uint64_t)uVar11;
            _memset(pvVar4,-uVar14 + 4,uVar11);
            puVar9 = (void*)((int64_t)puVar9 + (uint64_t)(-uVar14 + 3) + 1);
          }
          uVar17 = (uint64_t)((int)uVar17 + 1);
          uVar6 = uVar17 % (uint64_t)(uint)(iVar3 >> 2);
          if ((int)uVar6 != 0) {
            bVar5 = (byte)param_3 & param_1;
            param_3 = CONCAT71((int7)(param_3 >> 8),bVar5);
            iVar1 = 0;
            if (bVar5 != 1) goto LAB_00c9268b;
          }
          *puVar9 = 0xa0d;
          puVar9 = puVar9 + 1;
          iVar1 = 0;
        }
        else {
          if (iVar13 == 1) {
            local_34[1] = local_34[1] | (byte)(uVar6 & 0xffffffff) >> 4;
            param_3 = CONCAT71(uVar12,0x3c);
            pvVar4 = (void *)CONCAT71((int7)((uVar6 & 0xffffffff) >> 8),2);
            pbVar10 = local_34 + 2;
LAB_00c926e1:
            bVar5 = bVar5 << (sbyte)pvVar4 & (byte)param_3;
            uVar6 = CONCAT71(uVar8,bVar5);
            *pbVar10 = bVar5;
          }
          else if (iVar13 == 0) {
            local_34[0] = (byte)(uVar6 & 0xffffffff) >> 2;
            param_3 = CONCAT71(uVar12,0x30);
            pvVar4 = (void *)CONCAT71((int7)((uVar6 & 0xffffffff) >> 8),4);
            pbVar10 = local_34 + 1;
            goto LAB_00c926e1;
          }
          param_3 = CONCAT71((int7)(param_3 >> 8),pbVar16 == pbVar15);
          uVar11 = (uint)param_3;
          if ((iVar13 + 1 == 3) || (iVar1 = iVar13 + 1, pbVar16 == pbVar15)) {
            if (-2 < iVar13) goto LAB_00c92725;
            uVar14 = 0;
            goto LAB_00c927de;
          }
        }
LAB_00c9268b:
        iVar13 = iVar1;
      } while (pbVar16 < pbVar15);
    }
    FUN_00c8e340();
    *this_ptr = puVar2;
  }
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

