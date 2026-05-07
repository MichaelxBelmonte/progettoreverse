// Function: FUN_00e91580
// Address: 00e91580
// Size: 545 bytes
// Class: GNValue

int * FUN_00e91580(uint32_t param_1,int param_2)

{
  ushort uVar1;
  void*puVar2;
  char cVar3;
  uint uVar4;
  uint64_t uVar5;
  int *piVar6;
  uint64_t uVar7;
  int64_t *arg1;
  uint local_48 [2];
  uint32_t local_40;
  int local_3c;
  uint64_t local_38;
  
  uVar1 = *(ushort *)((int64_t)arg1 + 0x1a);
  piVar6 = (int *)*arg1;
  local_40 = param_1;
  local_3c = param_2;
  do {
    if (piVar6 == (int *)0x0) {
LAB_00e91626:
      uVar5 = FUN_00e917b0();
      piVar6 = (int *)FUN_00e91940(local_48,uVar5);
      if (piVar6 == (int *)0x0) {
        if ((char)local_40 == '\0') {
          piVar6 = (int *)FUN_00e912b0();
        }
        else {
          piVar6 = (int *)FUN_00e91a90();
        }
        piVar6[1] = local_3c;
        *(void*)(piVar6 + 2) = uVar5;
        piVar6[4] = 0;
        piVar6[5] = 0;
        uVar4 = FUN_00e31390();
        *piVar6 = (uVar4 & 0x10000) + (*(uint *)(arg1 + 3) & 0x7fff) * 2 + 1;
        puVar2 = *(void**)(piVar6 + 2);
        if (puVar2 != (void*)0x0) {
          uVar1 = *(ushort *)(arg1 + 3);
          uVar7 = 0;
          if (1 < uVar1) {
            do {
              uVar4 = (int)uVar7 + 1;
              *(uint *)((int64_t)puVar2 +
                       (uint64_t)(byte)(&g_028026ec)[(int64_t)piVar6[1] * 0x38] * 0x10 +
                       uVar7 * (&g_028026d8)[(int64_t)piVar6[1] * 7] + 0x10) = uVar4;
              uVar7 = (uint64_t)(uVar4 & 0xffff);
            } while ((int)(uVar4 & 0xffff) < (int)(uVar1 - 1));
            uVar7 = (uint64_t)(uVar4 & 0xffff);
          }
          *(void*)
           ((int64_t)puVar2 +
           (uint64_t)(byte)(&g_028026ec)[(int64_t)piVar6[1] * 0x38] * 0x10 +
           uVar7 * (&g_028026d8)[(int64_t)piVar6[1] * 7] + 0x10) = 0x7fff;
          if (*(char *)((int64_t)arg1 + 0x1c) != '\0') {
            *puVar2 = piVar6;
          }
        }
        local_38 = FUN_00e313b0();
        *(uint64_t *)(piVar6 + 4) = local_38;
        cVar3 = FUN_00e31450(3,piVar6);
        while (cVar3 == '\0') {
          *(uint64_t *)(piVar6 + 4) = local_38;
          cVar3 = FUN_00e31450(3,piVar6);
        }
      }
      return piVar6;
    }
    uVar4 = FUN_00e31390();
    local_38 = CONCAT44(local_38._4_4_,uVar4);
    if ((uVar4 & 1) == 0) {
      do {
        if ((uVar4 >> 1 & 0x7fff) < (uint)uVar1) break;
        uVar4 = uVar4 | 1;
        cVar3 = FUN_00e314a0(1,uVar4);
        if (cVar3 != '\0') goto LAB_00e91608;
        uVar4 = (uint)local_38;
      } while ((local_38 & 1) == 0);
    }
    uVar4 = uVar4 & 0xfffffffe;
LAB_00e91608:
    local_48[0] = uVar4;
    if ((uVar4 & 1) != 0) {
      if (piVar6 != (int *)0x0) {
        return piVar6;
      }
      goto LAB_00e91626;
    }
    piVar6 = *(int **)(piVar6 + 4);
  } while( true );
}

